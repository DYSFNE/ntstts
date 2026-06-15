/* filename: ntstts_lookup */
/* this file can be reduced to one function */
#include <wintypes.h>

#include "ntstts.h"
#include "ntstts_tables.c"
#include "ntstts_ms_erref_table.c"

BOOL
w_lookup_severity(ULONG code, struct ntstatus_severity_field *field)
{
    for (int i = 0; i < severity_table_count; i++) {
        if (severity_table[i].value == code) {
            *field = severity_table[i];
            return TRUE;
        }
    }
    return FALSE;
}

BOOL
w_lookup_facility(ULONG facility_value, struct ntstatus_facility_field *field)
{
    for (int i = 0; i < facility_table_count; i++) {
        if (facility_table[i].value == facility_value) {
            *field = facility_table[i];
            return TRUE;
        }
    }
    return FALSE;
}

BOOL
w_lookup_ntstatus(ULONG status, struct ntstatus_entry *field)
{
    for (int i = 0; i < ntstatus_table_count; i++) {
        if (ntstatus_table[i].value == status) {
            *field = ntstatus_table[i];
            return TRUE;
        }
    return FALSE;
    }
}
