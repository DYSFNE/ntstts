/* filename: ntstts_decode.c */
#include <assert.h>

#include "ntstts.h"

int
ntstts_decode(uint32_t status, struct ntstts_decoded *out)
{
    if (out == NULL) 
        return -1;

<<<<<<< HEAD
=======
void
decoded_ntstatus(ULONG status, struct ntstatus_decoded *out)
{
    assert(out != NULL && "ntstatus_decoded: out must not be NULL");

>>>>>>> aee4c9b51acf690a71fe68ccceb1ed55e95bded6
    out->raw = status;

    out->severity = (status & 0xC0000000UL) >> 30;
    out->customer = (status & 0x20000000UL) >> 29;
    out->reserved = (status & 0x10000000UL) >> 28;
    out->facility = (status & 0x0FFF0000UL) >> 16;
    out->code = status & 0x0000FFFFUL;

    out->severity_info = ntstts_lookup_severity(out->severity);
    out->facility_info = ntstts_lookup_facility(out->facility);
    out->status_info = ntstts_lookup_status(out->raw);

<<<<<<< HEAD
    return 0;
=======
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
>>>>>>> aee4c9b51acf690a71fe68ccceb1ed55e95bded6
}
