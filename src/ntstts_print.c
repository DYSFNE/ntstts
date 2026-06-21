/* filename: ntstts_print.c */
#include <stdio.h>

#include "ntstts.h"

void
ntstts_print(const char *NtFnName, NTSTATUS status)
{
    uint32_t raw_status = (uint32_t)status;
    struct ntstts_decoded msg;

    if (ntstts_decode(raw_status, &msg) != 0) {
        printf("ntstts_decode failed\n");
        return;
    }

    printf("Function: %s\n", NtFnName);
    printf("Raw:      0x%08X\n", msg.raw);
    printf("Severity: %u", msg.severity);

    if (msg.severity_info != NULL)
        printf(" (%s)", msg.severity_info->meaning);

    printf("\n");

    printf("Customer: %u\n", msg.customer);
    printf("Reserved: %u\n", msg.reserved);
    printf("Facility: 0x%03X", msg.facility);

    if (msg.facility_info != NULL)
        printf(" (%s)", msg.facility_info->name);

    printf("\n");

    printf("Code:     0x%04X\n", msg.code);

    if (msg.status_info != NULL)
        printf("Status:   %s\n", msg.status_info->name);
    else if (msg.customer)
        printf("Status:   customer-defined / unknown\n");
    else
        printf("Status:   unknown Microsoft-defined status\n");
}
