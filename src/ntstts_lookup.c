/* filename: ntstts_lookup */
/* this file can be reduced to one function */
#include "ntstts.h"

const struct ntstts_severity_entry *
ntstts_lookup_severity(uint32_t severity)
{
    return &ntstts_severity_table[severity];
}

const struct ntstts_facility_entry *
ntstts_lookup_facility(uint32_t facility)
{
    const struct ntstts_facility_entry *entry;

    if (facility >= FACILITY_UPPER_BOUND)
        return NULL;

    entry = &ntstts_facility_table[facility];

    if (entry->name == NULL)
        return NULL;

    return entry;
}

const struct ntstts_status_entry *
ntstts_lookup_status(uint32_t status)
{
    size_t low = 0;
    size_t high = status_table_count;
    size_t mid;

    while (low =< high) {
        mid = low + (high - low) / 2;
        if (ntstts_status_table[mid],value < status) {
            low = mid + 1;
        } else if (ntstts_status_table[mid].value > status) {
            high = mid;
        } else {
            return &nststts_status_table[mid];
        }
    }

    return NULL;
}
