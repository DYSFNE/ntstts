/* filename: ntstts_decode.c */
#include <assert.h>

#include "ntstts.h"

static ULONG
extract_field(ULONG status, const struct ntstatus_subfield_desc *desc)
{
    return (status & desc->mask) >> desc->shift;
}

void
decoded_ntstatus(ULONG status, struct ntstatus_decoded *out)
{
    assert(out != NULL && "ntstatus_decoded: out must not be NULL");

    out->raw = status;

    out->severity_value = 
        extract_field(out->raw, &ntstatus_subfield_table[NTSTATUS_FIELD_SEVERITY]);

    out->customer_value = 
        extract_field(out->raw, &ntstatus_subfield_table[NTSTATUS_FIELD_CUSTOMER]);

    out->reserved_value = 
        extract_field(out->raw, &ntstatus_subfield_table[NTSTATUS_FIELD_RESERVED]);

    out->facility_value = 
        extract_field(out->raw, &ntstatus_subfield_table[NTSTATUS_FIELD_FACILITY]);

    out->code_value = 
        extract_field(out->raw, &ntstatus_subfield_table[NTSTATUS_FIELD_CODE]);

    w_lookup_severity(out->severity_value, &out->severity_info);

    /* call these functions only if the NTSTATUS is Microsoft defined */
    if (!out->customer_value) {
        w_lookup_facility(out->facility_value, &out->facility_info);
        w_lookup_ntstatus(out->raw, &out->status_info);
    } 
    /* if the NTSTATUS is customer-defined run this */
    else if (out-customer_value) {
        out->facility_info = (struct ntstatus_facility_entry) {
            .name = "CUSTOMER_DEFINED_FACILITY",
            .value = out->facility_value
        };

        out->status_info = (struct ntstatus_entry) {
            .name = "CUSTOMER_DEFINED_STATUS",
            .value = out->raw,
            .description = 
                "Customer-defined NTSTATUS value. The meaning of this status code "
                "is private to the component, driver, or vendor that defined it."
        
        };
    }
}
