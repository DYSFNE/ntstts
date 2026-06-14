ntstatus.h
    structs, enums, extern table declarations, function prototypes

ntstatus_decode.c
    extract_field()
    decode_ntstatus()

ntstatus_lookup.c
    lookup_severity()
    lookup_facility()
    lookup_ntstatus()

ntstatus_tables.c
    ntstatus_subfield_table[]
    severity_table[]
    facility_table[]

ntstatus_ms_erref_table.c
    generated ntstatus_table[]

ntstatus_print.c
    ntstatus_print()

main.c
    program entry / testing
