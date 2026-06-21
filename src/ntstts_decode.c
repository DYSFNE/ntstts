/* filename: ntstts_decode.c */
#include <assert.h>

#include "ntstts.h"

int
ntstts_decode(uint32_t status, struct ntstts_decoded *out)
{
    if (out == NULL) 
        return -1;

    out->raw = status;

    out->severity = (status & 0xC0000000UL) >> 30;
    out->customer = (status & 0x20000000UL) >> 29;
    out->reserved = (status & 0x10000000UL) >> 28;
    out->facility = (status & 0x0FFF0000UL) >> 16;
    out->code = status & 0x0000FFFFUL;

    out->severity_info = ntstts_lookup_severity(out->severity);
    out->facility_info = ntstts_lookup_facility(out->facility);
    out->status_info = ntstts_lookup_status(out->raw);
}
