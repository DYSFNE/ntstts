/* filename: ntstts.c

#include "ntstatusmodule.h"

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

const size_t severity_table_count = 
    sizeof(severity_field_table) / sizeof(severity_field_table[0]);

/* Lookup table for known NTSTATUS facility codes */
/* Add enum of the values and fill in the types. */
const struct ntstatus_facility_entry
facility_table[] = {
    { 
        .name = "FACILITY_SYSTEM",                    
        .value = 0x000UL 
    },

    { 
        .name = "FACILITY_DEBUGGER",                  
        .value = 0x001UL 
    },

    { 
        .name = "FACILITY_RPC_RUNTIME",               
        .value = 0x002UL 
    },

    { 
        .name = "FACILITY_RPC_STUBS",                 
        .value = 0x003UL 
    },

    { 
        .name = "FACILITY_IO_ERROR_CODE",             
        .value = 0x004UL 
    },

    { 
        .name = "FACILITY_NTWIN32",                   
        .value = 0x007UL 
    },

    { 
        .name = "FACILITY_NTSSPI",                    
        .value = 0x009UL 
    },

    { 
        .name = "FACILITY_TERMINAL_SERVER",           
        .value = 0x00AUL 
    },

    { 
        .name = "FACILITY_MUI_ERROR_CODE",            
        .value = 0x00BUL 
    },

    { 
        .name = "FACILITY_USB_ERROR_CODE",            
        .value = 0x010UL 
    },

    { 
        .name = "FACILITY_HID_ERROR_CODE",            
        .value = 0x011UL 
    },

    { 
        .name = "FACILITY_FIREWIRE_ERROR_CODE",       
        .value = 0x012UL 
    },

    { 
        .name = "FACILITY_CLUSTER_ERROR_CODE",        
        .value = 0x013UL 
    },

    { 
        .name = "FACILITY_ACPI_ERROR_CODE",           
        .value = 0x014UL 
    },

    { 
        .name = "FACILITY_SXS_ERROR_CODE",            
        .value = 0x015UL 
    },

    { 
        .name = "FACILITY_TRANSACTION",               
        .value = 0x019UL 
    },

    { 
        .name = "FACILITY_COMMONLOG",                 
        .value = 0x01AUL 
    },

    { 
        .name = "FACILITY_VIDEO",                     
        .value = 0x01BUL 
    },

    { 
        .name = "FACILITY_FILTER_MANAGER",            
        .value = 0x01CUL 
    },

    { 
        .name = "FACILITY_MONITOR",                   
        .value = 0x01DUL 
    },

    { 
        .name = "FACILITY_GRAPHICS_KERNEL",           
        .value = 0x01EUL 
    },

    { 
        .name = "FACILITY_DRIVER_FRAMEWORK",          
        .value = 0x020UL 
    },

    { 
        .name = "FACILITY_FVE_ERROR_CODE",            
        .value = 0x021UL 
    },

    { 
        .name = "FACILITY_FWP_ERROR_CODE",           
        .value = 0x022UL 
    },

    { 
        .name = "FACILITY_NDIS_ERROR_CODE",           
        .value = 0x023UL 
    },

    { 
        .name = "FACILITY_HYPERVISOR",
        .value = 0x035UL 
    },

    { 
        .name = "FACILITY_IPSEC",                   
        .value = 0x036UL 
    },

    { 
        .name = "FACILITY_MAXIMUM_VALUE",
        .value = 0x037UL 
    }
};

const size_t facility_table_count =
    sizeof(facility_field_table) / sizeof(facility_field_table[0]);
