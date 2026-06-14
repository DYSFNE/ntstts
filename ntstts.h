/* filename: ntstts.h */

/* 
 *  NTSTATUS codes are 32-bit fields.
 * 
 *  Bits 31-30:  Severity
 *  Bit  29:     Customer-defined bit
 *  Bit  28:     NTSTATUS/HRESULT NT bit
 *  Bits 27-16:  Facility
 *  Bits 15-0:   Code
 */

/* ifndef check */
#ifndef NTSTATUS_INFO_H
#define NTSTATUS_INFO_H

/* system headers */
#include <windef.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* typedefs/enums */
enum ntstatus_field_id {
    NTSTATUS_FIELD_SEVERITY,
    NTSTATUS_FIELD_CUSTOMER,
    NTSTATUS_FIELD_RESERVED,
    NTSTATUS_FIELD_FACILITY,
    NTSTATUS_FIELD_CODE,
    NTSTATUS_FIELD_COUNT
};

enum severity_field_id {
    SEVERITY_SUCCESS,
    SEVERITY_INFORMATIONAL,
    SEVERITY_WARNING,
    SEVERITY_ERROR,
    SEVERITY_COUNT
};

/* struct definitions */
struct ntstatus_subfield_desc {
    const char *name;
    UINT8 shift;
    UINT8 width;
    ULONG mask;
};

struct ntstatus_severity_field {
    ULONG value;
    const char *name;
    const char *meaning;
};

struct ntstatus_facility_field {
    const char *name;
    ULONG value;
};

struct ntstatus_entry {
    const char *name;
    ULONG value;
    const char *description;
};

struct ntstatus_decoded {
    ULONG raw;

    ULONG severity_value;
    ULONG customer_value;
    ULONG reserved_value;
    ULONG facility_value;
    ULONG code_value;

    struct ntstatus_severity_entry severity_info;
    struct ntstatus_facility_entry facility_info;
    struct ntstatus_entry status_info;
};

/* extern global definitions */
extern const struct ntstatus_subfield_desc ntstatus_subfield_table[];

extern const struct ntstatus_entry ntstatus_table[];
extern const size_t ntstatus_table_count;

extern const struct ntstatus_severity_entry severity_table[];
extern const size_t severity_table_count;

extern const struct ntstatus_facility_entry facility_table[];
extern const size_t facility_table_count;

/* function declarations */
ULONG extract_field(ULONG status, const struct subfield_desc *field);
void w_lookup_severity(ULONG code, struct severity_field *field);
void w_lookup_facility(ULONG facility_value, struct facility_field *field);
void w_lookup_ntstatus(ULONG status, struct ntstatus_entry *field);
void ntstatus_print(char *NtFnName, NTSTATUS status);

#endif /* NTSTATUS_INFO_H */
