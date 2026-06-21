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
#include <stddef.h>
#include <stdint.h>
#include <winternl.h>

/* typedefs/enums */
enum severity_field_id {
    SEVERITY_SUCCESS,
    SEVERITY_INFORMATIONAL,
    SEVERITY_WARNING,
    SEVERITY_ERROR,

    SEVERITY_COUNT
};

enum facility_field_id {
    NTSTATUS_FACILITY_SYSTEM,
    NTSTATUS_FACILITY_DEBUGGER,
    NTSTATUS_FACILITY_RPC_RUNTIME,
    NTSTATUS_FACILITY_RPC_STUBS,
    NTSTATUS_FACILITY_IO_ERROR_CODE,
    NTSTATUS_FACILITY_NTWIN32,
    NTSTATUS_FACILITY_NTSSPI,
    NTSTATUS_FACILITY_TERMINAL_SERVER,
    NTSTATUS_FACILITY_MUI_ERROR_CODE,
    NTSTATUS_FACILITY_USB_ERROR_CODE,
    NTSTATUS_FACILITY_HID_ERROR_CODE,
    NTSTATUS_FACILITY_FIREWIRE_ERROR_CODE,
    NTSTATUS_FACILITY_CLUSTER_ERROR_CODE,
    NTSTATUS_FACILITY_ACPI_ERROR_CODE,
    NTSTATUS_FACILITY_SXS_ERROR_CODE,
    NTSTATUS_FACILITY_TRANSACTION,
    NTSTATUS_FACILITY_COMMONLOG,
    NTSTATUS_FACILITY_VIDEO,
    NTSTATUS_FACILITY_FILTER_MANAGER,
    NTSTATUS_FACILITY_MONITOR,
    NTSTATUS_FACILITY_GRAPHICS_KERNEL,
    NTSTATUS_FACILITY_DRIVER_FRAMEWORK,
    NTSTATUS_FACILITY_FVE_ERROR_CODE,
    NTSTATUS_FACILITY_FWP_ERROR_CODE,
    NTSTATUS_FACILITY_NDIS_ERROR_CODE,
    NTSTATUS_FACILITY_HYPERVISOR,
    NTSTATUS_FACILITY_IPSEC,
    NTSTATUS_FACILITY_MAXIMUM_VALUE,

    NTSTATUS_FACILITY_COUNT
};


/* struct definitions */
struct ntstts_severity_entry {
    uint32_t value;
    const char *name;
    const char *meaning;
};

struct ntstts_facility_entry {
    const char *name;
    uint32_t value;
};

struct ntstts_status_entry {
    const char *name;
    uint32_t value;
    const char *description;
};

struct ntstts_decoded {
    uint32_t raw;

    uint32_t severity;
    uint32_t customer;
    uint32_t reserved;
    uint32_t facility;
    uint32_t code;

    const struct ntstts_severity_entry *severity_info;
    const struct ntstts_facility_entry *facility_info;
    const struct ntstts_status_entry   *status_info;
};

/* extern global definitions */
extern const struct ntstts_status_entry ntstts_status_table[];
extern const size_t status_table_count;

extern const struct ntstts_severity_entry ntstts_severity_table[];
extern const size_t severity_table_count;

extern const struct ntstts_facility_entry ntstts_facility_table[];
extern const size_t facility_table_count;

/* function declarations */
int ntstts_decode(uint32_t status, struct ntstts_decoded *out);
const struct *ntstts_severity_entry ntstts_lookup_severity(uint32_t severity);
const struct *ntstts_facility_entry ntstts_lookup_facility(uint32_t facility);
const struct *ntstts_status_entry ntstts_lookup_status(uint32_t status);
void ntstts_print(const char *NtFnName, NTSTATUS status);

#endif /* NTSTATUS_INFO_H */
