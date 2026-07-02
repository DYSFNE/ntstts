/* filename: ntstts.c */

#include "ntstts.h"

/* Lookup table for possible NTSTATUS severity codes */
const struct ntstts_severity_entry
ntstts_severity_table[SEVERITY_COUNT] = {
    [SEVERITY_SUCCESS] = {
        .name = "STATUS_SEVERITY_SUCCESS",
        .meaning = "Success" 
    },
    [SEVERITY_INFORMATIONAL] = {
        .name = "STATUS_SEVERITY_INFORMATIONAL",
        .meaning = "Informational"
    },
    [SEVERITY_WARNING] = {
        .name = "STATUS_SEVERITY_WARNING",
        .meaning = "Warning" 
    },
    [SEVERITY_ERROR] = {
        .name = "STATUS_SEVERITY_ERROR",
        .meaning = "Error" 
    }
};

/* Lookup table for known NTSTATUS facility codes */
const struct ntstts_facility_entry
ntstts_facility_table[FACILITY_UPPER_BOUND] = {
    [NTSTATUS_FACILITY_SYSTEM] = {
        .name = "FACILITY_SYSTEM",
    },
    [NTSTATUS_FACILITY_DEBUGGER] = {
        .name = "FACILITY_DEBUGGER",
    },
    [NTSTATUS_FACILITY_RPC_RUNTIME] = {
        .name = "FACILITY_RPC_RUNTIME",
    },
    [NTSTATUS_FACILITY_RPC_STUBS] = {
        .name = "FACILITY_RPC_STUBS",
    },
    [NTSTATUS_FACILITY_IO_ERROR_CODE] = {
        .name = "FACILITY_IO_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_NTWIN32] = {
        .name = "FACILITY_NTWIN32",
    },
    [NTSTATUS_FACILITY_NTSSPI] = {
        .name = "FACILITY_NTSSPI",
    },
    [NTSTATUS_FACILITY_TERMINAL_SERVER] = {
        .name = "FACILITY_TERMINAL_SERVER",
    },
    [NTSTATUS_FACILITY_MUI_ERROR_CODE] = {
        .name = "FACILITY_MUI_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_USB_ERROR_CODE] = {
        .name = "FACILITY_USB_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_HID_ERROR_CODE] = {
        .name = "FACILITY_HID_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_FIREWIRE_ERROR_CODE] = {
        .name = "FACILITY_FIREWIRE_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_CLUSTER_ERROR_CODE] = {
        .name = "FACILITY_CLUSTER_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_ACPI_ERROR_CODE] = {
        .name = "FACILITY_ACPI_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_SXS_ERROR_CODE] = {
        .name = "FACILITY_SXS_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_TRANSACTION] = {
        .name = "FACILITY_TRANSACTION",
    },
    [NTSTATUS_FACILITY_COMMONLOG] = {
        .name = "FACILITY_COMMONLOG",
    },
    [NTSTATUS_FACILITY_VIDEO] = {
        .name = "FACILITY_VIDEO",
    },
    [NTSTATUS_FACILITY_FILTER_MANAGER] = {
        .name = "FACILITY_FILTER_MANAGER",
    },
    [NTSTATUS_FACILITY_MONITOR] = {
        .name = "FACILITY_MONITOR",
    },
    [NTSTATUS_FACILITY_GRAPHICS_KERNEL] = {
        .name = "FACILITY_GRAPHICS_KERNEL",
    },
    [NTSTATUS_FACILITY_DRIVER_FRAMEWORK] = {
        .name = "FACILITY_DRIVER_FRAMEWORK",
    },
    [NTSTATUS_FACILITY_FVE_ERROR_CODE] = {
        .name = "FACILITY_FVE_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_FWP_ERROR_CODE] = {
        .name = "FACILITY_FWP_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_NDIS_ERROR_CODE] = {
        .name = "FACILITY_NDIS_ERROR_CODE",
    },
    [NTSTATUS_FACILITY_HYPERVISOR] = {
        .name = "FACILITY_HYPERVISOR",
    },
    [NTSTATUS_FACILITY_IPSEC] = {
        .name = "FACILITY_IPSEC",
    },
    [NTSTATUS_FACILITY_MAXIMUM_VALUE] = {
        .name = "FACILITY_MAXIMUM_VALUE",
    },
};
