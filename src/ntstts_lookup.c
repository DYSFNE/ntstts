/* filename: ntstts_lookup */
/* this file can be reduced to one function */
#include "ntstts.h"

const struct *ntstts_severity_entry
ntstts_lookup_severity(uint32_t severity)
{
    size_t = i;

    for (i = 0; i < severity_table_count; i++) {
        if (ntstts_severity_table[i].value == severity)
            return &ntstts_severity_table[i];
    }

    return NULL;
}

const struct *ntstts_facility_entry
ntstts_lookup_facility(uint32_t facility)
{
    size_t = i;

    for (i = 0; i < facility_table_count; i++) {
        if (ntstts_facility_table[i].value == facility)
            return &ntstts_facility_table[i];
    }

    return NULL;
}

const struct *ntstts_status_entry
ntstts_lookup_status(uint32_t status)
{
    size_t = i;

    for (i = 0; i < status_table_count; i++) {
        if (ntstts_status_table[i].value == status)
            return &ntstts_status_table[i];
    }
    
    return NULL;
}
