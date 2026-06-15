/* filename: ntstts_print.c */
#include <stdio.h>

#include "ntstts.h"

void
ntstatus_print(char *NtFnName, NTSTATUS status)
{
    ULONG raw_status = (ULONG)status;
    struct ntstatus_decoded msg;

    decoded_ntstatus(raw_status, &msg);

    printf("The function: %s returned a %s", NtFnName, msg.ntstatus_severity_entry.name);
}
