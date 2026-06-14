/* filename: ntstts_decode.c */

#include "ntstts.h"

static ULONG
extract_field(ULONG status, const struct ntstatus_subfield_desc *desc)
{
    return (status & desc->mask) >> desc->shift;
}

void
decode_ntstatus(ULONG status, struct ntstatus_decoded *msg)
{
    msg->raw = status;

    msg->severity_value = 
        extract_field(msg->raw, &ntstatus_field_table[SEVERITY]);

    msg->customer_value = 
        extract_field(msg->raw, &ntstatus_field_table[CUSTOMER]);

    msg->reserved_value = 
        extract_field(msg->raw, &ntstatus_field_table[RESERVED]);

    msg->facility_value = 
        extract_field(msg->raw, &ntstatus_field_table[FACILITY]);

    msg->code_value = 
        extract_field(msg->raw, &ntstatus_field_table[CODE]);

    /* call these functions only if the NTSTATUS is Microsoft defined */
    if (msg->customer_value == 0) {
        w_lookup_severity(msg->severity_value, &msg->severity_info);
        w_lookup_facility(msg->facility_value, &msg->facility_info);
        W_lookup_ntstatus(msg->raw, &msg->status_info);
    }
}
