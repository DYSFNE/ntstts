/* filename: ntstts_print.c */
#include <stdio.h>

#include "ntstts.h"

void
ntstts_print(const char *NtFnName, NTSTATUS status)
{
    uint32_t raw_status = (uint32_t)status;
    struct ntstts_decoded msg;

    ntstts_decide(raw_status, &msg);

    printf("The function %s: returned %s", NtFnName, msg.severity_info.name);
}
