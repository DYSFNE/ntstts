/* filename: ntstts_decode.c */

#include "ntstts.h"

static ULONG
extract_field(ULONG status, const struct ntstatus_subfield_desc *desc)
{
    return (status & desc->mask) >> desc->shift;
}

void
decode_ntstatus(ULONG status, struct ntstatus_decoded *out)
{
    out->raw = status;

    out->severity_value = 
        extract_field(out->raw, &ntstatus_field_table[NTSTATUS_FIELD_SEVERITY]);

    out->customer_value = 
        extract_field(out->raw, &ntstatus_field_table[NTSTATUS_FIELD_CUSTOMER]);

    out->reserved_value = 
        extract_field(out->raw, &ntstatus_field_table[NTSTATUS_FIELD_RESERVED]);

    out->facility_value = 
        extract_field(out->raw, &ntstatus_field_table[NTSTATUS_FIELD_FACILITY]);

    out->code_value = 
        extract_field(out->raw, &ntstatus_field_table[NTSTATUS_FIELD_CODE]);

    /* call these functions only if the NTSTATUS is Microsoft defined */
    if (out->customer_value == 0) {
        w_lookup_severity(out->severity_value, &out->severity_info);
        w_lookup_facility(out->facility_value, &out->facility_info);
        W_lookup_ntstatus(out->raw, &out->status_info);
    }
    /* add functionality for custom ntstatus codes */
}
