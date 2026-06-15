/* filename: ntstts_print.c */
#include <stdio.h>

#include "ntstts.h"

void
ntstatus_print(const char *NtFnName, NTSTATUS status)
{
    ULONG raw_status = (ULONG)status;
    struct ntstatus_decoded msg;

    decoded_ntstatus(raw_status, &msg);

    printf("The function %s: returned %s", NtFnName, msg.severity_info.name);
}
