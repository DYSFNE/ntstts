/* filename: ntstts.c */

#include "ntstts.h"

/* Lookup table for NTSTATUS subfield layout. */
const struct ntstatus_subfield_desc 
ntstatus_subfield_table[NTSTATUS_FIELD_COUNT] = {
    [NTSTATUS_FIELD_SEVERITY] = {
        .name = "Severity", 
        .shift = 30,
        .width = 2,  
        .mask = 0xC0000000UL,  
    },
    [NTSTATUS_FIELD_CUSTOMER] = {
        .name = "Customer", 
        .shift = 29,
        .width = 1,  
        .mask = 0x20000000UL, 
    },
    [NTSTATUS_FIELD_RESERVED] = { 
        .name = "Reserved",
        .shift = 28, 
        .width = 1,  
        .mask = 0x10000000UL, 
    },
    [NTSTATUS_FIELD_FACILITY] = {  
        .name = "Facility",
        .shift = 16, 
        .width = 12, 
        .mask = 0x0FFF0000UL,  
    },
    [NTSTATUS_FIELD_CODE] = {   
        .name = "Code",
        .shift = 0,  
        .width = 16, 
        .mask = 0x0000FFFFUL, 
    }  
};

/* Lookup table for possible NTSTATUS severity codes */

const struct ntstatus_severity_entry
severity_table[SEVERITY_COUNT] = {
    [SEVERITY_SUCCESS] = {
        .value = SEVERITY_SUCCESS,
        .name = "STATUS_SEVERITY_SUCCESS",
        .meaning = "Success" 
    },
    [SEVERITY_INFORMATIONAL] = {
        .value = SEVERITY_INFORMATIONAL,
        .name = "STATUS_SEVERITY_INFORMATIONAL",
        .meaning = "Informational"
    },
    [SEVERITY_WARNING] = {
        .value = SEVERITY_WARNING,
        .name = "STATUS_SEVERITY_WARNING",
        .meaning = "Warning" 
    },
    [SEVERITY_ERROR] = {
        .value = SEVERITY_ERROR,
        .name = "STATUS_SEVERITY_ERROR",
        .meaning = "Error" 
    }
};

const size_t severity_table_count = SEVERITY_COUNT;

/* Lookup table for known NTSTATUS facility codes */
const struct ntstatus_facility_entry
facility_table[NTSTATUS_FACILITY_COUNT] = {
    [NTSTATUS_FACILITY_SYSTEM] = {
        .name = "FACILITY_SYSTEM",
        .value = 0x000UL,
    },
    [NTSTATUS_FACILITY_DEBUGGER] = {
        .name = "FACILITY_DEBUGGER",
        .value = 0x001UL,
    },
    [NTSTATUS_FACILITY_RPC_RUNTIME] = {
        .name = "FACILITY_RPC_RUNTIME",
        .value = 0x002UL,
    },
    [NTSTATUS_FACILITY_RPC_STUBS] = {
        .name = "FACILITY_RPC_STUBS",
        .value = 0x003UL,
    },
    [NTSTATUS_FACILITY_IO_ERROR_CODE] = {
        .name = "FACILITY_IO_ERROR_CODE",
        .value = 0x004UL,
    },
    [NTSTATUS_FACILITY_NTWIN32] = {
        .name = "FACILITY_NTWIN32",
        .value = 0x007UL,
    },
    [NTSTATUS_FACILITY_NTSSPI] = {
        .name = "FACILITY_NTSSPI",
        .value = 0x009UL,
    },
    [NTSTATUS_FACILITY_TERMINAL_SERVER] = {
        .name = "FACILITY_TERMINAL_SERVER",
        .value = 0x00AUL,
    },
    [NTSTATUS_FACILITY_MUI_ERROR_CODE] = {
        .name = "FACILITY_MUI_ERROR_CODE",
        .value = 0x00BUL,
    },
    [NTSTATUS_FACILITY_USB_ERROR_CODE] = {
        .name = "FACILITY_USB_ERROR_CODE",
        .value = 0x010UL,
    },
    [NTSTATUS_FACILITY_HID_ERROR_CODE] = {
        .name = "FACILITY_HID_ERROR_CODE",
        .value = 0x011UL,
    },
    [NTSTATUS_FACILITY_FIREWIRE_ERROR_CODE] = {
        .name = "FACILITY_FIREWIRE_ERROR_CODE",
        .value = 0x012UL,
    },
    [NTSTATUS_FACILITY_CLUSTER_ERROR_CODE] = {
        .name = "FACILITY_CLUSTER_ERROR_CODE",
        .value = 0x013UL,
    },
    [NTSTATUS_FACILITY_ACPI_ERROR_CODE] = {
        .name = "FACILITY_ACPI_ERROR_CODE",
        .value = 0x014UL,
    },
    [NTSTATUS_FACILITY_SXS_ERROR_CODE] = {
        .name = "FACILITY_SXS_ERROR_CODE",
        .value = 0x015UL,
    },
    [NTSTATUS_FACILITY_TRANSACTION] = {
        .name = "FACILITY_TRANSACTION",
        .value = 0x019UL,
    },
    [NTSTATUS_FACILITY_COMMONLOG] = {
        .name = "FACILITY_COMMONLOG",
        .value = 0x01AUL,
    },
    [NTSTATUS_FACILITY_VIDEO] = {
        .name = "FACILITY_VIDEO",
        .value = 0x01BUL,
    },
    [NTSTATUS_FACILITY_FILTER_MANAGER] = {
        .name = "FACILITY_FILTER_MANAGER",
        .value = 0x01CUL,
    },
    [NTSTATUS_FACILITY_MONITOR] = {
        .name = "FACILITY_MONITOR",
        .value = 0x01DUL,
    },
    [NTSTATUS_FACILITY_GRAPHICS_KERNEL] = {
        .name = "FACILITY_GRAPHICS_KERNEL",
        .value = 0x01EUL,
    },
    [NTSTATUS_FACILITY_DRIVER_FRAMEWORK] = {
        .name = "FACILITY_DRIVER_FRAMEWORK",
        .value = 0x020UL,
    },
    [NTSTATUS_FACILITY_FVE_ERROR_CODE] = {
        .name = "FACILITY_FVE_ERROR_CODE",
        .value = 0x021UL,
    },
    [NTSTATUS_FACILITY_FWP_ERROR_CODE] = {
        .name = "FACILITY_FWP_ERROR_CODE",
        .value = 0x022UL,
    },
    [NTSTATUS_FACILITY_NDIS_ERROR_CODE] = {
        .name = "FACILITY_NDIS_ERROR_CODE",
        .value = 0x023UL,
    },
    [NTSTATUS_FACILITY_HYPERVISOR] = {
        .name = "FACILITY_HYPERVISOR",
        .value = 0x035UL,
    },
    [NTSTATUS_FACILITY_IPSEC] = {
        .name = "FACILITY_IPSEC",
        .value = 0x036UL,
    },
    [NTSTATUS_FACILITY_MAXIMUM_VALUE] = {
        .name = "FACILITY_MAXIMUM_VALUE",
        .value = 0x037UL,
    },
};
const size_t facility_table_count = NTSTATUS_FACILITY_COUNT;
