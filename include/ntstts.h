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
    NTSTATUS_FACILITY_SYSTEM                = 0x000,
    NTSTATUS_FACILITY_DEBUGGER              = 0x001,
    NTSTATUS_FACILITY_RPC_RUNTIME           = 0x002,
    NTSTATUS_FACILITY_RPC_STUBS             = 0x003,
    NTSTATUS_FACILITY_IO_ERROR_CODE         = 0x004,
    NTSTATUS_FACILITY_NTWIN32               = 0x007,
    NTSTATUS_FACILITY_NTSSPI                = 0x009,
    NTSTATUS_FACILITY_TERMINAL_SERVER       = 0x00A,
    NTSTATUS_FACILITY_MUI_ERROR_CODE        = 0x00B,
    NTSTATUS_FACILITY_USB_ERROR_CODE        = 0x010,
    NTSTATUS_FACILITY_HID_ERROR_CODE        = 0x011,
    NTSTATUS_FACILITY_FIREWIRE_ERROR_CODE   = 0x012,
    NTSTATUS_FACILITY_CLUSTER_ERROR_CODE    = 0x013,
    NTSTATUS_FACILITY_ACPI_ERROR_CODE       = 0x014,
    NTSTATUS_FACILITY_SXS_ERROR_CODE        = 0x015,
    NTSTATUS_FACILITY_TRANSACTION           = 0x019,
    NTSTATUS_FACILITY_COMMONLOG             = 0x01A,
    NTSTATUS_FACILITY_VIDEO                 = 0x01B,
    NTSTATUS_FACILITY_FILTER_MANAGER        = 0x01C,
    NTSTATUS_FACILITY_MONITOR               = 0x01D,
    NTSTATUS_FACILITY_GRAPHICS_KERNEL       = 0x01E,
    NTSTATUS_FACILITY_DRIVER_FRAMEWORK      = 0x020,
    NTSTATUS_FACILITY_FVE_ERROR_CODE        = 0x021,
    NTSTATUS_FACILITY_FWP_ERROR_CODE        = 0x022,
    NTSTATUS_FACILITY_NDIS_ERROR_CODE       = 0x023,
    NTSTATUS_FACILITY_HYPERVISOR            = 0x035,
    NTSTATUS_FACILITY_IPSEC                 = 0x036,
    NTSTATUS_FACILITY_MAXIMUM_VALUE         = 0x037,

    FACILITY_UPPER_BOUND
};


/* struct definitions */

/* sizeof = 16 bytes - tightly packed */
struct ntstts_severity_entry {
    const char *name;
    const char *meaning;
};

/* sizeof = 8 bytes - tightly packed */
struct ntstts_facility_entry {
    const char *name;
};

struct ntstts_status_entry {
    const char *name;
    uint32_t value;
    const char *description;
};

struct ntstts_decoded {
    const struct ntstts_severity_entry *severity_info;
    const struct ntstts_facility_entry *facility_info;
    const struct ntstts_status_entry   *status_info;

    uint32_t raw;

    uint32_t severity;
    uint32_t customer;
    uint32_t reserved;
    uint32_t facility;
    uint32_t code;
};

/* extern global definitions */
extern const struct ntstts_status_entry ntstts_status_table[];
extern const size_t status_table_count;

extern const struct ntstts_severity_entry ntstts_severity_table[];

extern const struct ntstts_facility_entry ntstts_facility_table[];

/* function declarations */
int ntstts_decode(uint32_t status, struct ntstts_decoded *out);
const struct ntstts_severity_entry *ntstts_lookup_severity(uint32_t severity);
const struct ntstts_facility_entry *ntstts_lookup_facility(uint32_t facility);
const struct ntstts_status_entry *ntstts_lookup_status(uint32_t status);
void ntstts_print(const char *NtFnName, NTSTATUS status);

#endif /* NTSTATUS_INFO_H */
