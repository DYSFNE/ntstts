#include "ntstts.h"

int main(void)
{
    char *name = "NtQuerySystemInformation";
    NTSTATUS status = (NTSTATUS)0x00000106;
    ntstatus_print(name, status); 
}
