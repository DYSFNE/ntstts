/* filename: ntstts_print.c */

void
ntstatus_print(char *NtFnName, NTSTATUS status)
{
    ULONG raw_status = (ULONG)status;
    struct ntstatus_decoded msg;

    decoded_ntstatus(raw_status, &msg);
}
