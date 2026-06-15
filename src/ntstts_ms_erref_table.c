/* filename: ntstts_ms_erref_table.c */

/* Generated from Microsoft MS-ERREF NTSTATUS Values. */
#include "ntstts.h"

const struct ntstatus_entry 
ntstatus_table[] = {
    {
        .name = "STATUS_SUCCESS",
        .value = 0x00000000UL,
        .description = "The operation completed successfully.",
    },
    {
        .name = "STATUS_WAIT_0",
        .value = 0x00000000UL,
        .description = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state.",
    },
    {
        .name = "STATUS_WAIT_1",
        .value = 0x00000001UL,
        .description = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state.",
    },
    {
        .name = "STATUS_WAIT_2",
        .value = 0x00000002UL,
        .description = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state.",
    },
    {
        .name = "STATUS_WAIT_3",
        .value = 0x00000003UL,
        .description = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state.",
    },
    {
        .name = "STATUS_WAIT_63",
        .value = 0x0000003FUL,
        .description = "The caller specified WaitAny for WaitType and one of the dispatcher objects in the Object array has been set to the signaled state.",
    },
    {
        .name = "STATUS_ABANDONED",
        .value = 0x00000080UL,
        .description = "The caller attempted to wait for a mutex that has been abandoned.",
    },
    {
        .name = "STATUS_ABANDONED_WAIT_0",
        .value = 0x00000080UL,
        .description = "The caller attempted to wait for a mutex that has been abandoned.",
    },
    {
        .name = "STATUS_ABANDONED_WAIT_63",
        .value = 0x000000BFUL,
        .description = "The caller attempted to wait for a mutex that has been abandoned.",
    },
    {
        .name = "STATUS_USER_APC",
        .value = 0x000000C0UL,
        .description = "A user-mode APC was delivered before the given Interval expired.",
    },
    {
        .name = "STATUS_ALERTED",
        .value = 0x00000101UL,
        .description = "The delay completed because the thread was alerted.",
    },
    {
        .name = "STATUS_TIMEOUT",
        .value = 0x00000102UL,
        .description = "The given Timeout interval expired.",
    },
    {
        .name = "STATUS_PENDING",
        .value = 0x00000103UL,
        .description = "The operation that was requested is pending completion.",
    },
    {
        .name = "STATUS_REPARSE",
        .value = 0x00000104UL,
        .description = "A reparse should be performed by the Object Manager because the name of the file resulted in a symbolic link.",
    },
    {
        .name = "STATUS_MORE_ENTRIES",
        .value = 0x00000105UL,
        .description = "Returned by enumeration APIs to indicate more information is available to successive calls.",
    },
    {
        .name = "STATUS_NOT_ALL_ASSIGNED",
        .value = 0x00000106UL,
        .description = "Indicates not all privileges or groups that are referenced are assigned to the caller. This allows, for example, all privileges to be disabled without having to know exactly which privileges are assigned.",
    },
    {
        .name = "STATUS_SOME_NOT_MAPPED",
        .value = 0x00000107UL,
        .description = "Some of the information to be translated has not been translated.",
    },
    {
        .name = "STATUS_OPLOCK_BREAK_IN_PROGRESS",
        .value = 0x00000108UL,
        .description = "An open/create operation completed while an opportunistic lock (oplock) break is underway.",
    },
    {
        .name = "STATUS_VOLUME_MOUNTED",
        .value = 0x00000109UL,
        .description = "A new volume has been mounted by a file system.",
    },
    {
        .name = "STATUS_RXACT_COMMITTED",
        .value = 0x0000010AUL,
        .description = "This success level status indicates that the transaction state already exists for the registry subtree but that a transaction commit was previously aborted. The commit has now been completed.",
    },
    {
        .name = "STATUS_NOTIFY_CLEANUP",
        .value = 0x0000010BUL,
        .description = "Indicates that a notify change request has been completed due to closing the handle that made the notify change request.",
    },
    {
        .name = "STATUS_NOTIFY_ENUM_DIR",
        .value = 0x0000010CUL,
        .description = "Indicates that a notify change request is being completed and that the information is not being returned in the caller's buffer. The caller now needs to enumerate the files to find the changes.",
    },
    {
        .name = "STATUS_NO_QUOTAS_FOR_ACCOUNT",
        .value = 0x0000010DUL,
        .description = "{No Quotas} No system quota limits are specifically set for this account.",
    },
    {
        .name = "STATUS_PRIMARY_TRANSPORT_CONNECT_FAILED",
        .value = 0x0000010EUL,
        .description = "{Connect Failure on Primary Transport} An attempt was made to connect to the remote server %hs on the primary transport, but the connection failed. The computer WAS able to connect on a secondary transport.",
    },
    {
        .name = "STATUS_PAGE_FAULT_TRANSITION",
        .value = 0x00000110UL,
        .description = "The page fault was a transition fault.",
    },
    {
        .name = "STATUS_PAGE_FAULT_DEMAND_ZERO",
        .value = 0x00000111UL,
        .description = "The page fault was a demand zero fault.",
    },
    {
        .name = "STATUS_PAGE_FAULT_COPY_ON_WRITE",
        .value = 0x00000112UL,
        .description = "The page fault was a demand zero fault.",
    },
    {
        .name = "STATUS_PAGE_FAULT_GUARD_PAGE",
        .value = 0x00000113UL,
        .description = "The page fault was a demand zero fault.",
    },
    {
        .name = "STATUS_PAGE_FAULT_PAGING_FILE",
        .value = 0x00000114UL,
        .description = "The page fault was satisfied by reading from a secondary storage device.",
    },
    {
        .name = "STATUS_CACHE_PAGE_LOCKED",
        .value = 0x00000115UL,
        .description = "The cached page was locked during operation.",
    },
    {
        .name = "STATUS_CRASH_DUMP",
        .value = 0x00000116UL,
        .description = "The crash dump exists in a paging file.",
    },
    {
        .name = "STATUS_BUFFER_ALL_ZEROS",
        .value = 0x00000117UL,
        .description = "The specified buffer contains all zeros.",
    },
    {
        .name = "STATUS_REPARSE_OBJECT",
        .value = 0x00000118UL,
        .description = "A reparse should be performed by the Object Manager because the name of the file resulted in a symbolic link.",
    },
    {
        .name = "STATUS_RESOURCE_REQUIREMENTS_CHANGED",
        .value = 0x00000119UL,
        .description = "The device has succeeded a query-stop and its resource requirements have changed.",
    },
    {
        .name = "STATUS_TRANSLATION_COMPLETE",
        .value = 0x00000120UL,
        .description = "The translator has translated these resources into the global space and no additional translations should be performed.",
    },
    {
        .name = "STATUS_DS_MEMBERSHIP_EVALUATED_LOCALLY",
        .value = 0x00000121UL,
        .description = "The directory service evaluated group memberships locally, because it was unable to contact a global catalog server.",
    },
    {
        .name = "STATUS_NOTHING_TO_TERMINATE",
        .value = 0x00000122UL,
        .description = "A process being terminated has no threads to terminate.",
    },
    {
        .name = "STATUS_PROCESS_NOT_IN_JOB",
        .value = 0x00000123UL,
        .description = "The specified process is not part of a job.",
    },
    {
        .name = "STATUS_PROCESS_IN_JOB",
        .value = 0x00000124UL,
        .description = "The specified process is part of a job.",
    },
    {
        .name = "STATUS_VOLSNAP_HIBERNATE_READY",
        .value = 0x00000125UL,
        .description = "{Volume Shadow Copy Service} The system is now ready for hibernation.",
    },
    {
        .name = "STATUS_FSFILTER_OP_COMPLETED_SUCCESSFULLY",
        .value = 0x00000126UL,
        .description = "A file system or file system filter driver has successfully completed an FsFilter operation.",
    },
    {
        .name = "STATUS_INTERRUPT_VECTOR_ALREADY_CONNECTED",
        .value = 0x00000127UL,
        .description = "The specified interrupt vector was already connected.",
    },
    {
        .name = "STATUS_INTERRUPT_STILL_CONNECTED",
        .value = 0x00000128UL,
        .description = "The specified interrupt vector is still connected.",
    },
    {
        .name = "STATUS_PROCESS_CLONED",
        .value = 0x00000129UL,
        .description = "The current process is a cloned process.",
    },
    {
        .name = "STATUS_FILE_LOCKED_WITH_ONLY_READERS",
        .value = 0x0000012AUL,
        .description = "The file was locked and all users of the file can only read.",
    },
    {
        .name = "STATUS_FILE_LOCKED_WITH_WRITERS",
        .value = 0x0000012BUL,
        .description = "The file was locked and at least one user of the file can write.",
    },
    {
        .name = "STATUS_RESOURCEMANAGER_READ_ONLY",
        .value = 0x00000202UL,
        .description = "The specified ResourceManager made no changes or updates to the resource under this transaction.",
    },
    {
        .name = "STATUS_WAIT_FOR_OPLOCK",
        .value = 0x00000367UL,
        .description = "An operation is blocked and waiting for an oplock.",
    },
    {
        .name = "DBG_EXCEPTION_HANDLED",
        .value = 0x00010001UL,
        .description = "Debugger handled the exception.",
    },
    {
        .name = "DBG_CONTINUE",
        .value = 0x00010002UL,
        .description = "The debugger continued.",
    },
    {
        .name = "STATUS_FLT_IO_COMPLETE",
        .value = 0x001C0001UL,
        .description = "The IO was completed by a filter.",
    },
    {
        .name = "STATUS_FILE_NOT_AVAILABLE",
        .value = 0xC0000467UL,
        .description = "The file is temporarily unavailable.",
    },
    {
        .name = "STATUS_SHARE_UNAVAILABLE",
        .value = 0xC0000480UL,
        .description = "The share is temporarily unavailable.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_THREAD_AFFINITY",
        .value = 0xC0000721UL,
        .description = "A threadpool worker thread entered a callback at thread affinity %p and exited at affinity %p. This is unexpected, indicating that the callback missed restoring the priority.",
    },
    {
        .name = "STATUS_OBJECT_NAME_EXISTS",
        .value = 0x40000000UL,
        .description = "{Object Exists} An attempt was made to create an object but the object name already exists.",
    },
    {
        .name = "STATUS_THREAD_WAS_SUSPENDED",
        .value = 0x40000001UL,
        .description = "{Thread Suspended} A thread termination occurred while the thread was suspended. The thread resumed, and termination proceeded.",
    },
    {
        .name = "STATUS_WORKING_SET_LIMIT_RANGE",
        .value = 0x40000002UL,
        .description = "{Working Set Range Error} An attempt was made to set the working set minimum or maximum to values that are outside the allowable range.",
    },
    {
        .name = "STATUS_IMAGE_NOT_AT_BASE",
        .value = 0x40000003UL,
        .description = "{Image Relocated} An image file could not be mapped at the address that is specified in the image file. Local fixes must be performed on this image.",
    },
    {
        .name = "STATUS_RXACT_STATE_CREATED",
        .value = 0x40000004UL,
        .description = "This informational level status indicates that a specified registry subtree transaction state did not yet exist and had to be created.",
    },
    {
        .name = "STATUS_SEGMENT_NOTIFICATION",
        .value = 0x40000005UL,
        .description = "{Segment Load} A virtual DOS machine (VDM) is loading, unloading, or moving an MS-DOS or Win16 program segment image. An exception is raised so that a debugger can load, unload, or track symbols and breakpoints within these 16-bit segments.",
    },
    {
        .name = "STATUS_LOCAL_USER_SESSION_KEY",
        .value = 0x40000006UL,
        .description = "{Local Session Key} A user session key was requested for a local remote procedure call (RPC) connection. The session key that is returned is a constant value and not unique to this connection.",
    },
    {
        .name = "STATUS_BAD_CURRENT_DIRECTORY",
        .value = 0x40000007UL,
        .description = "{Invalid Current Directory} The process cannot switch to the startup current directory %hs. Select OK to set the current directory to %hs, or select CANCEL to exit.",
    },
    {
        .name = "STATUS_SERIAL_MORE_WRITES",
        .value = 0x40000008UL,
        .description = "{Serial IOCTL Complete} A serial I/O operation was completed by another write to a serial port. (The IOCTL_SERIAL_XOFF_COUNTER reached zero.)",
    },
    {
        .name = "STATUS_REGISTRY_RECOVERED",
        .value = 0x40000009UL,
        .description = "{Registry Recovery} One of the files that contains the system registry data had to be recovered by using a log or alternate copy. The recovery was successful.",
    },
    {
        .name = "STATUS_FT_READ_RECOVERY_FROM_BACKUP",
        .value = 0x4000000AUL,
        .description = "{Redundant Read} To satisfy a read request, the Windows NT operating system fault-tolerant file system successfully read the requested data from a redundant copy. This was done because the file system encountered a failure on a member of the fault-tolerant volume but was unable to reassign the failing area of the device.",
    },
    {
        .name = "STATUS_FT_WRITE_RECOVERY",
        .value = 0x4000000BUL,
        .description = "{Redundant Write} To satisfy a write request, the Windows NT fault-tolerant file system successfully wrote a redundant copy of the information. This was done because the file system encountered a failure on a member of the fault-tolerant volume but was unable to reassign the failing area of the device.",
    },
    {
        .name = "STATUS_SERIAL_COUNTER_TIMEOUT",
        .value = 0x4000000CUL,
        .description = "{Serial IOCTL Timeout} A serial I/O operation completed because the time-out period expired. (The IOCTL_SERIAL_XOFF_COUNTER had not reached zero.)",
    },
    {
        .name = "STATUS_NULL_LM_PASSWORD",
        .value = 0x4000000DUL,
        .description = "{Password Too Complex} The Windows password is too complex to be converted to a LAN Manager password. The LAN Manager password that returned is a NULL string.",
    },
    {
        .name = "STATUS_IMAGE_MACHINE_TYPE_MISMATCH",
        .value = 0x4000000EUL,
        .description = "{Machine Type Mismatch} The image file %hs is valid but is for a machine type other than the current machine. Select OK to continue, or CANCEL to fail the DLL load.",
    },
    {
        .name = "STATUS_RECEIVE_PARTIAL",
        .value = 0x4000000FUL,
        .description = "{Partial Data Received} The network transport returned partial data to its client. The remaining data will be sent later.",
    },
    {
        .name = "STATUS_RECEIVE_EXPEDITED",
        .value = 0x40000010UL,
        .description = "{Expedited Data Received} The network transport returned data to its client that was marked as expedited by the remote system.",
    },
    {
        .name = "STATUS_RECEIVE_PARTIAL_EXPEDITED",
        .value = 0x40000011UL,
        .description = "{Partial Expedited Data Received} The network transport returned partial data to its client and this data was marked as expedited by the remote system. The remaining data will be sent later.",
    },
    {
        .name = "STATUS_EVENT_DONE",
        .value = 0x40000012UL,
        .description = "{TDI Event Done} The TDI indication has completed successfully.",
    },
    {
        .name = "STATUS_EVENT_PENDING",
        .value = 0x40000013UL,
        .description = "{TDI Event Pending} The TDI indication has entered the pending state.",
    },
    {
        .name = "STATUS_CHECKING_FILE_SYSTEM",
        .value = 0x40000014UL,
        .description = "Checking file system on %wZ.",
    },
    {
        .name = "STATUS_FATAL_APP_EXIT",
        .value = 0x40000015UL,
        .description = "{Fatal Application Exit} %hs",
    },
    {
        .name = "STATUS_PREDEFINED_HANDLE",
        .value = 0x40000016UL,
        .description = "The specified registry key is referenced by a predefined handle.",
    },
    {
        .name = "STATUS_WAS_UNLOCKED",
        .value = 0x40000017UL,
        .description = "{Page Unlocked} The page protection of a locked page was changed to 'No Access' and the page was unlocked from memory and from the process.",
    },
    {
        .name = "STATUS_SERVICE_NOTIFICATION",
        .value = 0x40000018UL,
        .description = "%hs",
    },
    {
        .name = "STATUS_WAS_LOCKED",
        .value = 0x40000019UL,
        .description = "{Page Locked} One of the pages to lock was already locked.",
    },
    {
        .name = "STATUS_LOG_HARD_ERROR",
        .value = 0x4000001AUL,
        .description = "Application popup: %1 : %2",
    },
    {
        .name = "STATUS_ALREADY_WIN32",
        .value = 0x4000001BUL,
        .description = "A Win32 process already exists.",
    },
    {
        .name = "STATUS_WX86_UNSIMULATE",
        .value = 0x4000001CUL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_CONTINUE",
        .value = 0x4000001DUL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_SINGLE_STEP",
        .value = 0x4000001EUL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_BREAKPOINT",
        .value = 0x4000001FUL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_EXCEPTION_CONTINUE",
        .value = 0x40000020UL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_EXCEPTION_LASTCHANCE",
        .value = 0x40000021UL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_EXCEPTION_CHAIN",
        .value = 0x40000022UL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_IMAGE_MACHINE_TYPE_MISMATCH_EXE",
        .value = 0x40000023UL,
        .description = "{Machine Type Mismatch} The image file %hs is valid but is for a machine type other than the current machine.",
    },
    {
        .name = "STATUS_NO_YIELD_PERFORMED",
        .value = 0x40000024UL,
        .description = "A yield execution was performed and no thread was available to run.",
    },
    {
        .name = "STATUS_TIMER_RESUME_IGNORED",
        .value = 0x40000025UL,
        .description = "The resume flag to a timer API was ignored.",
    },
    {
        .name = "STATUS_ARBITRATION_UNHANDLED",
        .value = 0x40000026UL,
        .description = "The arbiter has deferred arbitration of these resources to its parent.",
    },
    {
        .name = "STATUS_CARDBUS_NOT_SUPPORTED",
        .value = 0x40000027UL,
        .description = "The device has detected a CardBus card in its slot.",
    },
    {
        .name = "STATUS_WX86_CREATEWX86TIB",
        .value = 0x40000028UL,
        .description = "An exception status code that is used by the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_MP_PROCESSOR_MISMATCH",
        .value = 0x40000029UL,
        .description = "The CPUs in this multiprocessor system are not all the same revision level. To use all processors, the operating system restricts itself to the features of the least capable processor in the system. If problems occur with this system, contact the CPU manufacturer to see if this mix of processors is supported.",
    },
    {
        .name = "STATUS_HIBERNATED",
        .value = 0x4000002AUL,
        .description = "The system was put into hibernation.",
    },
    {
        .name = "STATUS_RESUME_HIBERNATION",
        .value = 0x4000002BUL,
        .description = "The system was resumed from hibernation.",
    },
    {
        .name = "STATUS_FIRMWARE_UPDATED",
        .value = 0x4000002CUL,
        .description = "Windows has detected that the system firmware (BIOS) was updated [previous firmware date = %2, current firmware date %3].",
    },
    {
        .name = "STATUS_DRIVERS_LEAKING_LOCKED_PAGES",
        .value = 0x4000002DUL,
        .description = "A device driver is leaking locked I/O pages and is causing system degradation. The system has automatically enabled the tracking code to try and catch the culprit.",
    },
    {
        .name = "STATUS_MESSAGE_RETRIEVED",
        .value = 0x4000002EUL,
        .description = "The ALPC message being canceled has already been retrieved from the queue on the other side.",
    },
    {
        .name = "STATUS_SYSTEM_POWERSTATE_TRANSITION",
        .value = 0x4000002FUL,
        .description = "The system power state is transitioning from %2 to %3.",
    },
    {
        .name = "STATUS_ALPC_CHECK_COMPLETION_LIST",
        .value = 0x40000030UL,
        .description = "The receive operation was successful. Check the ALPC completion list for the received message.",
    },
    {
        .name = "STATUS_SYSTEM_POWERSTATE_COMPLEX_TRANSITION",
        .value = 0x40000031UL,
        .description = "The system power state is transitioning from %2 to %3 but could enter %4.",
    },
    {
        .name = "STATUS_ACCESS_AUDIT_BY_POLICY",
        .value = 0x40000032UL,
        .description = "Access to %1 is monitored by policy rule %2.",
    },
    {
        .name = "STATUS_ABANDON_HIBERFILE",
        .value = 0x40000033UL,
        .description = "A valid hibernation file has been invalidated and should be abandoned.",
    },
    {
        .name = "STATUS_BIZRULES_NOT_ENABLED",
        .value = 0x40000034UL,
        .description = "Business rule scripts are disabled for the calling application.",
    },
    {
        .name = "STATUS_WAKE_SYSTEM",
        .value = 0x40000294UL,
        .description = "The system has awoken.",
    },
    {
        .name = "STATUS_DS_SHUTTING_DOWN",
        .value = 0x40000370UL,
        .description = "The directory service is shutting down.",
    },
    {
        .name = "DBG_REPLY_LATER",
        .value = 0x40010001UL,
        .description = "Debugger will reply later.",
    },
    {
        .name = "DBG_UNABLE_TO_PROVIDE_HANDLE",
        .value = 0x40010002UL,
        .description = "Debugger cannot provide a handle.",
    },
    {
        .name = "DBG_TERMINATE_THREAD",
        .value = 0x40010003UL,
        .description = "Debugger terminated the thread.",
    },
    {
        .name = "DBG_TERMINATE_PROCESS",
        .value = 0x40010004UL,
        .description = "Debugger terminated the process.",
    },
    {
        .name = "DBG_CONTROL_C",
        .value = 0x40010005UL,
        .description = "Debugger obtained control of C.",
    },
    {
        .name = "DBG_PRINTEXCEPTION_C",
        .value = 0x40010006UL,
        .description = "Debugger printed an exception on control C.",
    },
    {
        .name = "DBG_RIPEXCEPTION",
        .value = 0x40010007UL,
        .description = "Debugger received a RIP exception.",
    },
    {
        .name = "DBG_CONTROL_BREAK",
        .value = 0x40010008UL,
        .description = "Debugger received a control break.",
    },
    {
        .name = "DBG_COMMAND_EXCEPTION",
        .value = 0x40010009UL,
        .description = "Debugger command communication exception.",
    },
    {
        .name = "RPC_NT_UUID_LOCAL_ONLY",
        .value = 0x40020056UL,
        .description = "A UUID that is valid only on this computer has been allocated.",
    },
    {
        .name = "RPC_NT_SEND_INCOMPLETE",
        .value = 0x400200AFUL,
        .description = "Some data remains to be sent in the request buffer.",
    },
    {
        .name = "STATUS_CTX_CDM_CONNECT",
        .value = 0x400A0004UL,
        .description = "The Client Drive Mapping Service has connected on Terminal Connection.",
    },
    {
        .name = "STATUS_CTX_CDM_DISCONNECT",
        .value = 0x400A0005UL,
        .description = "The Client Drive Mapping Service has disconnected on Terminal Connection.",
    },
    {
        .name = "STATUS_SXS_RELEASE_ACTIVATION_CONTEXT",
        .value = 0x4015000DUL,
        .description = "A kernel mode component is releasing a reference on an activation context.",
    },
    {
        .name = "STATUS_RECOVERY_NOT_NEEDED",
        .value = 0x40190034UL,
        .description = "The transactional resource manager is already consistent. Recovery is not needed.",
    },
    {
        .name = "STATUS_RM_ALREADY_STARTED",
        .value = 0x40190035UL,
        .description = "The transactional resource manager has already been started.",
    },
    {
        .name = "STATUS_LOG_NO_RESTART",
        .value = 0x401A000CUL,
        .description = "The log service encountered a log stream with no restart area.",
    },
    {
        .name = "STATUS_VIDEO_DRIVER_DEBUG_REPORT_REQUEST",
        .value = 0x401B00ECUL,
        .description = "{Display Driver Recovered From Failure} The %hs display driver has detected a failure and recovered from it. Some graphical operations might have failed. The next time you restart the machine, a dialog box appears, giving you an opportunity to upload data about this failure to Microsoft.",
    },
    {
        .name = "STATUS_GRAPHICS_PARTIAL_DATA_POPULATED",
        .value = 0x401E000AUL,
        .description = "The specified buffer is not big enough to contain the entire requested dataset. Partial data is populated up to the size of the buffer. The caller needs to provide a buffer of the size as specified in the partially populated buffer's content (interface specific).",
    },
    {
        .name = "STATUS_GRAPHICS_DRIVER_MISMATCH",
        .value = 0x401E0117UL,
        .description = "The kernel driver detected a version mismatch between it and the user mode driver.",
    },
    {
        .name = "STATUS_GRAPHICS_MODE_NOT_PINNED",
        .value = 0x401E0307UL,
        .description = "No mode is pinned on the specified VidPN source/target.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_PREFERRED_MODE",
        .value = 0x401E031EUL,
        .description = "The specified mode set does not specify a preference for one of its modes.",
    },
    {
        .name = "STATUS_GRAPHICS_DATASET_IS_EMPTY",
        .value = 0x401E034BUL,
        .description = "The specified dataset (for example, mode set, frequency range set, descriptor set, or topology) is empty.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET",
        .value = 0x401E034CUL,
        .description = "The specified dataset (for example, mode set, frequency range set, descriptor set, or topology) does not contain any more elements.",
    },
    {
        .name = "STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED",
        .value = 0x401E0351UL,
        .description = "The specified content transformation is not pinned on the specified VidPN present path.",
    },
    {
        .name = "STATUS_GRAPHICS_UNKNOWN_CHILD_STATUS",
        .value = 0x401E042FUL,
        .description = "The child device presence was not reliably detected.",
    },
    {
        .name = "STATUS_GRAPHICS_LEADLINK_START_DEFERRED",
        .value = 0x401E0437UL,
        .description = "Starting the lead adapter in a linked configuration has been temporarily deferred.",
    },
    {
        .name = "STATUS_GRAPHICS_POLLING_TOO_FREQUENTLY",
        .value = 0x401E0439UL,
        .description = "The display adapter is being polled for children too frequently at the same polling level.",
    },
    {
        .name = "STATUS_GRAPHICS_START_DEFERRED",
        .value = 0x401E043AUL,
        .description = "Starting the adapter has been temporarily deferred.",
    },
    {
        .name = "STATUS_NDIS_INDICATION_REQUIRED",
        .value = 0x40230001UL,
        .description = "The request will be completed later by an NDIS status indication.",
    },
    {
        .name = "STATUS_GUARD_PAGE_VIOLATION",
        .value = 0x80000001UL,
        .description = "{EXCEPTION} Guard Page Exception A page of memory that marks the end of a data structure, such as a stack or an array, has been accessed.",
    },
    {
        .name = "STATUS_DATATYPE_MISALIGNMENT",
        .value = 0x80000002UL,
        .description = "{EXCEPTION} Alignment Fault A data type misalignment was detected in a load or store instruction.",
    },
    {
        .name = "STATUS_BREAKPOINT",
        .value = 0x80000003UL,
        .description = "{EXCEPTION} Breakpoint A breakpoint has been reached.",
    },
    {
        .name = "STATUS_SINGLE_STEP",
        .value = 0x80000004UL,
        .description = "{EXCEPTION} Single Step A single step or trace operation has just been completed.",
    },
    {
        .name = "STATUS_BUFFER_OVERFLOW",
        .value = 0x80000005UL,
        .description = "{Buffer Overflow} The data was too large to fit into the specified buffer.",
    },
    {
        .name = "STATUS_NO_MORE_FILES",
        .value = 0x80000006UL,
        .description = "{No More Files} No more files were found which match the file specification.",
    },
    {
        .name = "STATUS_WAKE_SYSTEM_DEBUGGER",
        .value = 0x80000007UL,
        .description = "{Kernel Debugger Awakened} The system debugger was awakened by an interrupt.",
    },
    {
        .name = "STATUS_HANDLES_CLOSED",
        .value = 0x8000000AUL,
        .description = "{Handles Closed} Handles to objects have been automatically closed because of the requested operation.",
    },
    {
        .name = "STATUS_NO_INHERITANCE",
        .value = 0x8000000BUL,
        .description = "{Non-Inheritable ACL} An access control list (ACL) contains no components that can be inherited.",
    },
    {
        .name = "STATUS_GUID_SUBSTITUTION_MADE",
        .value = 0x8000000CUL,
        .description = "{GUID Substitution} During the translation of a globally unique identifier (GUID) to a Windows security ID (SID), no administratively defined GUID prefix was found. A substitute prefix was used, which will not compromise system security. However, this might provide a more restrictive access than intended.",
    },
    {
        .name = "STATUS_PARTIAL_COPY",
        .value = 0x8000000DUL,
        .description = "Because of protection conflicts, not all the requested bytes could be copied.",
    },
    {
        .name = "STATUS_DEVICE_PAPER_EMPTY",
        .value = 0x8000000EUL,
        .description = "{Out of Paper} The printer is out of paper.",
    },
    {
        .name = "STATUS_DEVICE_POWERED_OFF",
        .value = 0x8000000FUL,
        .description = "{Device Power Is Off} The printer power has been turned off.",
    },
    {
        .name = "STATUS_DEVICE_OFF_LINE",
        .value = 0x80000010UL,
        .description = "{Device Offline} The printer has been taken offline.",
    },
    {
        .name = "STATUS_DEVICE_BUSY",
        .value = 0x80000011UL,
        .description = "{Device Busy} The device is currently busy.",
    },
    {
        .name = "STATUS_NO_MORE_EAS",
        .value = 0x80000012UL,
        .description = "{No More EAs} No more extended attributes (EAs) were found for the file.",
    },
    {
        .name = "STATUS_INVALID_EA_NAME",
        .value = 0x80000013UL,
        .description = "{Illegal EA} The specified extended attribute (EA) name contains at least one illegal character.",
    },
    {
        .name = "STATUS_EA_LIST_INCONSISTENT",
        .value = 0x80000014UL,
        .description = "{Inconsistent EA List} The extended attribute (EA) list is inconsistent.",
    },
    {
        .name = "STATUS_INVALID_EA_FLAG",
        .value = 0x80000015UL,
        .description = "{Invalid EA Flag} An invalid extended attribute (EA) flag was set.",
    },
    {
        .name = "STATUS_VERIFY_REQUIRED",
        .value = 0x80000016UL,
        .description = "{Verifying Disk} The media has changed and a verify operation is in progress; therefore, no reads or writes can be performed to the device, except those that are used in the verify operation.",
    },
    {
        .name = "STATUS_EXTRANEOUS_INFORMATION",
        .value = 0x80000017UL,
        .description = "{Too Much Information} The specified access control list (ACL) contained more information than was expected.",
    },
    {
        .name = "STATUS_RXACT_COMMIT_NECESSARY",
        .value = 0x80000018UL,
        .description = "This warning level status indicates that the transaction state already exists for the registry subtree, but that a transaction commit was previously aborted. The commit has NOT been completed but has not been rolled back either; therefore, it can still be committed, if needed.",
    },
    {
        .name = "STATUS_NO_MORE_ENTRIES",
        .value = 0x8000001AUL,
        .description = "{No More Entries} No more entries are available from an enumeration operation.",
    },
    {
        .name = "STATUS_FILEMARK_DETECTED",
        .value = 0x8000001BUL,
        .description = "{Filemark Found} A filemark was detected.",
    },
    {
        .name = "STATUS_MEDIA_CHANGED",
        .value = 0x8000001CUL,
        .description = "{Media Changed} The media has changed.",
    },
    {
        .name = "STATUS_BUS_RESET",
        .value = 0x8000001DUL,
        .description = "{I/O Bus Reset} An I/O bus reset was detected.",
    },
    {
        .name = "STATUS_END_OF_MEDIA",
        .value = 0x8000001EUL,
        .description = "{End of Media} The end of the media was encountered.",
    },
    {
        .name = "STATUS_BEGINNING_OF_MEDIA",
        .value = 0x8000001FUL,
        .description = "The beginning of a tape or partition has been detected.",
    },
    {
        .name = "STATUS_MEDIA_CHECK",
        .value = 0x80000020UL,
        .description = "{Media Changed} The media might have changed.",
    },
    {
        .name = "STATUS_SETMARK_DETECTED",
        .value = 0x80000021UL,
        .description = "A tape access reached a set mark.",
    },
    {
        .name = "STATUS_NO_DATA_DETECTED",
        .value = 0x80000022UL,
        .description = "During a tape access, the end of the data written is reached.",
    },
    {
        .name = "STATUS_REDIRECTOR_HAS_OPEN_HANDLES",
        .value = 0x80000023UL,
        .description = "The redirector is in use and cannot be unloaded.",
    },
    {
        .name = "STATUS_SERVER_HAS_OPEN_HANDLES",
        .value = 0x80000024UL,
        .description = "The server is in use and cannot be unloaded.",
    },
    {
        .name = "STATUS_ALREADY_DISCONNECTED",
        .value = 0x80000025UL,
        .description = "The specified connection has already been disconnected.",
    },
    {
        .name = "STATUS_LONGJUMP",
        .value = 0x80000026UL,
        .description = "A long jump has been executed.",
    },
    {
        .name = "STATUS_CLEANER_CARTRIDGE_INSTALLED",
        .value = 0x80000027UL,
        .description = "A cleaner cartridge is present in the tape library.",
    },
    {
        .name = "STATUS_PLUGPLAY_QUERY_VETOED",
        .value = 0x80000028UL,
        .description = "The Plug and Play query operation was not successful.",
    },
    {
        .name = "STATUS_UNWIND_CONSOLIDATE",
        .value = 0x80000029UL,
        .description = "A frame consolidation has been executed.",
    },
    {
        .name = "STATUS_REGISTRY_HIVE_RECOVERED",
        .value = 0x8000002AUL,
        .description = "{Registry Hive Recovered} The registry hive (file): %hs was corrupted and it has been recovered. Some data might have been lost.",
    },
    {
        .name = "STATUS_DLL_MIGHT_BE_INSECURE",
        .value = 0x8000002BUL,
        .description = "The application is attempting to run executable code from the module %hs. This might be insecure. An alternative, %hs, is available. Should the application use the secure module %hs?",
    },
    {
        .name = "STATUS_DLL_MIGHT_BE_INCOMPATIBLE",
        .value = 0x8000002CUL,
        .description = "The application is loading executable code from the module %hs. This is secure but might be incompatible with previous releases of the operating system. An alternative, %hs, is available. Should the application use the secure module %hs?",
    },
    {
        .name = "STATUS_STOPPED_ON_SYMLINK",
        .value = 0x8000002DUL,
        .description = "The create operation stopped after reaching a symbolic link.",
    },
    {
        .name = "STATUS_DEVICE_REQUIRES_CLEANING",
        .value = 0x80000288UL,
        .description = "The device has indicated that cleaning is necessary.",
    },
    {
        .name = "STATUS_DEVICE_DOOR_OPEN",
        .value = 0x80000289UL,
        .description = "The device has indicated that its door is open. Further operations require it closed and secured.",
    },
    {
        .name = "STATUS_DATA_LOST_REPAIR",
        .value = 0x80000803UL,
        .description = "Windows discovered a corruption in the file %hs. This file has now been repaired. Check if any data in the file was lost because of the corruption.",
    },
    {
        .name = "DBG_EXCEPTION_NOT_HANDLED",
        .value = 0x80010001UL,
        .description = "Debugger did not handle the exception.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_ALREADY_UP",
        .value = 0x80130001UL,
        .description = "The cluster node is already up.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_ALREADY_DOWN",
        .value = 0x80130002UL,
        .description = "The cluster node is already down.",
    },
    {
        .name = "STATUS_CLUSTER_NETWORK_ALREADY_ONLINE",
        .value = 0x80130003UL,
        .description = "The cluster network is already online.",
    },
    {
        .name = "STATUS_CLUSTER_NETWORK_ALREADY_OFFLINE",
        .value = 0x80130004UL,
        .description = "The cluster network is already offline.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_ALREADY_MEMBER",
        .value = 0x80130005UL,
        .description = "The cluster node is already a member of the cluster.",
    },
    {
        .name = "STATUS_COULD_NOT_RESIZE_LOG",
        .value = 0x80190009UL,
        .description = "The log could not be set to the requested size.",
    },
    {
        .name = "STATUS_NO_TXF_METADATA",
        .value = 0x80190029UL,
        .description = "There is no transaction metadata on the file.",
    },
    {
        .name = "STATUS_CANT_RECOVER_WITH_HANDLE_OPEN",
        .value = 0x80190031UL,
        .description = "The file cannot be recovered because there is a handle still open on it.",
    },
    {
        .name = "STATUS_TXF_METADATA_ALREADY_PRESENT",
        .value = 0x80190041UL,
        .description = "Transaction metadata is already present on this file and cannot be superseded.",
    },
    {
        .name = "STATUS_TRANSACTION_SCOPE_CALLBACKS_NOT_SET",
        .value = 0x80190042UL,
        .description = "A transaction scope could not be entered because the scope handler has not been initialized.",
    },
    {
        .name = "STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD_RECOVERED",
        .value = 0x801B00EBUL,
        .description = "{Display Driver Stopped Responding and recovered} The %hs display driver has stopped working normally. The recovery had been performed.",
    },
    {
        .name = "STATUS_FLT_BUFFER_TOO_SMALL",
        .value = 0x801C0001UL,
        .description = "{Buffer too small} The buffer is too small to contain the entry. No information has been written to the buffer.",
    },
    {
        .name = "STATUS_FVE_PARTIAL_METADATA",
        .value = 0x80210001UL,
        .description = "Volume metadata read or write is incomplete.",
    },
    {
        .name = "STATUS_FVE_TRANSIENT_STATE",
        .value = 0x80210002UL,
        .description = "BitLocker encryption keys were ignored because the volume was in a transient state.",
    },
    {
        .name = "STATUS_UNSUCCESSFUL",
        .value = 0xC0000001UL,
        .description = "{Operation Failed} The requested operation was unsuccessful.",
    },
    {
        .name = "STATUS_NOT_IMPLEMENTED",
        .value = 0xC0000002UL,
        .description = "{Not Implemented} The requested operation is not implemented.",
    },
    {
        .name = "STATUS_INVALID_INFO_CLASS",
        .value = 0xC0000003UL,
        .description = "{Invalid Parameter} The specified information class is not a valid information class for the specified object.",
    },
    {
        .name = "STATUS_INFO_LENGTH_MISMATCH",
        .value = 0xC0000004UL,
        .description = "The specified information record length does not match the length that is required for the specified information class.",
    },
    {
        .name = "STATUS_ACCESS_VIOLATION",
        .value = 0xC0000005UL,
        .description = "The instruction at 0x%08lx referenced memory at 0x%08lx. The memory could not be %s.",
    },
    {
        .name = "STATUS_IN_PAGE_ERROR",
        .value = 0xC0000006UL,
        .description = "The instruction at 0x%08lx referenced memory at 0x%08lx. The required data was not placed into memory because of an I/O error status of 0x%08lx.",
    },
    {
        .name = "STATUS_PAGEFILE_QUOTA",
        .value = 0xC0000007UL,
        .description = "The page file quota for the process has been exhausted.",
    },
    {
        .name = "STATUS_INVALID_HANDLE",
        .value = 0xC0000008UL,
        .description = "An invalid HANDLE was specified.",
    },
    {
        .name = "STATUS_BAD_INITIAL_STACK",
        .value = 0xC0000009UL,
        .description = "An invalid initial stack was specified in a call to NtCreateThread.",
    },
    {
        .name = "STATUS_BAD_INITIAL_PC",
        .value = 0xC000000AUL,
        .description = "An invalid initial start address was specified in a call to NtCreateThread.",
    },
    {
        .name = "STATUS_INVALID_CID",
        .value = 0xC000000BUL,
        .description = "An invalid client ID was specified.",
    },
    {
        .name = "STATUS_TIMER_NOT_CANCELED",
        .value = 0xC000000CUL,
        .description = "An attempt was made to cancel or set a timer that has an associated APC and the specified thread is not the thread that originally set the timer with an associated APC routine.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER",
        .value = 0xC000000DUL,
        .description = "An invalid parameter was passed to a service or function.",
    },
    {
        .name = "STATUS_NO_SUCH_DEVICE",
        .value = 0xC000000EUL,
        .description = "A device that does not exist was specified.",
    },
    {
        .name = "STATUS_NO_SUCH_FILE",
        .value = 0xC000000FUL,
        .description = "{File Not Found} The file %hs does not exist.",
    },
    {
        .name = "STATUS_INVALID_DEVICE_REQUEST",
        .value = 0xC0000010UL,
        .description = "The specified request is not a valid operation for the target device.",
    },
    {
        .name = "STATUS_END_OF_FILE",
        .value = 0xC0000011UL,
        .description = "The end-of-file marker has been reached. There is no valid data in the file beyond this marker.",
    },
    {
        .name = "STATUS_WRONG_VOLUME",
        .value = 0xC0000012UL,
        .description = "{Wrong Volume} The wrong volume is in the drive. Insert volume %hs into drive %hs.",
    },
    {
        .name = "STATUS_NO_MEDIA_IN_DEVICE",
        .value = 0xC0000013UL,
        .description = "{No Disk} There is no disk in the drive. Insert a disk into drive %hs.",
    },
    {
        .name = "STATUS_UNRECOGNIZED_MEDIA",
        .value = 0xC0000014UL,
        .description = "{Unknown Disk Format} The disk in drive %hs is not formatted properly. Check the disk, and reformat it, if needed.",
    },
    {
        .name = "STATUS_NONEXISTENT_SECTOR",
        .value = 0xC0000015UL,
        .description = "{Sector Not Found} The specified sector does not exist.",
    },
    {
        .name = "STATUS_MORE_PROCESSING_REQUIRED",
        .value = 0xC0000016UL,
        .description = "{Still Busy} The specified I/O request packet (IRP) cannot be disposed of because the I/O operation is not complete.",
    },
    {
        .name = "STATUS_NO_MEMORY",
        .value = 0xC0000017UL,
        .description = "{Not Enough Quota} Not enough virtual memory or paging file quota is available to complete the specified operation.",
    },
    {
        .name = "STATUS_CONFLICTING_ADDRESSES",
        .value = 0xC0000018UL,
        .description = "{Conflicting Address Range} The specified address range conflicts with the address space.",
    },
    {
        .name = "STATUS_NOT_MAPPED_VIEW",
        .value = 0xC0000019UL,
        .description = "The address range to unmap is not a mapped view.",
    },
    {
        .name = "STATUS_UNABLE_TO_FREE_VM",
        .value = 0xC000001AUL,
        .description = "The virtual memory cannot be freed.",
    },
    {
        .name = "STATUS_UNABLE_TO_DELETE_SECTION",
        .value = 0xC000001BUL,
        .description = "The specified section cannot be deleted.",
    },
    {
        .name = "STATUS_INVALID_SYSTEM_SERVICE",
        .value = 0xC000001CUL,
        .description = "An invalid system service was specified in a system service call.",
    },
    {
        .name = "STATUS_ILLEGAL_INSTRUCTION",
        .value = 0xC000001DUL,
        .description = "{EXCEPTION} Illegal Instruction An attempt was made to execute an illegal instruction.",
    },
    {
        .name = "STATUS_INVALID_LOCK_SEQUENCE",
        .value = 0xC000001EUL,
        .description = "{Invalid Lock Sequence} An attempt was made to execute an invalid lock sequence.",
    },
    {
        .name = "STATUS_INVALID_VIEW_SIZE",
        .value = 0xC000001FUL,
        .description = "{Invalid Mapping} An attempt was made to create a view for a section that is bigger than the section.",
    },
    {
        .name = "STATUS_INVALID_FILE_FOR_SECTION",
        .value = 0xC0000020UL,
        .description = "{Bad File} The attributes of the specified mapping file for a section of memory cannot be read.",
    },
    {
        .name = "STATUS_ALREADY_COMMITTED",
        .value = 0xC0000021UL,
        .description = "{Already Committed} The specified address range is already committed.",
    },
    {
        .name = "STATUS_ACCESS_DENIED",
        .value = 0xC0000022UL,
        .description = "{Access Denied} A process has requested access to an object but has not been granted those access rights.",
    },
    {
        .name = "STATUS_BUFFER_TOO_SMALL",
        .value = 0xC0000023UL,
        .description = "{Buffer Too Small} The buffer is too small to contain the entry. No information has been written to the buffer.",
    },
    {
        .name = "STATUS_OBJECT_TYPE_MISMATCH",
        .value = 0xC0000024UL,
        .description = "{Wrong Type} There is a mismatch between the type of object that is required by the requested operation and the type of object that is specified in the request.",
    },
    {
        .name = "STATUS_NONCONTINUABLE_EXCEPTION",
        .value = 0xC0000025UL,
        .description = "{EXCEPTION} Cannot Continue Windows cannot continue from this exception.",
    },
    {
        .name = "STATUS_INVALID_DISPOSITION",
        .value = 0xC0000026UL,
        .description = "An invalid exception disposition was returned by an exception handler.",
    },
    {
        .name = "STATUS_UNWIND",
        .value = 0xC0000027UL,
        .description = "Unwind exception code.",
    },
    {
        .name = "STATUS_BAD_STACK",
        .value = 0xC0000028UL,
        .description = "An invalid or unaligned stack was encountered during an unwind operation.",
    },
    {
        .name = "STATUS_INVALID_UNWIND_TARGET",
        .value = 0xC0000029UL,
        .description = "An invalid unwind target was encountered during an unwind operation.",
    },
    {
        .name = "STATUS_NOT_LOCKED",
        .value = 0xC000002AUL,
        .description = "An attempt was made to unlock a page of memory that was not locked.",
    },
    {
        .name = "STATUS_PARITY_ERROR",
        .value = 0xC000002BUL,
        .description = "A device parity error on an I/O operation.",
    },
    {
        .name = "STATUS_UNABLE_TO_DECOMMIT_VM",
        .value = 0xC000002CUL,
        .description = "An attempt was made to decommit uncommitted virtual memory.",
    },
    {
        .name = "STATUS_NOT_COMMITTED",
        .value = 0xC000002DUL,
        .description = "An attempt was made to change the attributes on memory that has not been committed.",
    },
    {
        .name = "STATUS_INVALID_PORT_ATTRIBUTES",
        .value = 0xC000002EUL,
        .description = "Invalid object attributes specified to NtCreatePort or invalid port attributes specified to NtConnectPort.",
    },
    {
        .name = "STATUS_PORT_MESSAGE_TOO_LONG",
        .value = 0xC000002FUL,
        .description = "The length of the message that was passed to NtRequestPort or NtRequestWaitReplyPort is longer than the maximum message that is allowed by the port.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_MIX",
        .value = 0xC0000030UL,
        .description = "An invalid combination of parameters was specified.",
    },
    {
        .name = "STATUS_INVALID_QUOTA_LOWER",
        .value = 0xC0000031UL,
        .description = "An attempt was made to lower a quota limit below the current usage.",
    },
    {
        .name = "STATUS_DISK_CORRUPT_ERROR",
        .value = 0xC0000032UL,
        .description = "{Corrupt Disk} The file system structure on the disk is corrupt and unusable. Run the Chkdsk utility on the volume %hs.",
    },
    {
        .name = "STATUS_OBJECT_NAME_INVALID",
        .value = 0xC0000033UL,
        .description = "The object name is invalid.",
    },
    {
        .name = "STATUS_OBJECT_NAME_NOT_FOUND",
        .value = 0xC0000034UL,
        .description = "The object name is not found.",
    },
    {
        .name = "STATUS_OBJECT_NAME_COLLISION",
        .value = 0xC0000035UL,
        .description = "The object name already exists.",
    },
    {
        .name = "STATUS_PORT_DISCONNECTED",
        .value = 0xC0000037UL,
        .description = "An attempt was made to send a message to a disconnected communication port.",
    },
    {
        .name = "STATUS_DEVICE_ALREADY_ATTACHED",
        .value = 0xC0000038UL,
        .description = "An attempt was made to attach to a device that was already attached to another device.",
    },
    {
        .name = "STATUS_OBJECT_PATH_INVALID",
        .value = 0xC0000039UL,
        .description = "The object path component was not a directory object.",
    },
    {
        .name = "STATUS_OBJECT_PATH_NOT_FOUND",
        .value = 0xC000003AUL,
        .description = "{Path Not Found} The path %hs does not exist.",
    },
    {
        .name = "STATUS_OBJECT_PATH_SYNTAX_BAD",
        .value = 0xC000003BUL,
        .description = "The object path component was not a directory object.",
    },
    {
        .name = "STATUS_DATA_OVERRUN",
        .value = 0xC000003CUL,
        .description = "{Data Overrun} A data overrun error occurred.",
    },
    {
        .name = "STATUS_DATA_LATE_ERROR",
        .value = 0xC000003DUL,
        .description = "{Data Late} A data late error occurred.",
    },
    {
        .name = "STATUS_DATA_ERROR",
        .value = 0xC000003EUL,
        .description = "{Data Error} An error occurred in reading or writing data.",
    },
    {
        .name = "STATUS_CRC_ERROR",
        .value = 0xC000003FUL,
        .description = "{Bad CRC} A cyclic redundancy check (CRC) checksum error occurred.",
    },
    {
        .name = "STATUS_SECTION_TOO_BIG",
        .value = 0xC0000040UL,
        .description = "{Section Too Large} The specified section is too big to map the file.",
    },
    {
        .name = "STATUS_PORT_CONNECTION_REFUSED",
        .value = 0xC0000041UL,
        .description = "The NtConnectPort request is refused.",
    },
    {
        .name = "STATUS_INVALID_PORT_HANDLE",
        .value = 0xC0000042UL,
        .description = "The type of port handle is invalid for the operation that is requested.",
    },
    {
        .name = "STATUS_SHARING_VIOLATION",
        .value = 0xC0000043UL,
        .description = "A file cannot be opened because the share access flags are incompatible.",
    },
    {
        .name = "STATUS_QUOTA_EXCEEDED",
        .value = 0xC0000044UL,
        .description = "Insufficient quota exists to complete the operation.",
    },
    {
        .name = "STATUS_INVALID_PAGE_PROTECTION",
        .value = 0xC0000045UL,
        .description = "The specified page protection was not valid.",
    },
    {
        .name = "STATUS_MUTANT_NOT_OWNED",
        .value = 0xC0000046UL,
        .description = "An attempt to release a mutant object was made by a thread that was not the owner of the mutant object.",
    },
    {
        .name = "STATUS_SEMAPHORE_LIMIT_EXCEEDED",
        .value = 0xC0000047UL,
        .description = "An attempt was made to release a semaphore such that its maximum count would have been exceeded.",
    },
    {
        .name = "STATUS_PORT_ALREADY_SET",
        .value = 0xC0000048UL,
        .description = "An attempt was made to set the DebugPort or ExceptionPort of a process, but a port already exists in the process, or an attempt was made to set the CompletionPort of a file but a port was already set in the file, or an attempt was made to set the associated completion port of an ALPC port but it is already set.",
    },
    {
        .name = "STATUS_SECTION_NOT_IMAGE",
        .value = 0xC0000049UL,
        .description = "An attempt was made to query image information on a section that does not map an image.",
    },
    {
        .name = "STATUS_SUSPEND_COUNT_EXCEEDED",
        .value = 0xC000004AUL,
        .description = "An attempt was made to suspend a thread whose suspend count was at its maximum.",
    },
    {
        .name = "STATUS_THREAD_IS_TERMINATING",
        .value = 0xC000004BUL,
        .description = "An attempt was made to suspend a thread that has begun termination.",
    },
    {
        .name = "STATUS_BAD_WORKING_SET_LIMIT",
        .value = 0xC000004CUL,
        .description = "An attempt was made to set the working set limit to an invalid value (for example, the minimum greater than maximum).",
    },
    {
        .name = "STATUS_INCOMPATIBLE_FILE_MAP",
        .value = 0xC000004DUL,
        .description = "A section was created to map a file that is not compatible with an already existing section that maps the same file.",
    },
    {
        .name = "STATUS_SECTION_PROTECTION",
        .value = 0xC000004EUL,
        .description = "A view to a section specifies a protection that is incompatible with the protection of the initial view.",
    },
    {
        .name = "STATUS_EAS_NOT_SUPPORTED",
        .value = 0xC000004FUL,
        .description = "An operation involving EAs failed because the file system does not support EAs.",
    },
    {
        .name = "STATUS_EA_TOO_LARGE",
        .value = 0xC0000050UL,
        .description = "An EA operation failed because the EA set is too large.",
    },
    {
        .name = "STATUS_NONEXISTENT_EA_ENTRY",
        .value = 0xC0000051UL,
        .description = "An EA operation failed because the name or EA index is invalid.",
    },
    {
        .name = "STATUS_NO_EAS_ON_FILE",
        .value = 0xC0000052UL,
        .description = "The file for which EAs were requested has no EAs.",
    },
    {
        .name = "STATUS_EA_CORRUPT_ERROR",
        .value = 0xC0000053UL,
        .description = "The EA is corrupt and cannot be read.",
    },
    {
        .name = "STATUS_FILE_LOCK_CONFLICT",
        .value = 0xC0000054UL,
        .description = "A requested read/write cannot be granted due to a conflicting file lock.",
    },
    {
        .name = "STATUS_LOCK_NOT_GRANTED",
        .value = 0xC0000055UL,
        .description = "A requested file lock cannot be granted due to other existing locks.",
    },
    {
        .name = "STATUS_DELETE_PENDING",
        .value = 0xC0000056UL,
        .description = "A non-close operation has been requested of a file object that has a delete pending.",
    },
    {
        .name = "STATUS_CTL_FILE_NOT_SUPPORTED",
        .value = 0xC0000057UL,
        .description = "An attempt was made to set the control attribute on a file. This attribute is not supported in the destination file system.",
    },
    {
        .name = "STATUS_UNKNOWN_REVISION",
        .value = 0xC0000058UL,
        .description = "Indicates a revision number that was encountered or specified is not one that is known by the service. It might be a more recent revision than the service is aware of.",
    },
    {
        .name = "STATUS_REVISION_MISMATCH",
        .value = 0xC0000059UL,
        .description = "Indicates that two revision levels are incompatible.",
    },
    {
        .name = "STATUS_INVALID_OWNER",
        .value = 0xC000005AUL,
        .description = "Indicates a particular security ID cannot be assigned as the owner of an object.",
    },
    {
        .name = "STATUS_INVALID_PRIMARY_GROUP",
        .value = 0xC000005BUL,
        .description = "Indicates a particular security ID cannot be assigned as the primary group of an object.",
    },
    {
        .name = "STATUS_NO_IMPERSONATION_TOKEN",
        .value = 0xC000005CUL,
        .description = "An attempt has been made to operate on an impersonation token by a thread that is not currently impersonating a client.",
    },
    {
        .name = "STATUS_CANT_DISABLE_MANDATORY",
        .value = 0xC000005DUL,
        .description = "A mandatory group cannot be disabled.",
    },
    {
        .name = "STATUS_NO_LOGON_SERVERS",
        .value = 0xC000005EUL,
        .description = "No logon servers are currently available to service the logon request.",
    },
    {
        .name = "STATUS_NO_SUCH_LOGON_SESSION",
        .value = 0xC000005FUL,
        .description = "A specified logon session does not exist. It might already have been terminated.",
    },
    {
        .name = "STATUS_NO_SUCH_PRIVILEGE",
        .value = 0xC0000060UL,
        .description = "A specified privilege does not exist.",
    },
    {
        .name = "STATUS_PRIVILEGE_NOT_HELD",
        .value = 0xC0000061UL,
        .description = "A required privilege is not held by the client.",
    },
    {
        .name = "STATUS_INVALID_ACCOUNT_NAME",
        .value = 0xC0000062UL,
        .description = "The name provided is not a properly formed account name.",
    },
    {
        .name = "STATUS_USER_EXISTS",
        .value = 0xC0000063UL,
        .description = "The specified account already exists.",
    },
    {
        .name = "STATUS_NO_SUCH_USER",
        .value = 0xC0000064UL,
        .description = "The specified account does not exist.",
    },
    {
        .name = "STATUS_GROUP_EXISTS",
        .value = 0xC0000065UL,
        .description = "The specified group already exists.",
    },
    {
        .name = "STATUS_NO_SUCH_GROUP",
        .value = 0xC0000066UL,
        .description = "The specified group does not exist.",
    },
    {
        .name = "STATUS_MEMBER_IN_GROUP",
        .value = 0xC0000067UL,
        .description = "The specified user account is already in the specified group account. Also used to indicate a group cannot be deleted because it contains a member.",
    },
    {
        .name = "STATUS_MEMBER_NOT_IN_GROUP",
        .value = 0xC0000068UL,
        .description = "The specified user account is not a member of the specified group account.",
    },
    {
        .name = "STATUS_LAST_ADMIN",
        .value = 0xC0000069UL,
        .description = "Indicates the requested operation would disable or delete the last remaining administration account. This is not allowed to prevent creating a situation in which the system cannot be administrated.",
    },
    {
        .name = "STATUS_WRONG_PASSWORD",
        .value = 0xC000006AUL,
        .description = "When trying to update a password, this return status indicates that the value provided as the current password is not correct.",
    },
    {
        .name = "STATUS_ILL_FORMED_PASSWORD",
        .value = 0xC000006BUL,
        .description = "When trying to update a password, this return status indicates that the value provided for the new password contains values that are not allowed in passwords.",
    },
    {
        .name = "STATUS_PASSWORD_RESTRICTION",
        .value = 0xC000006CUL,
        .description = "When trying to update a password, this status indicates that some password update rule has been violated. For example, the password might not meet length criteria.",
    },
    {
        .name = "STATUS_LOGON_FAILURE",
        .value = 0xC000006DUL,
        .description = "The attempted logon is invalid. This is either due to a bad username or authentication information.",
    },
    {
        .name = "STATUS_ACCOUNT_RESTRICTION",
        .value = 0xC000006EUL,
        .description = "Indicates a referenced user name and authentication information are valid, but some user account restriction has prevented successful authentication (such as time-of-day restrictions).",
    },
    {
        .name = "STATUS_INVALID_LOGON_HOURS",
        .value = 0xC000006FUL,
        .description = "The user account has time restrictions and cannot be logged onto at this time.",
    },
    {
        .name = "STATUS_INVALID_WORKSTATION",
        .value = 0xC0000070UL,
        .description = "The user account is restricted so that it cannot be used to log on from the source workstation.",
    },
    {
        .name = "STATUS_PASSWORD_EXPIRED",
        .value = 0xC0000071UL,
        .description = "The user account password has expired.",
    },
    {
        .name = "STATUS_ACCOUNT_DISABLED",
        .value = 0xC0000072UL,
        .description = "The referenced account is currently disabled and cannot be logged on to.",
    },
    {
        .name = "STATUS_NONE_MAPPED",
        .value = 0xC0000073UL,
        .description = "None of the information to be translated has been translated.",
    },
    {
        .name = "STATUS_TOO_MANY_LUIDS_REQUESTED",
        .value = 0xC0000074UL,
        .description = "The number of LUIDs requested cannot be allocated with a single allocation.",
    },
    {
        .name = "STATUS_LUIDS_EXHAUSTED",
        .value = 0xC0000075UL,
        .description = "Indicates there are no more LUIDs to allocate.",
    },
    {
        .name = "STATUS_INVALID_SUB_AUTHORITY",
        .value = 0xC0000076UL,
        .description = "Indicates the sub-authority value is invalid for the particular use.",
    },
    {
        .name = "STATUS_INVALID_ACL",
        .value = 0xC0000077UL,
        .description = "Indicates the ACL structure is not valid.",
    },
    {
        .name = "STATUS_INVALID_SID",
        .value = 0xC0000078UL,
        .description = "Indicates the SID structure is not valid.",
    },
    {
        .name = "STATUS_INVALID_SECURITY_DESCR",
        .value = 0xC0000079UL,
        .description = "Indicates the SECURITY_DESCRIPTOR structure is not valid.",
    },
    {
        .name = "STATUS_PROCEDURE_NOT_FOUND",
        .value = 0xC000007AUL,
        .description = "Indicates the specified procedure address cannot be found in the DLL.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_FORMAT",
        .value = 0xC000007BUL,
        .description = "{Bad Image} %hs is either not designed to run on Windows or it contains an error. Try installing the program again using the original installation media or contact your system administrator or the software vendor for support.",
    },
    {
        .name = "STATUS_NO_TOKEN",
        .value = 0xC000007CUL,
        .description = "An attempt was made to reference a token that does not exist. This is typically done by referencing the token that is associated with a thread when the thread is not impersonating a client.",
    },
    {
        .name = "STATUS_BAD_INHERITANCE_ACL",
        .value = 0xC000007DUL,
        .description = "Indicates that an attempt to build either an inherited ACL or ACE was not successful. This can be caused by a number of things. One of the more probable causes is the replacement of a CreatorId with a SID that did not fit into the ACE or ACL.",
    },
    {
        .name = "STATUS_RANGE_NOT_LOCKED",
        .value = 0xC000007EUL,
        .description = "The range specified in NtUnlockFile was not locked.",
    },
    {
        .name = "STATUS_DISK_FULL",
        .value = 0xC000007FUL,
        .description = "An operation failed because the disk was full.",
    },
    {
        .name = "STATUS_SERVER_DISABLED",
        .value = 0xC0000080UL,
        .description = "The GUID allocation server is disabled at the moment.",
    },
    {
        .name = "STATUS_SERVER_NOT_DISABLED",
        .value = 0xC0000081UL,
        .description = "The GUID allocation server is enabled at the moment.",
    },
    {
        .name = "STATUS_TOO_MANY_GUIDS_REQUESTED",
        .value = 0xC0000082UL,
        .description = "Too many GUIDs were requested from the allocation server at once.",
    },
    {
        .name = "STATUS_GUIDS_EXHAUSTED",
        .value = 0xC0000083UL,
        .description = "The GUIDs could not be allocated because the Authority Agent was exhausted.",
    },
    {
        .name = "STATUS_INVALID_ID_AUTHORITY",
        .value = 0xC0000084UL,
        .description = "The value provided was an invalid value for an identifier authority.",
    },
    {
        .name = "STATUS_AGENTS_EXHAUSTED",
        .value = 0xC0000085UL,
        .description = "No more authority agent values are available for the particular identifier authority value.",
    },
    {
        .name = "STATUS_INVALID_VOLUME_LABEL",
        .value = 0xC0000086UL,
        .description = "An invalid volume label has been specified.",
    },
    {
        .name = "STATUS_SECTION_NOT_EXTENDED",
        .value = 0xC0000087UL,
        .description = "A mapped section could not be extended.",
    },
    {
        .name = "STATUS_NOT_MAPPED_DATA",
        .value = 0xC0000088UL,
        .description = "Specified section to flush does not map a data file.",
    },
    {
        .name = "STATUS_RESOURCE_DATA_NOT_FOUND",
        .value = 0xC0000089UL,
        .description = "Indicates the specified image file did not contain a resource section.",
    },
    {
        .name = "STATUS_RESOURCE_TYPE_NOT_FOUND",
        .value = 0xC000008AUL,
        .description = "Indicates the specified resource type cannot be found in the image file.",
    },
    {
        .name = "STATUS_RESOURCE_NAME_NOT_FOUND",
        .value = 0xC000008BUL,
        .description = "Indicates the specified resource name cannot be found in the image file.",
    },
    {
        .name = "STATUS_ARRAY_BOUNDS_EXCEEDED",
        .value = 0xC000008CUL,
        .description = "{EXCEPTION} Array bounds exceeded.",
    },
    {
        .name = "STATUS_FLOAT_DENORMAL_OPERAND",
        .value = 0xC000008DUL,
        .description = "{EXCEPTION} Floating-point denormal operand.",
    },
    {
        .name = "STATUS_FLOAT_DIVIDE_BY_ZERO",
        .value = 0xC000008EUL,
        .description = "{EXCEPTION} Floating-point division by zero.",
    },
    {
        .name = "STATUS_FLOAT_INEXACT_RESULT",
        .value = 0xC000008FUL,
        .description = "{EXCEPTION} Floating-point inexact result.",
    },
    {
        .name = "STATUS_FLOAT_INVALID_OPERATION",
        .value = 0xC0000090UL,
        .description = "{EXCEPTION} Floating-point invalid operation.",
    },
    {
        .name = "STATUS_FLOAT_OVERFLOW",
        .value = 0xC0000091UL,
        .description = "{EXCEPTION} Floating-point overflow.",
    },
    {
        .name = "STATUS_FLOAT_STACK_CHECK",
        .value = 0xC0000092UL,
        .description = "{EXCEPTION} Floating-point stack check.",
    },
    {
        .name = "STATUS_FLOAT_UNDERFLOW",
        .value = 0xC0000093UL,
        .description = "{EXCEPTION} Floating-point underflow.",
    },
    {
        .name = "STATUS_INTEGER_DIVIDE_BY_ZERO",
        .value = 0xC0000094UL,
        .description = "{EXCEPTION} Integer division by zero.",
    },
    {
        .name = "STATUS_INTEGER_OVERFLOW",
        .value = 0xC0000095UL,
        .description = "{EXCEPTION} Integer overflow.",
    },
    {
        .name = "STATUS_PRIVILEGED_INSTRUCTION",
        .value = 0xC0000096UL,
        .description = "{EXCEPTION} Privileged instruction.",
    },
    {
        .name = "STATUS_TOO_MANY_PAGING_FILES",
        .value = 0xC0000097UL,
        .description = "An attempt was made to install more paging files than the system supports.",
    },
    {
        .name = "STATUS_FILE_INVALID",
        .value = 0xC0000098UL,
        .description = "The volume for a file has been externally altered such that the opened file is no longer valid.",
    },
    {
        .name = "STATUS_ALLOTTED_SPACE_EXCEEDED",
        .value = 0xC0000099UL,
        .description = "When a block of memory is allotted for future updates, such as the memory allocated to hold discretionary access control and primary group information, successive updates might exceed the amount of memory originally allotted. Because a quota might already have been charged to several processes that have handles to the object, it is not reasonable to alter the size of the allocated memory. Instead, a request that requires more memory than has been allotted must fail and the STATUS_ALLOTTED_SPACE_EXCEEDED error returned.",
    },
    {
        .name = "STATUS_INSUFFICIENT_RESOURCES",
        .value = 0xC000009AUL,
        .description = "Insufficient system resources exist to complete the API.",
    },
    {
        .name = "STATUS_DFS_EXIT_PATH_FOUND",
        .value = 0xC000009BUL,
        .description = "An attempt has been made to open a DFS exit path control file.",
    },
    {
        .name = "STATUS_DEVICE_DATA_ERROR",
        .value = 0xC000009CUL,
        .description = "There are bad blocks (sectors) on the hard disk.",
    },
    {
        .name = "STATUS_DEVICE_NOT_CONNECTED",
        .value = 0xC000009DUL,
        .description = "There is bad cabling, non-termination, or the controller is not able to obtain access to the hard disk.",
    },
    {
        .name = "STATUS_FREE_VM_NOT_AT_BASE",
        .value = 0xC000009FUL,
        .description = "Virtual memory cannot be freed because the base address is not the base of the region and a region size of zero was specified.",
    },
    {
        .name = "STATUS_MEMORY_NOT_ALLOCATED",
        .value = 0xC00000A0UL,
        .description = "An attempt was made to free virtual memory that is not allocated.",
    },
    {
        .name = "STATUS_WORKING_SET_QUOTA",
        .value = 0xC00000A1UL,
        .description = "The working set is not big enough to allow the requested pages to be locked.",
    },
    {
        .name = "STATUS_MEDIA_WRITE_PROTECTED",
        .value = 0xC00000A2UL,
        .description = "{Write Protect Error} The disk cannot be written to because it is write-protected. Remove the write protection from the volume %hs in drive %hs.",
    },
    {
        .name = "STATUS_DEVICE_NOT_READY",
        .value = 0xC00000A3UL,
        .description = "{Drive Not Ready} The drive is not ready for use; its door might be open. Check drive %hs and make sure that a disk is inserted and that the drive door is closed.",
    },
    {
        .name = "STATUS_INVALID_GROUP_ATTRIBUTES",
        .value = 0xC00000A4UL,
        .description = "The specified attributes are invalid or are incompatible with the attributes for the group as a whole.",
    },
    {
        .name = "STATUS_BAD_IMPERSONATION_LEVEL",
        .value = 0xC00000A5UL,
        .description = "A specified impersonation level is invalid. Also used to indicate that a required impersonation level was not provided.",
    },
    {
        .name = "STATUS_CANT_OPEN_ANONYMOUS",
        .value = 0xC00000A6UL,
        .description = "An attempt was made to open an anonymous-level token. Anonymous tokens cannot be opened.",
    },
    {
        .name = "STATUS_BAD_VALIDATION_CLASS",
        .value = 0xC00000A7UL,
        .description = "The validation information class requested was invalid.",
    },
    {
        .name = "STATUS_BAD_TOKEN_TYPE",
        .value = 0xC00000A8UL,
        .description = "The type of a token object is inappropriate for its attempted use.",
    },
    {
        .name = "STATUS_BAD_MASTER_BOOT_RECORD",
        .value = 0xC00000A9UL,
        .description = "The type of a token object is inappropriate for its attempted use.",
    },
    {
        .name = "STATUS_INSTRUCTION_MISALIGNMENT",
        .value = 0xC00000AAUL,
        .description = "An attempt was made to execute an instruction at an unaligned address and the host system does not support unaligned instruction references.",
    },
    {
        .name = "STATUS_INSTANCE_NOT_AVAILABLE",
        .value = 0xC00000ABUL,
        .description = "The maximum named pipe instance count has been reached.",
    },
    {
        .name = "STATUS_PIPE_NOT_AVAILABLE",
        .value = 0xC00000ACUL,
        .description = "An instance of a named pipe cannot be found in the listening state.",
    },
    {
        .name = "STATUS_INVALID_PIPE_STATE",
        .value = 0xC00000ADUL,
        .description = "The named pipe is not in the connected or closing state.",
    },
    {
        .name = "STATUS_PIPE_BUSY",
        .value = 0xC00000AEUL,
        .description = "The specified pipe is set to complete operations and there are current I/O operations queued so that it cannot be changed to queue operations.",
    },
    {
        .name = "STATUS_ILLEGAL_FUNCTION",
        .value = 0xC00000AFUL,
        .description = "The specified handle is not open to the server end of the named pipe.",
    },
    {
        .name = "STATUS_PIPE_DISCONNECTED",
        .value = 0xC00000B0UL,
        .description = "The specified named pipe is in the disconnected state.",
    },
    {
        .name = "STATUS_PIPE_CLOSING",
        .value = 0xC00000B1UL,
        .description = "The specified named pipe is in the closing state.",
    },
    {
        .name = "STATUS_PIPE_CONNECTED",
        .value = 0xC00000B2UL,
        .description = "The specified named pipe is in the connected state.",
    },
    {
        .name = "STATUS_PIPE_LISTENING",
        .value = 0xC00000B3UL,
        .description = "The specified named pipe is in the listening state.",
    },
    {
        .name = "STATUS_INVALID_READ_MODE",
        .value = 0xC00000B4UL,
        .description = "The specified named pipe is not in message mode.",
    },
    {
        .name = "STATUS_IO_TIMEOUT",
        .value = 0xC00000B5UL,
        .description = "{Device Timeout} The specified I/O operation on %hs was not completed before the time-out period expired.",
    },
    {
        .name = "STATUS_FILE_FORCED_CLOSED",
        .value = 0xC00000B6UL,
        .description = "The specified file has been closed by another process.",
    },
    {
        .name = "STATUS_PROFILING_NOT_STARTED",
        .value = 0xC00000B7UL,
        .description = "Profiling is not started.",
    },
    {
        .name = "STATUS_PROFILING_NOT_STOPPED",
        .value = 0xC00000B8UL,
        .description = "Profiling is not stopped.",
    },
    {
        .name = "STATUS_COULD_NOT_INTERPRET",
        .value = 0xC00000B9UL,
        .description = "The passed ACL did not contain the minimum required information.",
    },
    {
        .name = "STATUS_FILE_IS_A_DIRECTORY",
        .value = 0xC00000BAUL,
        .description = "The file that was specified as a target is a directory, and the caller specified that it could be anything but a directory.",
    },
    {
        .name = "STATUS_NOT_SUPPORTED",
        .value = 0xC00000BBUL,
        .description = "The request is not supported.",
    },
    {
        .name = "STATUS_REMOTE_NOT_LISTENING",
        .value = 0xC00000BCUL,
        .description = "This remote computer is not listening.",
    },
    {
        .name = "STATUS_DUPLICATE_NAME",
        .value = 0xC00000BDUL,
        .description = "A duplicate name exists on the network.",
    },
    {
        .name = "STATUS_BAD_NETWORK_PATH",
        .value = 0xC00000BEUL,
        .description = "The network path cannot be located.",
    },
    {
        .name = "STATUS_NETWORK_BUSY",
        .value = 0xC00000BFUL,
        .description = "The network is busy.",
    },
    {
        .name = "STATUS_DEVICE_DOES_NOT_EXIST",
        .value = 0xC00000C0UL,
        .description = "This device does not exist.",
    },
    {
        .name = "STATUS_TOO_MANY_COMMANDS",
        .value = 0xC00000C1UL,
        .description = "The network BIOS command limit has been reached.",
    },
    {
        .name = "STATUS_ADAPTER_HARDWARE_ERROR",
        .value = 0xC00000C2UL,
        .description = "An I/O adapter hardware error has occurred.",
    },
    {
        .name = "STATUS_INVALID_NETWORK_RESPONSE",
        .value = 0xC00000C3UL,
        .description = "The network responded incorrectly.",
    },
    {
        .name = "STATUS_UNEXPECTED_NETWORK_ERROR",
        .value = 0xC00000C4UL,
        .description = "An unexpected network error occurred.",
    },
    {
        .name = "STATUS_BAD_REMOTE_ADAPTER",
        .value = 0xC00000C5UL,
        .description = "The remote adapter is not compatible.",
    },
    {
        .name = "STATUS_PRINT_QUEUE_FULL",
        .value = 0xC00000C6UL,
        .description = "The print queue is full.",
    },
    {
        .name = "STATUS_NO_SPOOL_SPACE",
        .value = 0xC00000C7UL,
        .description = "Space to store the file that is waiting to be printed is not available on the server.",
    },
    {
        .name = "STATUS_PRINT_CANCELLED",
        .value = 0xC00000C8UL,
        .description = "The requested print file has been canceled.",
    },
    {
        .name = "STATUS_NETWORK_NAME_DELETED",
        .value = 0xC00000C9UL,
        .description = "The network name was deleted.",
    },
    {
        .name = "STATUS_NETWORK_ACCESS_DENIED",
        .value = 0xC00000CAUL,
        .description = "Network access is denied.",
    },
    {
        .name = "STATUS_BAD_DEVICE_TYPE",
        .value = 0xC00000CBUL,
        .description = "{Incorrect Network Resource Type} The specified device type (LPT, for example) conflicts with the actual device type on the remote resource.",
    },
    {
        .name = "STATUS_BAD_NETWORK_NAME",
        .value = 0xC00000CCUL,
        .description = "{Network Name Not Found} The specified share name cannot be found on the remote server.",
    },
    {
        .name = "STATUS_TOO_MANY_NAMES",
        .value = 0xC00000CDUL,
        .description = "The name limit for the network adapter card of the local computer was exceeded.",
    },
    {
        .name = "STATUS_TOO_MANY_SESSIONS",
        .value = 0xC00000CEUL,
        .description = "The network BIOS session limit was exceeded.",
    },
    {
        .name = "STATUS_SHARING_PAUSED",
        .value = 0xC00000CFUL,
        .description = "File sharing has been temporarily paused.",
    },
    {
        .name = "STATUS_REQUEST_NOT_ACCEPTED",
        .value = 0xC00000D0UL,
        .description = "No more connections can be made to this remote computer at this time because the computer has already accepted the maximum number of connections.",
    },
    {
        .name = "STATUS_REDIRECTOR_PAUSED",
        .value = 0xC00000D1UL,
        .description = "Print or disk redirection is temporarily paused.",
    },
    {
        .name = "STATUS_NET_WRITE_FAULT",
        .value = 0xC00000D2UL,
        .description = "A network data fault occurred.",
    },
    {
        .name = "STATUS_PROFILING_AT_LIMIT",
        .value = 0xC00000D3UL,
        .description = "The number of active profiling objects is at the maximum and no more can be started.",
    },
    {
        .name = "STATUS_NOT_SAME_DEVICE",
        .value = 0xC00000D4UL,
        .description = "{Incorrect Volume} The destination file of a rename request is located on a different device than the source of the rename request.",
    },
    {
        .name = "STATUS_FILE_RENAMED",
        .value = 0xC00000D5UL,
        .description = "The specified file has been renamed and thus cannot be modified.",
    },
    {
        .name = "STATUS_VIRTUAL_CIRCUIT_CLOSED",
        .value = 0xC00000D6UL,
        .description = "{Network Request Timeout} The session with a remote server has been disconnected because the time-out interval for a request has expired.",
    },
    {
        .name = "STATUS_NO_SECURITY_ON_OBJECT",
        .value = 0xC00000D7UL,
        .description = "Indicates an attempt was made to operate on the security of an object that does not have security associated with it.",
    },
    {
        .name = "STATUS_CANT_WAIT",
        .value = 0xC00000D8UL,
        .description = "Used to indicate that an operation cannot continue without blocking for I/O.",
    },
    {
        .name = "STATUS_PIPE_EMPTY",
        .value = 0xC00000D9UL,
        .description = "Used to indicate that a read operation was done on an empty pipe.",
    },
    {
        .name = "STATUS_CANT_ACCESS_DOMAIN_INFO",
        .value = 0xC00000DAUL,
        .description = "Configuration information could not be read from the domain controller, either because the machine is unavailable or access has been denied.",
    },
    {
        .name = "STATUS_CANT_TERMINATE_SELF",
        .value = 0xC00000DBUL,
        .description = "Indicates that a thread attempted to terminate itself by default (called NtTerminateThread with NULL) and it was the last thread in the current process.",
    },
    {
        .name = "STATUS_INVALID_SERVER_STATE",
        .value = 0xC00000DCUL,
        .description = "Indicates the Sam Server was in the wrong state to perform the desired operation.",
    },
    {
        .name = "STATUS_INVALID_DOMAIN_STATE",
        .value = 0xC00000DDUL,
        .description = "Indicates the domain was in the wrong state to perform the desired operation.",
    },
    {
        .name = "STATUS_INVALID_DOMAIN_ROLE",
        .value = 0xC00000DEUL,
        .description = "This operation is only allowed for the primary domain controller of the domain.",
    },
    {
        .name = "STATUS_NO_SUCH_DOMAIN",
        .value = 0xC00000DFUL,
        .description = "The specified domain did not exist.",
    },
    {
        .name = "STATUS_DOMAIN_EXISTS",
        .value = 0xC00000E0UL,
        .description = "The specified domain already exists.",
    },
    {
        .name = "STATUS_DOMAIN_LIMIT_EXCEEDED",
        .value = 0xC00000E1UL,
        .description = "An attempt was made to exceed the limit on the number of domains per server for this release.",
    },
    {
        .name = "STATUS_OPLOCK_NOT_GRANTED",
        .value = 0xC00000E2UL,
        .description = "An error status returned when the opportunistic lock (oplock) request is denied.",
    },
    {
        .name = "STATUS_INVALID_OPLOCK_PROTOCOL",
        .value = 0xC00000E3UL,
        .description = "An error status returned when an invalid opportunistic lock (oplock) acknowledgment is received by a file system.",
    },
    {
        .name = "STATUS_INTERNAL_DB_CORRUPTION",
        .value = 0xC00000E4UL,
        .description = "This error indicates that the requested operation cannot be completed due to a catastrophic media failure or an on-disk data structure corruption.",
    },
    {
        .name = "STATUS_INTERNAL_ERROR",
        .value = 0xC00000E5UL,
        .description = "An internal error occurred.",
    },
    {
        .name = "STATUS_GENERIC_NOT_MAPPED",
        .value = 0xC00000E6UL,
        .description = "Indicates generic access types were contained in an access mask which should already be mapped to non-generic access types.",
    },
    {
        .name = "STATUS_BAD_DESCRIPTOR_FORMAT",
        .value = 0xC00000E7UL,
        .description = "Indicates a security descriptor is not in the necessary format (absolute or self-relative).",
    },
    {
        .name = "STATUS_INVALID_USER_BUFFER",
        .value = 0xC00000E8UL,
        .description = "An access to a user buffer failed at an expected point in time. This code is defined because the caller does not want to accept STATUS_ACCESS_VIOLATION in its filter.",
    },
    {
        .name = "STATUS_UNEXPECTED_IO_ERROR",
        .value = 0xC00000E9UL,
        .description = "If an I/O error that is not defined in the standard FsRtl filter is returned, it is converted to the following error, which is guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.",
    },
    {
        .name = "STATUS_UNEXPECTED_MM_CREATE_ERR",
        .value = 0xC00000EAUL,
        .description = "If an MM error that is not defined in the standard FsRtl filter is returned, it is converted to one of the following errors, which are guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.",
    },
    {
        .name = "STATUS_UNEXPECTED_MM_MAP_ERROR",
        .value = 0xC00000EBUL,
        .description = "If an MM error that is not defined in the standard FsRtl filter is returned, it is converted to one of the following errors, which are guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.",
    },
    {
        .name = "STATUS_UNEXPECTED_MM_EXTEND_ERR",
        .value = 0xC00000ECUL,
        .description = "If an MM error that is not defined in the standard FsRtl filter is returned, it is converted to one of the following errors, which are guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.",
    },
    {
        .name = "STATUS_NOT_LOGON_PROCESS",
        .value = 0xC00000EDUL,
        .description = "The requested action is restricted for use by logon processes only. The calling process has not registered as a logon process.",
    },
    {
        .name = "STATUS_LOGON_SESSION_EXISTS",
        .value = 0xC00000EEUL,
        .description = "An attempt has been made to start a new session manager or LSA logon session by using an ID that is already in use.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_1",
        .value = 0xC00000EFUL,
        .description = "An invalid parameter was passed to a service or function as the first argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_2",
        .value = 0xC00000F0UL,
        .description = "An invalid parameter was passed to a service or function as the second argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_3",
        .value = 0xC00000F1UL,
        .description = "An invalid parameter was passed to a service or function as the third argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_4",
        .value = 0xC00000F2UL,
        .description = "An invalid parameter was passed to a service or function as the fourth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_5",
        .value = 0xC00000F3UL,
        .description = "An invalid parameter was passed to a service or function as the fifth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_6",
        .value = 0xC00000F4UL,
        .description = "An invalid parameter was passed to a service or function as the sixth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_7",
        .value = 0xC00000F5UL,
        .description = "An invalid parameter was passed to a service or function as the seventh argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_8",
        .value = 0xC00000F6UL,
        .description = "An invalid parameter was passed to a service or function as the eighth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_9",
        .value = 0xC00000F7UL,
        .description = "An invalid parameter was passed to a service or function as the ninth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_10",
        .value = 0xC00000F8UL,
        .description = "An invalid parameter was passed to a service or function as the tenth argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_11",
        .value = 0xC00000F9UL,
        .description = "An invalid parameter was passed to a service or function as the eleventh argument.",
    },
    {
        .name = "STATUS_INVALID_PARAMETER_12",
        .value = 0xC00000FAUL,
        .description = "An invalid parameter was passed to a service or function as the twelfth argument.",
    },
    {
        .name = "STATUS_REDIRECTOR_NOT_STARTED",
        .value = 0xC00000FBUL,
        .description = "An attempt was made to access a network file, but the network software was not yet started.",
    },
    {
        .name = "STATUS_REDIRECTOR_STARTED",
        .value = 0xC00000FCUL,
        .description = "An attempt was made to start the redirector, but the redirector has already been started.",
    },
    {
        .name = "STATUS_STACK_OVERFLOW",
        .value = 0xC00000FDUL,
        .description = "A new guard page for the stack cannot be created.",
    },
    {
        .name = "STATUS_NO_SUCH_PACKAGE",
        .value = 0xC00000FEUL,
        .description = "A specified authentication package is unknown.",
    },
    {
        .name = "STATUS_BAD_FUNCTION_TABLE",
        .value = 0xC00000FFUL,
        .description = "A malformed function table was encountered during an unwind operation.",
    },
    {
        .name = "STATUS_VARIABLE_NOT_FOUND",
        .value = 0xC0000100UL,
        .description = "Indicates the specified environment variable name was not found in the specified environment block.",
    },
    {
        .name = "STATUS_DIRECTORY_NOT_EMPTY",
        .value = 0xC0000101UL,
        .description = "Indicates that the directory trying to be deleted is not empty.",
    },
    {
        .name = "STATUS_FILE_CORRUPT_ERROR",
        .value = 0xC0000102UL,
        .description = "{Corrupt File} The file or directory %hs is corrupt and unreadable. Run the Chkdsk utility.",
    },
    {
        .name = "STATUS_NOT_A_DIRECTORY",
        .value = 0xC0000103UL,
        .description = "A requested opened file is not a directory.",
    },
    {
        .name = "STATUS_BAD_LOGON_SESSION_STATE",
        .value = 0xC0000104UL,
        .description = "The logon session is not in a state that is consistent with the requested operation.",
    },
    {
        .name = "STATUS_LOGON_SESSION_COLLISION",
        .value = 0xC0000105UL,
        .description = "An internal LSA error has occurred. An authentication package has requested the creation of a logon session but the ID of an already existing logon session has been specified.",
    },
    {
        .name = "STATUS_NAME_TOO_LONG",
        .value = 0xC0000106UL,
        .description = "A specified name string is too long for its intended use.",
    },
    {
        .name = "STATUS_FILES_OPEN",
        .value = 0xC0000107UL,
        .description = "The user attempted to force close the files on a redirected drive, but there were opened files on the drive, and the user did not specify a sufficient level of force.",
    },
    {
        .name = "STATUS_CONNECTION_IN_USE",
        .value = 0xC0000108UL,
        .description = "The user attempted to force close the files on a redirected drive, but there were opened directories on the drive, and the user did not specify a sufficient level of force.",
    },
    {
        .name = "STATUS_MESSAGE_NOT_FOUND",
        .value = 0xC0000109UL,
        .description = "RtlFindMessage could not locate the requested message ID in the message table resource.",
    },
    {
        .name = "STATUS_PROCESS_IS_TERMINATING",
        .value = 0xC000010AUL,
        .description = "An attempt was made to duplicate an object handle into or out of an exiting process.",
    },
    {
        .name = "STATUS_INVALID_LOGON_TYPE",
        .value = 0xC000010BUL,
        .description = "Indicates an invalid value has been provided for the LogonType requested.",
    },
    {
        .name = "STATUS_NO_GUID_TRANSLATION",
        .value = 0xC000010CUL,
        .description = "Indicates that an attempt was made to assign protection to a file system file or directory and one of the SIDs in the security descriptor could not be translated into a GUID that could be stored by the file system. This causes the protection attempt to fail, which might cause a file creation attempt to fail.",
    },
    {
        .name = "STATUS_CANNOT_IMPERSONATE",
        .value = 0xC000010DUL,
        .description = "Indicates that an attempt has been made to impersonate via a named pipe that has not yet been read from.",
    },
    {
        .name = "STATUS_IMAGE_ALREADY_LOADED",
        .value = 0xC000010EUL,
        .description = "Indicates that the specified image is already loaded.",
    },
    {
        .name = "STATUS_NO_LDT",
        .value = 0xC0000117UL,
        .description = "Indicates that an attempt was made to change the size of the LDT for a process that has no LDT.",
    },
    {
        .name = "STATUS_INVALID_LDT_SIZE",
        .value = 0xC0000118UL,
        .description = "Indicates that an attempt was made to grow an LDT by setting its size, or that the size was not an even number of selectors.",
    },
    {
        .name = "STATUS_INVALID_LDT_OFFSET",
        .value = 0xC0000119UL,
        .description = "Indicates that the starting value for the LDT information was not an integral multiple of the selector size.",
    },
    {
        .name = "STATUS_INVALID_LDT_DESCRIPTOR",
        .value = 0xC000011AUL,
        .description = "Indicates that the user supplied an invalid descriptor when trying to set up LDT descriptors.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_NE_FORMAT",
        .value = 0xC000011BUL,
        .description = "The specified image file did not have the correct format. It appears to be NE format.",
    },
    {
        .name = "STATUS_RXACT_INVALID_STATE",
        .value = 0xC000011CUL,
        .description = "Indicates that the transaction state of a registry subtree is incompatible with the requested operation. For example, a request has been made to start a new transaction with one already in progress, or a request has been made to apply a transaction when one is not currently in progress.",
    },
    {
        .name = "STATUS_RXACT_COMMIT_FAILURE",
        .value = 0xC000011DUL,
        .description = "Indicates an error has occurred during a registry transaction commit. The database has been left in an unknown, but probably inconsistent, state. The state of the registry transaction is left as COMMITTING.",
    },
    {
        .name = "STATUS_MAPPED_FILE_SIZE_ZERO",
        .value = 0xC000011EUL,
        .description = "An attempt was made to map a file of size zero with the maximum size specified as zero.",
    },
    {
        .name = "STATUS_TOO_MANY_OPENED_FILES",
        .value = 0xC000011FUL,
        .description = "Too many files are opened on a remote server. This error should only be returned by the Windows redirector on a remote drive.",
    },
    {
        .name = "STATUS_CANCELLED",
        .value = 0xC0000120UL,
        .description = "The I/O request was canceled.",
    },
    {
        .name = "STATUS_CANNOT_DELETE",
        .value = 0xC0000121UL,
        .description = "An attempt has been made to remove a file or directory that cannot be deleted.",
    },
    {
        .name = "STATUS_INVALID_COMPUTER_NAME",
        .value = 0xC0000122UL,
        .description = "Indicates a name that was specified as a remote computer name is syntactically invalid.",
    },
    {
        .name = "STATUS_FILE_DELETED",
        .value = 0xC0000123UL,
        .description = "An I/O request other than close was performed on a file after it was deleted, which can only happen to a request that did not complete before the last handle was closed via NtClose.",
    },
    {
        .name = "STATUS_SPECIAL_ACCOUNT",
        .value = 0xC0000124UL,
        .description = "Indicates an operation that is incompatible with built-in accounts has been attempted on a built-in (special) SAM account. For example, built-in accounts cannot be deleted.",
    },
    {
        .name = "STATUS_SPECIAL_GROUP",
        .value = 0xC0000125UL,
        .description = "The operation requested cannot be performed on the specified group because it is a built-in special group.",
    },
    {
        .name = "STATUS_SPECIAL_USER",
        .value = 0xC0000126UL,
        .description = "The operation requested cannot be performed on the specified user because it is a built-in special user.",
    },
    {
        .name = "STATUS_MEMBERS_PRIMARY_GROUP",
        .value = 0xC0000127UL,
        .description = "Indicates a member cannot be removed from a group because the group is currently the member's primary group.",
    },
    {
        .name = "STATUS_FILE_CLOSED",
        .value = 0xC0000128UL,
        .description = "An I/O request other than close and several other special case operations was attempted using a file object that had already been closed.",
    },
    {
        .name = "STATUS_TOO_MANY_THREADS",
        .value = 0xC0000129UL,
        .description = "Indicates a process has too many threads to perform the requested action. For example, assignment of a primary token can be performed only when a process has zero or one threads.",
    },
    {
        .name = "STATUS_THREAD_NOT_IN_PROCESS",
        .value = 0xC000012AUL,
        .description = "An attempt was made to operate on a thread within a specific process, but the specified thread is not in the specified process.",
    },
    {
        .name = "STATUS_TOKEN_ALREADY_IN_USE",
        .value = 0xC000012BUL,
        .description = "An attempt was made to establish a token for use as a primary token but the token is already in use. A token can only be the primary token of one process at a time.",
    },
    {
        .name = "STATUS_PAGEFILE_QUOTA_EXCEEDED",
        .value = 0xC000012CUL,
        .description = "The page file quota was exceeded.",
    },
    {
        .name = "STATUS_COMMITMENT_LIMIT",
        .value = 0xC000012DUL,
        .description = "{Out of Virtual Memory} Your system is low on virtual memory. To ensure that Windows runs correctly, increase the size of your virtual memory paging file. For more information, see Help.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_LE_FORMAT",
        .value = 0xC000012EUL,
        .description = "The specified image file did not have the correct format: it appears to be LE format.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_NOT_MZ",
        .value = 0xC000012FUL,
        .description = "The specified image file did not have the correct format: it did not have an initial MZ.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_PROTECT",
        .value = 0xC0000130UL,
        .description = "The specified image file did not have the correct format: it did not have a proper e_lfarlc in the MZ header.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_WIN_16",
        .value = 0xC0000131UL,
        .description = "The specified image file did not have the correct format: it appears to be a 16-bit Windows image.",
    },
    {
        .name = "STATUS_LOGON_SERVER_CONFLICT",
        .value = 0xC0000132UL,
        .description = "The Netlogon service cannot start because another Netlogon service running in the domain conflicts with the specified role.",
    },
    {
        .name = "STATUS_TIME_DIFFERENCE_AT_DC",
        .value = 0xC0000133UL,
        .description = "The time at the primary domain controller is different from the time at the backup domain controller or member server by too large an amount.",
    },
    {
        .name = "STATUS_SYNCHRONIZATION_REQUIRED",
        .value = 0xC0000134UL,
        .description = "On applicable Windows Server releases, the SAM database is significantly out of synchronization with the copy on the domain controller. A complete synchronization is required.",
    },
    {
        .name = "STATUS_DLL_NOT_FOUND",
        .value = 0xC0000135UL,
        .description = "{Unable To Locate Component} This application has failed to start because %hs was not found. Reinstalling the application might fix this problem.",
    },
    {
        .name = "STATUS_OPEN_FAILED",
        .value = 0xC0000136UL,
        .description = "The NtCreateFile API failed. This error should never be returned to an application; it is a place holder for the Windows LAN Manager Redirector to use in its internal error-mapping routines.",
    },
    {
        .name = "STATUS_IO_PRIVILEGE_FAILED",
        .value = 0xC0000137UL,
        .description = "{Privilege Failed} The I/O permissions for the process could not be changed.",
    },
    {
        .name = "STATUS_ORDINAL_NOT_FOUND",
        .value = 0xC0000138UL,
        .description = "{Ordinal Not Found} The ordinal %ld could not be located in the dynamic link library %hs.",
    },
    {
        .name = "STATUS_ENTRYPOINT_NOT_FOUND",
        .value = 0xC0000139UL,
        .description = "{Entry Point Not Found} The procedure entry point %hs could not be located in the dynamic link library %hs.",
    },
    {
        .name = "STATUS_CONTROL_C_EXIT",
        .value = 0xC000013AUL,
        .description = "{Application Exit by CTRL+C} The application terminated as a result of a CTRL+C.",
    },
    {
        .name = "STATUS_LOCAL_DISCONNECT",
        .value = 0xC000013BUL,
        .description = "{Virtual Circuit Closed} The network transport on your computer has closed a network connection. There might or might not be I/O requests outstanding.",
    },
    {
        .name = "STATUS_REMOTE_DISCONNECT",
        .value = 0xC000013CUL,
        .description = "{Virtual Circuit Closed} The network transport on a remote computer has closed a network connection. There might or might not be I/O requests outstanding.",
    },
    {
        .name = "STATUS_REMOTE_RESOURCES",
        .value = 0xC000013DUL,
        .description = "{Insufficient Resources on Remote Computer} The remote computer has insufficient resources to complete the network request. For example, the remote computer might not have enough available memory to carry out the request at this time.",
    },
    {
        .name = "STATUS_LINK_FAILED",
        .value = 0xC000013EUL,
        .description = "{Virtual Circuit Closed} An existing connection (virtual circuit) has been broken at the remote computer. There is probably something wrong with the network software protocol or the network hardware on the remote computer.",
    },
    {
        .name = "STATUS_LINK_TIMEOUT",
        .value = 0xC000013FUL,
        .description = "{Virtual Circuit Closed} The network transport on your computer has closed a network connection because it had to wait too long for a response from the remote computer.",
    },
    {
        .name = "STATUS_INVALID_CONNECTION",
        .value = 0xC0000140UL,
        .description = "The connection handle that was given to the transport was invalid.",
    },
    {
        .name = "STATUS_INVALID_ADDRESS",
        .value = 0xC0000141UL,
        .description = "The address handle that was given to the transport was invalid.",
    },
    {
        .name = "STATUS_DLL_INIT_FAILED",
        .value = 0xC0000142UL,
        .description = "{DLL Initialization Failed} Initialization of the dynamic link library %hs failed. The process is terminating abnormally.",
    },
    {
        .name = "STATUS_MISSING_SYSTEMFILE",
        .value = 0xC0000143UL,
        .description = "{Missing System File} The required system file %hs is bad or missing.",
    },
    {
        .name = "STATUS_UNHANDLED_EXCEPTION",
        .value = 0xC0000144UL,
        .description = "{Application Error} The exception %s (0x%08lx) occurred in the application at location 0x%08lx.",
    },
    {
        .name = "STATUS_APP_INIT_FAILURE",
        .value = 0xC0000145UL,
        .description = "{Application Error} The application failed to initialize properly (0x%lx). Click OK to terminate the application.",
    },
    {
        .name = "STATUS_PAGEFILE_CREATE_FAILED",
        .value = 0xC0000146UL,
        .description = "{Unable to Create Paging File} The creation of the paging file %hs failed (%lx). The requested size was %ld.",
    },
    {
        .name = "STATUS_NO_PAGEFILE",
        .value = 0xC0000147UL,
        .description = "{No Paging File Specified} No paging file was specified in the system configuration.",
    },
    {
        .name = "STATUS_INVALID_LEVEL",
        .value = 0xC0000148UL,
        .description = "{Incorrect System Call Level} An invalid level was passed into the specified system call.",
    },
    {
        .name = "STATUS_WRONG_PASSWORD_CORE",
        .value = 0xC0000149UL,
        .description = "{Incorrect Password to LAN Manager Server} You specified an incorrect password to a LAN Manager 2.x or MS-NET server.",
    },
    {
        .name = "STATUS_ILLEGAL_FLOAT_CONTEXT",
        .value = 0xC000014AUL,
        .description = "{EXCEPTION} A real-mode application issued a floating-point instruction and floating-point hardware is not present.",
    },
    {
        .name = "STATUS_PIPE_BROKEN",
        .value = 0xC000014BUL,
        .description = "The pipe operation has failed because the other end of the pipe has been closed.",
    },
    {
        .name = "STATUS_REGISTRY_CORRUPT",
        .value = 0xC000014CUL,
        .description = "{The Registry Is Corrupt} The structure of one of the files that contains registry data is corrupt; the image of the file in memory is corrupt; or the file could not be recovered because the alternate copy or log was absent or corrupt.",
    },
    {
        .name = "STATUS_REGISTRY_IO_FAILED",
        .value = 0xC000014DUL,
        .description = "An I/O operation initiated by the Registry failed and cannot be recovered. The registry could not read in, write out, or flush one of the files that contain the system's image of the registry.",
    },
    {
        .name = "STATUS_NO_EVENT_PAIR",
        .value = 0xC000014EUL,
        .description = "An event pair synchronization operation was performed using the thread-specific client/server event pair object, but no event pair object was associated with the thread.",
    },
    {
        .name = "STATUS_UNRECOGNIZED_VOLUME",
        .value = 0xC000014FUL,
        .description = "The volume does not contain a recognized file system. Be sure that all required file system drivers are loaded and that the volume is not corrupt.",
    },
    {
        .name = "STATUS_SERIAL_NO_DEVICE_INITED",
        .value = 0xC0000150UL,
        .description = "No serial device was successfully initialized. The serial driver will unload.",
    },
    {
        .name = "STATUS_NO_SUCH_ALIAS",
        .value = 0xC0000151UL,
        .description = "The specified local group does not exist.",
    },
    {
        .name = "STATUS_MEMBER_NOT_IN_ALIAS",
        .value = 0xC0000152UL,
        .description = "The specified account name is not a member of the group.",
    },
    {
        .name = "STATUS_MEMBER_IN_ALIAS",
        .value = 0xC0000153UL,
        .description = "The specified account name is already a member of the group.",
    },
    {
        .name = "STATUS_ALIAS_EXISTS",
        .value = 0xC0000154UL,
        .description = "The specified local group already exists.",
    },
    {
        .name = "STATUS_LOGON_NOT_GRANTED",
        .value = 0xC0000155UL,
        .description = "A requested type of logon (for example, interactive, network, and service) is not granted by the local security policy of the target system. Ask the system administrator to grant the necessary form of logon.",
    },
    {
        .name = "STATUS_TOO_MANY_SECRETS",
        .value = 0xC0000156UL,
        .description = "The maximum number of secrets that can be stored in a single system was exceeded. The length and number of secrets is limited to satisfy U.S. State Department export restrictions.",
    },
    {
        .name = "STATUS_SECRET_TOO_LONG",
        .value = 0xC0000157UL,
        .description = "The length of a secret exceeds the maximum allowable length. The length and number of secrets is limited to satisfy U.S. State Department export restrictions.",
    },
    {
        .name = "STATUS_INTERNAL_DB_ERROR",
        .value = 0xC0000158UL,
        .description = "The local security authority (LSA) database contains an internal inconsistency.",
    },
    {
        .name = "STATUS_FULLSCREEN_MODE",
        .value = 0xC0000159UL,
        .description = "The requested operation cannot be performed in full-screen mode.",
    },
    {
        .name = "STATUS_TOO_MANY_CONTEXT_IDS",
        .value = 0xC000015AUL,
        .description = "During a logon attempt, the user's security context accumulated too many security IDs. This is a very unusual situation. Remove the user from some global or local groups to reduce the number of security IDs to incorporate into the security context.",
    },
    {
        .name = "STATUS_LOGON_TYPE_NOT_GRANTED",
        .value = 0xC000015BUL,
        .description = "A user has requested a type of logon (for example, interactive or network) that has not been granted. An administrator has control over who can logon interactively and through the network.",
    },
    {
        .name = "STATUS_NOT_REGISTRY_FILE",
        .value = 0xC000015CUL,
        .description = "The system has attempted to load or restore a file into the registry, and the specified file is not in the format of a registry file.",
    },
    {
        .name = "STATUS_NT_CROSS_ENCRYPTION_REQUIRED",
        .value = 0xC000015DUL,
        .description = "An attempt was made to change a user password in the security account manager without providing the necessary Windows cross-encrypted password.",
    },
    {
        .name = "STATUS_DOMAIN_CTRLR_CONFIG_ERROR",
        .value = 0xC000015EUL,
        .description = "A domain server has an incorrect configuration.",
    },
    {
        .name = "STATUS_FT_MISSING_MEMBER",
        .value = 0xC000015FUL,
        .description = "An attempt was made to explicitly access the secondary copy of information via a device control to the fault tolerance driver and the secondary copy is not present in the system.",
    },
    {
        .name = "STATUS_ILL_FORMED_SERVICE_ENTRY",
        .value = 0xC0000160UL,
        .description = "A configuration registry node that represents a driver service entry was ill-formed and did not contain the required value entries.",
    },
    {
        .name = "STATUS_ILLEGAL_CHARACTER",
        .value = 0xC0000161UL,
        .description = "An illegal character was encountered. For a multibyte character set, this includes a lead byte without a succeeding trail byte. For the Unicode character set this includes the characters 0xFFFF and 0xFFFE.",
    },
    {
        .name = "STATUS_UNMAPPABLE_CHARACTER",
        .value = 0xC0000162UL,
        .description = "No mapping for the Unicode character exists in the target multibyte code page.",
    },
    {
        .name = "STATUS_UNDEFINED_CHARACTER",
        .value = 0xC0000163UL,
        .description = "The Unicode character is not defined in the Unicode character set that is installed on the system.",
    },
    {
        .name = "STATUS_FLOPPY_VOLUME",
        .value = 0xC0000164UL,
        .description = "The paging file cannot be created on a floppy disk.",
    },
    {
        .name = "STATUS_FLOPPY_ID_MARK_NOT_FOUND",
        .value = 0xC0000165UL,
        .description = "{Floppy Disk Error} While accessing a floppy disk, an ID address mark was not found.",
    },
    {
        .name = "STATUS_FLOPPY_WRONG_CYLINDER",
        .value = 0xC0000166UL,
        .description = "{Floppy Disk Error} While accessing a floppy disk, the track address from the sector ID field was found to be different from the track address that is maintained by the controller.",
    },
    {
        .name = "STATUS_FLOPPY_UNKNOWN_ERROR",
        .value = 0xC0000167UL,
        .description = "{Floppy Disk Error} The floppy disk controller reported an error that is not recognized by the floppy disk driver.",
    },
    {
        .name = "STATUS_FLOPPY_BAD_REGISTERS",
        .value = 0xC0000168UL,
        .description = "{Floppy Disk Error} While accessing a floppy-disk, the controller returned inconsistent results via its registers.",
    },
    {
        .name = "STATUS_DISK_RECALIBRATE_FAILED",
        .value = 0xC0000169UL,
        .description = "{Hard Disk Error} While accessing the hard disk, a recalibrate operation failed, even after retries.",
    },
    {
        .name = "STATUS_DISK_OPERATION_FAILED",
        .value = 0xC000016AUL,
        .description = "{Hard Disk Error} While accessing the hard disk, a disk operation failed even after retries.",
    },
    {
        .name = "STATUS_DISK_RESET_FAILED",
        .value = 0xC000016BUL,
        .description = "{Hard Disk Error} While accessing the hard disk, a disk controller reset was needed, but even that failed.",
    },
    {
        .name = "STATUS_SHARED_IRQ_BUSY",
        .value = 0xC000016CUL,
        .description = "An attempt was made to open a device that was sharing an interrupt request (IRQ) with other devices. At least one other device that uses that IRQ was already opened. Two concurrent opens of devices that share an IRQ and only work via interrupts is not supported for the particular bus type that the devices use.",
    },
    {
        .name = "STATUS_FT_ORPHANING",
        .value = 0xC000016DUL,
        .description = "{FT Orphaning} A disk that is part of a fault-tolerant volume can no longer be accessed.",
    },
    {
        .name = "STATUS_BIOS_FAILED_TO_CONNECT_INTERRUPT",
        .value = 0xC000016EUL,
        .description = "The basic input/output system (BIOS) failed to connect a system interrupt to the device or bus for which the device is connected.",
    },
    {
        .name = "STATUS_PARTITION_FAILURE",
        .value = 0xC0000172UL,
        .description = "The tape could not be partitioned.",
    },
    {
        .name = "STATUS_INVALID_BLOCK_LENGTH",
        .value = 0xC0000173UL,
        .description = "When accessing a new tape of a multi-volume partition, the current blocksize is incorrect.",
    },
    {
        .name = "STATUS_DEVICE_NOT_PARTITIONED",
        .value = 0xC0000174UL,
        .description = "The tape partition information could not be found when loading a tape.",
    },
    {
        .name = "STATUS_UNABLE_TO_LOCK_MEDIA",
        .value = 0xC0000175UL,
        .description = "An attempt to lock the eject media mechanism failed.",
    },
    {
        .name = "STATUS_UNABLE_TO_UNLOAD_MEDIA",
        .value = 0xC0000176UL,
        .description = "An attempt to unload media failed.",
    },
    {
        .name = "STATUS_EOM_OVERFLOW",
        .value = 0xC0000177UL,
        .description = "The physical end of tape was detected.",
    },
    {
        .name = "STATUS_NO_MEDIA",
        .value = 0xC0000178UL,
        .description = "{No Media} There is no media in the drive. Insert media into drive %hs.",
    },
    {
        .name = "STATUS_NO_SUCH_MEMBER",
        .value = 0xC000017AUL,
        .description = "A member could not be added to or removed from the local group because the member does not exist.",
    },
    {
        .name = "STATUS_INVALID_MEMBER",
        .value = 0xC000017BUL,
        .description = "A new member could not be added to a local group because the member has the wrong account type.",
    },
    {
        .name = "STATUS_KEY_DELETED",
        .value = 0xC000017CUL,
        .description = "An illegal operation was attempted on a registry key that has been marked for deletion.",
    },
    {
        .name = "STATUS_NO_LOG_SPACE",
        .value = 0xC000017DUL,
        .description = "The system could not allocate the required space in a registry log.",
    },
    {
        .name = "STATUS_TOO_MANY_SIDS",
        .value = 0xC000017EUL,
        .description = "Too many SIDs have been specified.",
    },
    {
        .name = "STATUS_LM_CROSS_ENCRYPTION_REQUIRED",
        .value = 0xC000017FUL,
        .description = "An attempt was made to change a user password in the security account manager without providing the necessary LM cross-encrypted password.",
    },
    {
        .name = "STATUS_KEY_HAS_CHILDREN",
        .value = 0xC0000180UL,
        .description = "An attempt was made to create a symbolic link in a registry key that already has subkeys or values.",
    },
    {
        .name = "STATUS_CHILD_MUST_BE_VOLATILE",
        .value = 0xC0000181UL,
        .description = "An attempt was made to create a stable subkey under a volatile parent key.",
    },
    {
        .name = "STATUS_DEVICE_CONFIGURATION_ERROR",
        .value = 0xC0000182UL,
        .description = "The I/O device is configured incorrectly or the configuration parameters to the driver are incorrect.",
    },
    {
        .name = "STATUS_DRIVER_INTERNAL_ERROR",
        .value = 0xC0000183UL,
        .description = "An error was detected between two drivers or within an I/O driver.",
    },
    {
        .name = "STATUS_INVALID_DEVICE_STATE",
        .value = 0xC0000184UL,
        .description = "The device is not in a valid state to perform this request.",
    },
    {
        .name = "STATUS_IO_DEVICE_ERROR",
        .value = 0xC0000185UL,
        .description = "The I/O device reported an I/O error.",
    },
    {
        .name = "STATUS_DEVICE_PROTOCOL_ERROR",
        .value = 0xC0000186UL,
        .description = "A protocol error was detected between the driver and the device.",
    },
    {
        .name = "STATUS_BACKUP_CONTROLLER",
        .value = 0xC0000187UL,
        .description = "This operation is only allowed for the primary domain controller of the domain.",
    },
    {
        .name = "STATUS_LOG_FILE_FULL",
        .value = 0xC0000188UL,
        .description = "The log file space is insufficient to support this operation.",
    },
    {
        .name = "STATUS_TOO_LATE",
        .value = 0xC0000189UL,
        .description = "A write operation was attempted to a volume after it was dismounted.",
    },
    {
        .name = "STATUS_NO_TRUST_LSA_SECRET",
        .value = 0xC000018AUL,
        .description = "The workstation does not have a trust secret for the primary domain in the local LSA database.",
    },
    {
        .name = "STATUS_NO_TRUST_SAM_ACCOUNT",
        .value = 0xC000018BUL,
        .description = "On applicable Windows Server releases, the SAM database does not have a computer account for this workstation trust relationship.",
    },
    {
        .name = "STATUS_TRUSTED_DOMAIN_FAILURE",
        .value = 0xC000018CUL,
        .description = "The logon request failed because the trust relationship between the primary domain and the trusted domain failed.",
    },
    {
        .name = "STATUS_TRUSTED_RELATIONSHIP_FAILURE",
        .value = 0xC000018DUL,
        .description = "The logon request failed because the trust relationship between this workstation and the primary domain failed.",
    },
    {
        .name = "STATUS_EVENTLOG_FILE_CORRUPT",
        .value = 0xC000018EUL,
        .description = "The Eventlog log file is corrupt.",
    },
    {
        .name = "STATUS_EVENTLOG_CANT_START",
        .value = 0xC000018FUL,
        .description = "No Eventlog log file could be opened. The Eventlog service did not start.",
    },
    {
        .name = "STATUS_TRUST_FAILURE",
        .value = 0xC0000190UL,
        .description = "The network logon failed. This might be because the validation authority cannot be reached.",
    },
    {
        .name = "STATUS_MUTANT_LIMIT_EXCEEDED",
        .value = 0xC0000191UL,
        .description = "An attempt was made to acquire a mutant such that its maximum count would have been exceeded.",
    },
    {
        .name = "STATUS_NETLOGON_NOT_STARTED",
        .value = 0xC0000192UL,
        .description = "An attempt was made to logon, but the NetLogon service was not started.",
    },
    {
        .name = "STATUS_ACCOUNT_EXPIRED",
        .value = 0xC0000193UL,
        .description = "The user account has expired.",
    },
    {
        .name = "STATUS_POSSIBLE_DEADLOCK",
        .value = 0xC0000194UL,
        .description = "{EXCEPTION} Possible deadlock condition.",
    },
    {
        .name = "STATUS_NETWORK_CREDENTIAL_CONFLICT",
        .value = 0xC0000195UL,
        .description = "Multiple connections to a server or shared resource by the same user, using more than one user name, are not allowed. Disconnect all previous connections to the server or shared resource and try again.",
    },
    {
        .name = "STATUS_REMOTE_SESSION_LIMIT",
        .value = 0xC0000196UL,
        .description = "An attempt was made to establish a session to a network server, but there are already too many sessions established to that server.",
    },
    {
        .name = "STATUS_EVENTLOG_FILE_CHANGED",
        .value = 0xC0000197UL,
        .description = "The log file has changed between reads.",
    },
    {
        .name = "STATUS_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT",
        .value = 0xC0000198UL,
        .description = "The account used is an interdomain trust account. Use your global user account or local user account to access this server.",
    },
    {
        .name = "STATUS_NOLOGON_WORKSTATION_TRUST_ACCOUNT",
        .value = 0xC0000199UL,
        .description = "The account used is a computer account. Use your global user account or local user account to access this server.",
    },
    {
        .name = "STATUS_NOLOGON_SERVER_TRUST_ACCOUNT",
        .value = 0xC000019AUL,
        .description = "The account used is a server trust account. Use your global user account or local user account to access this server.",
    },
    {
        .name = "STATUS_DOMAIN_TRUST_INCONSISTENT",
        .value = 0xC000019BUL,
        .description = "The name or SID of the specified domain is inconsistent with the trust information for that domain.",
    },
    {
        .name = "STATUS_FS_DRIVER_REQUIRED",
        .value = 0xC000019CUL,
        .description = "A volume has been accessed for which a file system driver is required that has not yet been loaded.",
    },
    {
        .name = "STATUS_IMAGE_ALREADY_LOADED_AS_DLL",
        .value = 0xC000019DUL,
        .description = "Indicates that the specified image is already loaded as a DLL.",
    },
    {
        .name = "STATUS_INCOMPATIBLE_WITH_GLOBAL_SHORT_NAME_REGISTRY_SETTING",
        .value = 0xC000019EUL,
        .description = "Short name settings cannot be changed on this volume due to the global registry setting.",
    },
    {
        .name = "STATUS_SHORT_NAMES_NOT_ENABLED_ON_VOLUME",
        .value = 0xC000019FUL,
        .description = "Short names are not enabled on this volume.",
    },
    {
        .name = "STATUS_SECURITY_STREAM_IS_INCONSISTENT",
        .value = 0xC00001A0UL,
        .description = "The security stream for the given volume is in an inconsistent state. Please run CHKDSK on the volume.",
    },
    {
        .name = "STATUS_INVALID_LOCK_RANGE",
        .value = 0xC00001A1UL,
        .description = "A requested file lock operation cannot be processed due to an invalid byte range.",
    },
    {
        .name = "STATUS_INVALID_ACE_CONDITION",
        .value = 0xC00001A2UL,
        .description = "The specified access control entry (ACE) contains an invalid condition.",
    },
    {
        .name = "STATUS_IMAGE_SUBSYSTEM_NOT_PRESENT",
        .value = 0xC00001A3UL,
        .description = "The subsystem needed to support the image type is not present.",
    },
    {
        .name = "STATUS_NOTIFICATION_GUID_ALREADY_DEFINED",
        .value = 0xC00001A4UL,
        .description = "The specified file already has a notification GUID associated with it.",
    },
    {
        .name = "STATUS_NETWORK_OPEN_RESTRICTION",
        .value = 0xC0000201UL,
        .description = "A remote open failed because the network open restrictions were not satisfied.",
    },
    {
        .name = "STATUS_NO_USER_SESSION_KEY",
        .value = 0xC0000202UL,
        .description = "There is no user session key for the specified logon session.",
    },
    {
        .name = "STATUS_USER_SESSION_DELETED",
        .value = 0xC0000203UL,
        .description = "The remote user session has been deleted.",
    },
    {
        .name = "STATUS_RESOURCE_LANG_NOT_FOUND",
        .value = 0xC0000204UL,
        .description = "Indicates the specified resource language ID cannot be found in the image file.",
    },
    {
        .name = "STATUS_INSUFF_SERVER_RESOURCES",
        .value = 0xC0000205UL,
        .description = "Insufficient server resources exist to complete the request.",
    },
    {
        .name = "STATUS_INVALID_BUFFER_SIZE",
        .value = 0xC0000206UL,
        .description = "The size of the buffer is invalid for the specified operation.",
    },
    {
        .name = "STATUS_INVALID_ADDRESS_COMPONENT",
        .value = 0xC0000207UL,
        .description = "The transport rejected the specified network address as invalid.",
    },
    {
        .name = "STATUS_INVALID_ADDRESS_WILDCARD",
        .value = 0xC0000208UL,
        .description = "The transport rejected the specified network address due to invalid use of a wildcard.",
    },
    {
        .name = "STATUS_TOO_MANY_ADDRESSES",
        .value = 0xC0000209UL,
        .description = "The transport address could not be opened because all the available addresses are in use.",
    },
    {
        .name = "STATUS_ADDRESS_ALREADY_EXISTS",
        .value = 0xC000020AUL,
        .description = "The transport address could not be opened because it already exists.",
    },
    {
        .name = "STATUS_ADDRESS_CLOSED",
        .value = 0xC000020BUL,
        .description = "The transport address is now closed.",
    },
    {
        .name = "STATUS_CONNECTION_DISCONNECTED",
        .value = 0xC000020CUL,
        .description = "The transport connection is now disconnected.",
    },
    {
        .name = "STATUS_CONNECTION_RESET",
        .value = 0xC000020DUL,
        .description = "The transport connection has been reset.",
    },
    {
        .name = "STATUS_TOO_MANY_NODES",
        .value = 0xC000020EUL,
        .description = "The transport cannot dynamically acquire any more nodes.",
    },
    {
        .name = "STATUS_TRANSACTION_ABORTED",
        .value = 0xC000020FUL,
        .description = "The transport aborted a pending transaction.",
    },
    {
        .name = "STATUS_TRANSACTION_TIMED_OUT",
        .value = 0xC0000210UL,
        .description = "The transport timed out a request that is waiting for a response.",
    },
    {
        .name = "STATUS_TRANSACTION_NO_RELEASE",
        .value = 0xC0000211UL,
        .description = "The transport did not receive a release for a pending response.",
    },
    {
        .name = "STATUS_TRANSACTION_NO_MATCH",
        .value = 0xC0000212UL,
        .description = "The transport did not find a transaction that matches the specific token.",
    },
    {
        .name = "STATUS_TRANSACTION_RESPONDED",
        .value = 0xC0000213UL,
        .description = "The transport had previously responded to a transaction request.",
    },
    {
        .name = "STATUS_TRANSACTION_INVALID_ID",
        .value = 0xC0000214UL,
        .description = "The transport does not recognize the specified transaction request ID.",
    },
    {
        .name = "STATUS_TRANSACTION_INVALID_TYPE",
        .value = 0xC0000215UL,
        .description = "The transport does not recognize the specified transaction request type.",
    },
    {
        .name = "STATUS_NOT_SERVER_SESSION",
        .value = 0xC0000216UL,
        .description = "The transport can only process the specified request on the server side of a session.",
    },
    {
        .name = "STATUS_NOT_CLIENT_SESSION",
        .value = 0xC0000217UL,
        .description = "The transport can only process the specified request on the client side of a session.",
    },
    {
        .name = "STATUS_CANNOT_LOAD_REGISTRY_FILE",
        .value = 0xC0000218UL,
        .description = "{Registry File Failure} The registry cannot load the hive (file): %hs or its log or alternate. It is corrupt, absent, or not writable.",
    },
    {
        .name = "STATUS_DEBUG_ATTACH_FAILED",
        .value = 0xC0000219UL,
        .description = "{Unexpected Failure in DebugActiveProcess} An unexpected failure occurred while processing a DebugActiveProcess API request. Choosing OK will terminate the process, and choosing Cancel will ignore the error.",
    },
    {
        .name = "STATUS_SYSTEM_PROCESS_TERMINATED",
        .value = 0xC000021AUL,
        .description = "{Fatal System Error} The %hs system process terminated unexpectedly with a status of 0x%08x (0x%08x 0x%08x). The system has been shut down.",
    },
    {
        .name = "STATUS_DATA_NOT_ACCEPTED",
        .value = 0xC000021BUL,
        .description = "{Data Not Accepted} The TDI client could not handle the data received during an indication.",
    },
    {
        .name = "STATUS_NO_BROWSER_SERVERS_FOUND",
        .value = 0xC000021CUL,
        .description = "{Unable to Retrieve Browser Server List} The list of servers for this workgroup is not currently available.",
    },
    {
        .name = "STATUS_VDM_HARD_ERROR",
        .value = 0xC000021DUL,
        .description = "NTVDM encountered a hard error.",
    },
    {
        .name = "STATUS_DRIVER_CANCEL_TIMEOUT",
        .value = 0xC000021EUL,
        .description = "{Cancel Timeout} The driver %hs failed to complete a canceled I/O request in the allotted time.",
    },
    {
        .name = "STATUS_REPLY_MESSAGE_MISMATCH",
        .value = 0xC000021FUL,
        .description = "{Reply Message Mismatch} An attempt was made to reply to an LPC message, but the thread specified by the client ID in the message was not waiting on that message.",
    },
    {
        .name = "STATUS_MAPPED_ALIGNMENT",
        .value = 0xC0000220UL,
        .description = "{Mapped View Alignment Incorrect} An attempt was made to map a view of a file, but either the specified base address or the offset into the file were not aligned on the proper allocation granularity.",
    },
    {
        .name = "STATUS_IMAGE_CHECKSUM_MISMATCH",
        .value = 0xC0000221UL,
        .description = "{Bad Image Checksum} The image %hs is possibly corrupt. The header checksum does not match the computed checksum.",
    },
    {
        .name = "STATUS_LOST_WRITEBEHIND_DATA",
        .value = 0xC0000222UL,
        .description = "{Delayed Write Failed} Windows was unable to save all the data for the file %hs. The data has been lost. This error might be caused by a failure of your computer hardware or network connection. Try to save this file elsewhere.",
    },
    {
        .name = "STATUS_CLIENT_SERVER_PARAMETERS_INVALID",
        .value = 0xC0000223UL,
        .description = "The parameters passed to the server in the client/server shared memory window were invalid. Too much data might have been put in the shared memory window.",
    },
    {
        .name = "STATUS_PASSWORD_MUST_CHANGE",
        .value = 0xC0000224UL,
        .description = "The user password must be changed before logging on the first time.",
    },
    {
        .name = "STATUS_NOT_FOUND",
        .value = 0xC0000225UL,
        .description = "The object was not found.",
    },
    {
        .name = "STATUS_NOT_TINY_STREAM",
        .value = 0xC0000226UL,
        .description = "The stream is not a tiny stream.",
    },
    {
        .name = "STATUS_RECOVERY_FAILURE",
        .value = 0xC0000227UL,
        .description = "A transaction recovery failed.",
    },
    {
        .name = "STATUS_STACK_OVERFLOW_READ",
        .value = 0xC0000228UL,
        .description = "The request must be handled by the stack overflow code.",
    },
    {
        .name = "STATUS_FAIL_CHECK",
        .value = 0xC0000229UL,
        .description = "A consistency check failed.",
    },
    {
        .name = "STATUS_DUPLICATE_OBJECTID",
        .value = 0xC000022AUL,
        .description = "The attempt to insert the ID in the index failed because the ID is already in the index.",
    },
    {
        .name = "STATUS_OBJECTID_EXISTS",
        .value = 0xC000022BUL,
        .description = "The attempt to set the object ID failed because the object already has an ID.",
    },
    {
        .name = "STATUS_CONVERT_TO_LARGE",
        .value = 0xC000022CUL,
        .description = "Internal OFS status codes indicating how an allocation operation is handled. Either it is retried after the containing oNode is moved or the extent stream is converted to a large stream.",
    },
    {
        .name = "STATUS_RETRY",
        .value = 0xC000022DUL,
        .description = "The request needs to be retried.",
    },
    {
        .name = "STATUS_FOUND_OUT_OF_SCOPE",
        .value = 0xC000022EUL,
        .description = "The attempt to find the object found an object on the volume that matches by ID; however, it is out of the scope of the handle that is used for the operation.",
    },
    {
        .name = "STATUS_ALLOCATE_BUCKET",
        .value = 0xC000022FUL,
        .description = "The bucket array must be grown. Retry the transaction after doing so.",
    },
    {
        .name = "STATUS_PROPSET_NOT_FOUND",
        .value = 0xC0000230UL,
        .description = "The specified property set does not exist on the object.",
    },
    {
        .name = "STATUS_MARSHALL_OVERFLOW",
        .value = 0xC0000231UL,
        .description = "The user/kernel marshaling buffer has overflowed.",
    },
    {
        .name = "STATUS_INVALID_VARIANT",
        .value = 0xC0000232UL,
        .description = "The supplied variant structure contains invalid data.",
    },
    {
        .name = "STATUS_DOMAIN_CONTROLLER_NOT_FOUND",
        .value = 0xC0000233UL,
        .description = "A domain controller for this domain was not found.",
    },
    {
        .name = "STATUS_ACCOUNT_LOCKED_OUT",
        .value = 0xC0000234UL,
        .description = "The user account has been automatically locked because too many invalid logon attempts or password change attempts have been requested.",
    },
    {
        .name = "STATUS_HANDLE_NOT_CLOSABLE",
        .value = 0xC0000235UL,
        .description = "NtClose was called on a handle that was protected from close via NtSetInformationObject.",
    },
    {
        .name = "STATUS_CONNECTION_REFUSED",
        .value = 0xC0000236UL,
        .description = "The transport-connection attempt was refused by the remote system.",
    },
    {
        .name = "STATUS_GRACEFUL_DISCONNECT",
        .value = 0xC0000237UL,
        .description = "The transport connection was gracefully closed.",
    },
    {
        .name = "STATUS_ADDRESS_ALREADY_ASSOCIATED",
        .value = 0xC0000238UL,
        .description = "The transport endpoint already has an address associated with it.",
    },
    {
        .name = "STATUS_ADDRESS_NOT_ASSOCIATED",
        .value = 0xC0000239UL,
        .description = "An address has not yet been associated with the transport endpoint.",
    },
    {
        .name = "STATUS_CONNECTION_INVALID",
        .value = 0xC000023AUL,
        .description = "An operation was attempted on a nonexistent transport connection.",
    },
    {
        .name = "STATUS_CONNECTION_ACTIVE",
        .value = 0xC000023BUL,
        .description = "An invalid operation was attempted on an active transport connection.",
    },
    {
        .name = "STATUS_NETWORK_UNREACHABLE",
        .value = 0xC000023CUL,
        .description = "The remote network is not reachable by the transport.",
    },
    {
        .name = "STATUS_HOST_UNREACHABLE",
        .value = 0xC000023DUL,
        .description = "The remote system is not reachable by the transport.",
    },
    {
        .name = "STATUS_PROTOCOL_UNREACHABLE",
        .value = 0xC000023EUL,
        .description = "The remote system does not support the transport protocol.",
    },
    {
        .name = "STATUS_PORT_UNREACHABLE",
        .value = 0xC000023FUL,
        .description = "No service is operating at the destination port of the transport on the remote system.",
    },
    {
        .name = "STATUS_REQUEST_ABORTED",
        .value = 0xC0000240UL,
        .description = "The request was aborted.",
    },
    {
        .name = "STATUS_CONNECTION_ABORTED",
        .value = 0xC0000241UL,
        .description = "The transport connection was aborted by the local system.",
    },
    {
        .name = "STATUS_BAD_COMPRESSION_BUFFER",
        .value = 0xC0000242UL,
        .description = "The specified buffer contains ill-formed data.",
    },
    {
        .name = "STATUS_USER_MAPPED_FILE",
        .value = 0xC0000243UL,
        .description = "The requested operation cannot be performed on a file with a user mapped section open.",
    },
    {
        .name = "STATUS_AUDIT_FAILED",
        .value = 0xC0000244UL,
        .description = "{Audit Failed} An attempt to generate a security audit failed.",
    },
    {
        .name = "STATUS_TIMER_RESOLUTION_NOT_SET",
        .value = 0xC0000245UL,
        .description = "The timer resolution was not previously set by the current process.",
    },
    {
        .name = "STATUS_CONNECTION_COUNT_LIMIT",
        .value = 0xC0000246UL,
        .description = "A connection to the server could not be made because the limit on the number of concurrent connections for this account has been reached.",
    },
    {
        .name = "STATUS_LOGIN_TIME_RESTRICTION",
        .value = 0xC0000247UL,
        .description = "Attempting to log on during an unauthorized time of day for this account.",
    },
    {
        .name = "STATUS_LOGIN_WKSTA_RESTRICTION",
        .value = 0xC0000248UL,
        .description = "The account is not authorized to log on from this station.",
    },
    {
        .name = "STATUS_IMAGE_MP_UP_MISMATCH",
        .value = 0xC0000249UL,
        .description = "{UP/MP Image Mismatch} The image %hs has been modified for use on a uniprocessor system, but you are running it on a multiprocessor machine. Reinstall the image file.",
    },
    {
        .name = "STATUS_INSUFFICIENT_LOGON_INFO",
        .value = 0xC0000250UL,
        .description = "There is insufficient account information to log you on.",
    },
    {
        .name = "STATUS_BAD_DLL_ENTRYPOINT",
        .value = 0xC0000251UL,
        .description = "{Invalid DLL Entrypoint} The dynamic link library %hs is not written correctly. The stack pointer has been left in an inconsistent state. The entry point should be declared as WINAPI or STDCALL. Select YES to fail the DLL load. Select NO to continue execution. Selecting NO might cause the application to operate incorrectly.",
    },
    {
        .name = "STATUS_BAD_SERVICE_ENTRYPOINT",
        .value = 0xC0000252UL,
        .description = "{Invalid Service Callback Entrypoint} The %hs service is not written correctly. The stack pointer has been left in an inconsistent state. The callback entry point should be declared as WINAPI or STDCALL. Selecting OK will cause the service to continue operation. However, the service process might operate incorrectly.",
    },
    {
        .name = "STATUS_LPC_REPLY_LOST",
        .value = 0xC0000253UL,
        .description = "The server received the messages but did not send a reply.",
    },
    {
        .name = "STATUS_IP_ADDRESS_CONFLICT1",
        .value = 0xC0000254UL,
        .description = "There is an IP address conflict with another system on the network.",
    },
    {
        .name = "STATUS_IP_ADDRESS_CONFLICT2",
        .value = 0xC0000255UL,
        .description = "There is an IP address conflict with another system on the network.",
    },
    {
        .name = "STATUS_REGISTRY_QUOTA_LIMIT",
        .value = 0xC0000256UL,
        .description = "{Low On Registry Space} The system has reached the maximum size that is allowed for the system part of the registry. Additional storage requests will be ignored.",
    },
    {
        .name = "STATUS_PATH_NOT_COVERED",
        .value = 0xC0000257UL,
        .description = "The contacted server does not support the indicated part of the DFS namespace.",
    },
    {
        .name = "STATUS_NO_CALLBACK_ACTIVE",
        .value = 0xC0000258UL,
        .description = "A callback return system service cannot be executed when no callback is active.",
    },
    {
        .name = "STATUS_LICENSE_QUOTA_EXCEEDED",
        .value = 0xC0000259UL,
        .description = "The service being accessed is licensed for a particular number of connections. No more connections can be made to the service at this time because the service has already accepted the maximum number of connections.",
    },
    {
        .name = "STATUS_PWD_TOO_SHORT",
        .value = 0xC000025AUL,
        .description = "The password provided is too short to meet the policy of your user account. Choose a longer password.",
    },
    {
        .name = "STATUS_PWD_TOO_RECENT",
        .value = 0xC000025BUL,
        .description = "The policy of your user account does not allow you to change passwords too frequently. This is done to prevent users from changing back to a familiar, but potentially discovered, password. If you feel your password has been compromised, contact your administrator immediately to have a new one assigned.",
    },
    {
        .name = "STATUS_PWD_HISTORY_CONFLICT",
        .value = 0xC000025CUL,
        .description = "You have attempted to change your password to one that you have used in the past. The policy of your user account does not allow this. Select a password that you have not previously used.",
    },
    {
        .name = "STATUS_PLUGPLAY_NO_DEVICE",
        .value = 0xC000025EUL,
        .description = "You have attempted to load a legacy device driver while its device instance had been disabled.",
    },
    {
        .name = "STATUS_UNSUPPORTED_COMPRESSION",
        .value = 0xC000025FUL,
        .description = "The specified compression format is unsupported.",
    },
    {
        .name = "STATUS_INVALID_HW_PROFILE",
        .value = 0xC0000260UL,
        .description = "The specified hardware profile configuration is invalid.",
    },
    {
        .name = "STATUS_INVALID_PLUGPLAY_DEVICE_PATH",
        .value = 0xC0000261UL,
        .description = "The specified Plug and Play registry device path is invalid.",
    },
    {
        .name = "STATUS_DRIVER_ORDINAL_NOT_FOUND",
        .value = 0xC0000262UL,
        .description = "{Driver Entry Point Not Found} The %hs device driver could not locate the ordinal %ld in driver %hs.",
    },
    {
        .name = "STATUS_DRIVER_ENTRYPOINT_NOT_FOUND",
        .value = 0xC0000263UL,
        .description = "{Driver Entry Point Not Found} The %hs device driver could not locate the entry point %hs in driver %hs.",
    },
    {
        .name = "STATUS_RESOURCE_NOT_OWNED",
        .value = 0xC0000264UL,
        .description = "{Application Error} The application attempted to release a resource it did not own. Click OK to terminate the application.",
    },
    {
        .name = "STATUS_TOO_MANY_LINKS",
        .value = 0xC0000265UL,
        .description = "An attempt was made to create more links on a file than the file system supports.",
    },
    {
        .name = "STATUS_QUOTA_LIST_INCONSISTENT",
        .value = 0xC0000266UL,
        .description = "The specified quota list is internally inconsistent with its descriptor.",
    },
    {
        .name = "STATUS_FILE_IS_OFFLINE",
        .value = 0xC0000267UL,
        .description = "The specified file has been relocated to offline storage.",
    },
    {
        .name = "STATUS_EVALUATION_EXPIRATION",
        .value = 0xC0000268UL,
        .description = "{Windows Evaluation Notification} The evaluation period for this installation of Windows has expired. This system will shutdown in 1 hour. To restore access to this installation of Windows, upgrade this installation by using a licensed distribution of this product.",
    },
    {
        .name = "STATUS_ILLEGAL_DLL_RELOCATION",
        .value = 0xC0000269UL,
        .description = "{Illegal System DLL Relocation} The system DLL %hs was relocated in memory. The application will not run properly. The relocation occurred because the DLL %hs occupied an address range that is reserved for Windows system DLLs. The vendor supplying the DLL should be contacted for a new DLL.",
    },
    {
        .name = "STATUS_LICENSE_VIOLATION",
        .value = 0xC000026AUL,
        .description = "{License Violation} The system has detected tampering with your registered product type. This is a violation of your software license. Tampering with the product type is not permitted.",
    },
    {
        .name = "STATUS_DLL_INIT_FAILED_LOGOFF",
        .value = 0xC000026BUL,
        .description = "{DLL Initialization Failed} The application failed to initialize because the window station is shutting down.",
    },
    {
        .name = "STATUS_DRIVER_UNABLE_TO_LOAD",
        .value = 0xC000026CUL,
        .description = "{Unable to Load Device Driver} %hs device driver could not be loaded. Error Status was 0x%x.",
    },
    {
        .name = "STATUS_DFS_UNAVAILABLE",
        .value = 0xC000026DUL,
        .description = "DFS is unavailable on the contacted server.",
    },
    {
        .name = "STATUS_VOLUME_DISMOUNTED",
        .value = 0xC000026EUL,
        .description = "An operation was attempted to a volume after it was dismounted.",
    },
    {
        .name = "STATUS_WX86_INTERNAL_ERROR",
        .value = 0xC000026FUL,
        .description = "An internal error occurred in the Win32 x86 emulation subsystem.",
    },
    {
        .name = "STATUS_WX86_FLOAT_STACK_CHECK",
        .value = 0xC0000270UL,
        .description = "Win32 x86 emulation subsystem floating-point stack check.",
    },
    {
        .name = "STATUS_VALIDATE_CONTINUE",
        .value = 0xC0000271UL,
        .description = "The validation process needs to continue on to the next step.",
    },
    {
        .name = "STATUS_NO_MATCH",
        .value = 0xC0000272UL,
        .description = "There was no match for the specified key in the index.",
    },
    {
        .name = "STATUS_NO_MORE_MATCHES",
        .value = 0xC0000273UL,
        .description = "There are no more matches for the current index enumeration.",
    },
    {
        .name = "STATUS_NOT_A_REPARSE_POINT",
        .value = 0xC0000275UL,
        .description = "The NTFS file or directory is not a reparse point.",
    },
    {
        .name = "STATUS_IO_REPARSE_TAG_INVALID",
        .value = 0xC0000276UL,
        .description = "The Windows I/O reparse tag passed for the NTFS reparse point is invalid.",
    },
    {
        .name = "STATUS_IO_REPARSE_TAG_MISMATCH",
        .value = 0xC0000277UL,
        .description = "The Windows I/O reparse tag does not match the one that is in the NTFS reparse point.",
    },
    {
        .name = "STATUS_IO_REPARSE_DATA_INVALID",
        .value = 0xC0000278UL,
        .description = "The user data passed for the NTFS reparse point is invalid.",
    },
    {
        .name = "STATUS_IO_REPARSE_TAG_NOT_HANDLED",
        .value = 0xC0000279UL,
        .description = "The layered file system driver for this I/O tag did not handle it when needed.",
    },
    {
        .name = "STATUS_REPARSE_POINT_NOT_RESOLVED",
        .value = 0xC0000280UL,
        .description = "The NTFS symbolic link could not be resolved even though the initial file name is valid.",
    },
    {
        .name = "STATUS_DIRECTORY_IS_A_REPARSE_POINT",
        .value = 0xC0000281UL,
        .description = "The NTFS directory is a reparse point.",
    },
    {
        .name = "STATUS_RANGE_LIST_CONFLICT",
        .value = 0xC0000282UL,
        .description = "The range could not be added to the range list because of a conflict.",
    },
    {
        .name = "STATUS_SOURCE_ELEMENT_EMPTY",
        .value = 0xC0000283UL,
        .description = "The specified medium changer source element contains no media.",
    },
    {
        .name = "STATUS_DESTINATION_ELEMENT_FULL",
        .value = 0xC0000284UL,
        .description = "The specified medium changer destination element already contains media.",
    },
    {
        .name = "STATUS_ILLEGAL_ELEMENT_ADDRESS",
        .value = 0xC0000285UL,
        .description = "The specified medium changer element does not exist.",
    },
    {
        .name = "STATUS_MAGAZINE_NOT_PRESENT",
        .value = 0xC0000286UL,
        .description = "The specified element is contained in a magazine that is no longer present.",
    },
    {
        .name = "STATUS_REINITIALIZATION_NEEDED",
        .value = 0xC0000287UL,
        .description = "The device requires re-initialization due to hardware errors.",
    },
    {
        .name = "STATUS_ENCRYPTION_FAILED",
        .value = 0xC000028AUL,
        .description = "The file encryption attempt failed.",
    },
    {
        .name = "STATUS_DECRYPTION_FAILED",
        .value = 0xC000028BUL,
        .description = "The file decryption attempt failed.",
    },
    {
        .name = "STATUS_RANGE_NOT_FOUND",
        .value = 0xC000028CUL,
        .description = "The specified range could not be found in the range list.",
    },
    {
        .name = "STATUS_NO_RECOVERY_POLICY",
        .value = 0xC000028DUL,
        .description = "There is no encryption recovery policy configured for this system.",
    },
    {
        .name = "STATUS_NO_EFS",
        .value = 0xC000028EUL,
        .description = "The required encryption driver is not loaded for this system.",
    },
    {
        .name = "STATUS_WRONG_EFS",
        .value = 0xC000028FUL,
        .description = "The file was encrypted with a different encryption driver than is currently loaded.",
    },
    {
        .name = "STATUS_NO_USER_KEYS",
        .value = 0xC0000290UL,
        .description = "There are no EFS keys defined for the user.",
    },
    {
        .name = "STATUS_FILE_NOT_ENCRYPTED",
        .value = 0xC0000291UL,
        .description = "The specified file is not encrypted.",
    },
    {
        .name = "STATUS_NOT_EXPORT_FORMAT",
        .value = 0xC0000292UL,
        .description = "The specified file is not in the defined EFS export format.",
    },
    {
        .name = "STATUS_FILE_ENCRYPTED",
        .value = 0xC0000293UL,
        .description = "The specified file is encrypted and the user does not have the ability to decrypt it.",
    },
    {
        .name = "STATUS_WMI_GUID_NOT_FOUND",
        .value = 0xC0000295UL,
        .description = "The GUID passed was not recognized as valid by a WMI data provider.",
    },
    {
        .name = "STATUS_WMI_INSTANCE_NOT_FOUND",
        .value = 0xC0000296UL,
        .description = "The instance name passed was not recognized as valid by a WMI data provider.",
    },
    {
        .name = "STATUS_WMI_ITEMID_NOT_FOUND",
        .value = 0xC0000297UL,
        .description = "The data item ID passed was not recognized as valid by a WMI data provider.",
    },
    {
        .name = "STATUS_WMI_TRY_AGAIN",
        .value = 0xC0000298UL,
        .description = "The WMI request could not be completed and should be retried.",
    },
    {
        .name = "STATUS_SHARED_POLICY",
        .value = 0xC0000299UL,
        .description = "The policy object is shared and can only be modified at the root.",
    },
    {
        .name = "STATUS_POLICY_OBJECT_NOT_FOUND",
        .value = 0xC000029AUL,
        .description = "The policy object does not exist when it should.",
    },
    {
        .name = "STATUS_POLICY_ONLY_IN_DS",
        .value = 0xC000029BUL,
        .description = "The requested policy information only lives in the Ds.",
    },
    {
        .name = "STATUS_VOLUME_NOT_UPGRADED",
        .value = 0xC000029CUL,
        .description = "The volume must be upgraded to enable this feature.",
    },
    {
        .name = "STATUS_REMOTE_STORAGE_NOT_ACTIVE",
        .value = 0xC000029DUL,
        .description = "The remote storage service is not operational at this time.",
    },
    {
        .name = "STATUS_REMOTE_STORAGE_MEDIA_ERROR",
        .value = 0xC000029EUL,
        .description = "The remote storage service encountered a media error.",
    },
    {
        .name = "STATUS_NO_TRACKING_SERVICE",
        .value = 0xC000029FUL,
        .description = "The tracking (workstation) service is not running.",
    },
    {
        .name = "STATUS_SERVER_SID_MISMATCH",
        .value = 0xC00002A0UL,
        .description = "The server process is running under a SID that is different from the SID that is required by client.",
    },
    {
        .name = "STATUS_DS_NO_ATTRIBUTE_OR_VALUE",
        .value = 0xC00002A1UL,
        .description = "The specified directory service attribute or value does not exist.",
    },
    {
        .name = "STATUS_DS_INVALID_ATTRIBUTE_SYNTAX",
        .value = 0xC00002A2UL,
        .description = "The attribute syntax specified to the directory service is invalid.",
    },
    {
        .name = "STATUS_DS_ATTRIBUTE_TYPE_UNDEFINED",
        .value = 0xC00002A3UL,
        .description = "The attribute type specified to the directory service is not defined.",
    },
    {
        .name = "STATUS_DS_ATTRIBUTE_OR_VALUE_EXISTS",
        .value = 0xC00002A4UL,
        .description = "The specified directory service attribute or value already exists.",
    },
    {
        .name = "STATUS_DS_BUSY",
        .value = 0xC00002A5UL,
        .description = "The directory service is busy.",
    },
    {
        .name = "STATUS_DS_UNAVAILABLE",
        .value = 0xC00002A6UL,
        .description = "The directory service is unavailable.",
    },
    {
        .name = "STATUS_DS_NO_RIDS_ALLOCATED",
        .value = 0xC00002A7UL,
        .description = "The directory service was unable to allocate a relative identifier.",
    },
    {
        .name = "STATUS_DS_NO_MORE_RIDS",
        .value = 0xC00002A8UL,
        .description = "The directory service has exhausted the pool of relative identifiers.",
    },
    {
        .name = "STATUS_DS_INCORRECT_ROLE_OWNER",
        .value = 0xC00002A9UL,
        .description = "The requested operation could not be performed because the directory service is not the master for that type of operation.",
    },
    {
        .name = "STATUS_DS_RIDMGR_INIT_ERROR",
        .value = 0xC00002AAUL,
        .description = "The directory service was unable to initialize the subsystem that allocates relative identifiers.",
    },
    {
        .name = "STATUS_DS_OBJ_CLASS_VIOLATION",
        .value = 0xC00002ABUL,
        .description = "The requested operation did not satisfy one or more constraints that are associated with the class of the object.",
    },
    {
        .name = "STATUS_DS_CANT_ON_NON_LEAF",
        .value = 0xC00002ACUL,
        .description = "The directory service can perform the requested operation only on a leaf object.",
    },
    {
        .name = "STATUS_DS_CANT_ON_RDN",
        .value = 0xC00002ADUL,
        .description = "The directory service cannot perform the requested operation on the Relatively Defined Name (RDN) attribute of an object.",
    },
    {
        .name = "STATUS_DS_CANT_MOD_OBJ_CLASS",
        .value = 0xC00002AEUL,
        .description = "The directory service detected an attempt to modify the object class of an object.",
    },
    {
        .name = "STATUS_DS_CROSS_DOM_MOVE_FAILED",
        .value = 0xC00002AFUL,
        .description = "An error occurred while performing a cross domain move operation.",
    },
    {
        .name = "STATUS_DS_GC_NOT_AVAILABLE",
        .value = 0xC00002B0UL,
        .description = "Unable to contact the global catalog server.",
    },
    {
        .name = "STATUS_DIRECTORY_SERVICE_REQUIRED",
        .value = 0xC00002B1UL,
        .description = "The requested operation requires a directory service, and none was available.",
    },
    {
        .name = "STATUS_REPARSE_ATTRIBUTE_CONFLICT",
        .value = 0xC00002B2UL,
        .description = "The reparse attribute cannot be set because it is incompatible with an existing attribute.",
    },
    {
        .name = "STATUS_CANT_ENABLE_DENY_ONLY",
        .value = 0xC00002B3UL,
        .description = "A group marked \"use for deny only\" cannot be enabled.",
    },
    {
        .name = "STATUS_FLOAT_MULTIPLE_FAULTS",
        .value = 0xC00002B4UL,
        .description = "{EXCEPTION} Multiple floating-point faults.",
    },
    {
        .name = "STATUS_FLOAT_MULTIPLE_TRAPS",
        .value = 0xC00002B5UL,
        .description = "{EXCEPTION} Multiple floating-point traps.",
    },
    {
        .name = "STATUS_DEVICE_REMOVED",
        .value = 0xC00002B6UL,
        .description = "The device has been removed.",
    },
    {
        .name = "STATUS_JOURNAL_DELETE_IN_PROGRESS",
        .value = 0xC00002B7UL,
        .description = "The volume change journal is being deleted.",
    },
    {
        .name = "STATUS_JOURNAL_NOT_ACTIVE",
        .value = 0xC00002B8UL,
        .description = "The volume change journal is not active.",
    },
    {
        .name = "STATUS_NOINTERFACE",
        .value = 0xC00002B9UL,
        .description = "The requested interface is not supported.",
    },
    {
        .name = "STATUS_DS_ADMIN_LIMIT_EXCEEDED",
        .value = 0xC00002C1UL,
        .description = "A directory service resource limit has been exceeded.",
    },
    {
        .name = "STATUS_DRIVER_FAILED_SLEEP",
        .value = 0xC00002C2UL,
        .description = "{System Standby Failed} The driver %hs does not support standby mode. Updating this driver allows the system to go to standby mode.",
    },
    {
        .name = "STATUS_MUTUAL_AUTHENTICATION_FAILED",
        .value = 0xC00002C3UL,
        .description = "Mutual Authentication failed. The server password is out of date at the domain controller.",
    },
    {
        .name = "STATUS_CORRUPT_SYSTEM_FILE",
        .value = 0xC00002C4UL,
        .description = "The system file %1 has become corrupt and has been replaced.",
    },
    {
        .name = "STATUS_DATATYPE_MISALIGNMENT_ERROR",
        .value = 0xC00002C5UL,
        .description = "{EXCEPTION} Alignment Error A data type misalignment error was detected in a load or store instruction.",
    },
    {
        .name = "STATUS_WMI_READ_ONLY",
        .value = 0xC00002C6UL,
        .description = "The WMI data item or data block is read-only.",
    },
    {
        .name = "STATUS_WMI_SET_FAILURE",
        .value = 0xC00002C7UL,
        .description = "The WMI data item or data block could not be changed.",
    },
    {
        .name = "STATUS_COMMITMENT_MINIMUM",
        .value = 0xC00002C8UL,
        .description = "{Virtual Memory Minimum Too Low} Your system is low on virtual memory. Windows is increasing the size of your virtual memory paging file. During this process, memory requests for some applications might be denied. For more information, see Help.",
    },
    {
        .name = "STATUS_REG_NAT_CONSUMPTION",
        .value = 0xC00002C9UL,
        .description = "{EXCEPTION} Register NaT consumption faults. A NaT value is consumed on a non-speculative instruction.",
    },
    {
        .name = "STATUS_TRANSPORT_FULL",
        .value = 0xC00002CAUL,
        .description = "The transport element of the medium changer contains media, which is causing the operation to fail.",
    },
    {
        .name = "STATUS_DS_SAM_INIT_FAILURE",
        .value = 0xC00002CBUL,
        .description = "Security Accounts Manager initialization failed because of the following error: %hs Error Status: 0x%x. Click OK to shut down this system and restart in Directory Services Restore Mode. Check the event log for more detailed information.",
    },
    {
        .name = "STATUS_ONLY_IF_CONNECTED",
        .value = 0xC00002CCUL,
        .description = "This operation is supported only when you are connected to the server.",
    },
    {
        .name = "STATUS_DS_SENSITIVE_GROUP_VIOLATION",
        .value = 0xC00002CDUL,
        .description = "Only an administrator can modify the membership list of an administrative group.",
    },
    {
        .name = "STATUS_PNP_RESTART_ENUMERATION",
        .value = 0xC00002CEUL,
        .description = "A device was removed so enumeration must be restarted.",
    },
    {
        .name = "STATUS_JOURNAL_ENTRY_DELETED",
        .value = 0xC00002CFUL,
        .description = "The journal entry has been deleted from the journal.",
    },
    {
        .name = "STATUS_DS_CANT_MOD_PRIMARYGROUPID",
        .value = 0xC00002D0UL,
        .description = "Cannot change the primary group ID of a domain controller account.",
    },
    {
        .name = "STATUS_SYSTEM_IMAGE_BAD_SIGNATURE",
        .value = 0xC00002D1UL,
        .description = "{Fatal System Error} The system image %s is not properly signed. The file has been replaced with the signed file. The system has been shut down.",
    },
    {
        .name = "STATUS_PNP_REBOOT_REQUIRED",
        .value = 0xC00002D2UL,
        .description = "The device will not start without a reboot.",
    },
    {
        .name = "STATUS_POWER_STATE_INVALID",
        .value = 0xC00002D3UL,
        .description = "The power state of the current device cannot support this request.",
    },
    {
        .name = "STATUS_DS_INVALID_GROUP_TYPE",
        .value = 0xC00002D4UL,
        .description = "The specified group type is invalid.",
    },
    {
        .name = "STATUS_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN",
        .value = 0xC00002D5UL,
        .description = "In a mixed domain, no nesting of a global group if the group is security enabled.",
    },
    {
        .name = "STATUS_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN",
        .value = 0xC00002D6UL,
        .description = "In a mixed domain, cannot nest local groups with other local groups, if the group is security enabled.",
    },
    {
        .name = "STATUS_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER",
        .value = 0xC00002D7UL,
        .description = "A global group cannot have a local group as a member.",
    },
    {
        .name = "STATUS_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER",
        .value = 0xC00002D8UL,
        .description = "A global group cannot have a universal group as a member.",
    },
    {
        .name = "STATUS_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER",
        .value = 0xC00002D9UL,
        .description = "A universal group cannot have a local group as a member.",
    },
    {
        .name = "STATUS_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER",
        .value = 0xC00002DAUL,
        .description = "A global group cannot have a cross-domain member.",
    },
    {
        .name = "STATUS_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER",
        .value = 0xC00002DBUL,
        .description = "A local group cannot have another cross-domain local group as a member.",
    },
    {
        .name = "STATUS_DS_HAVE_PRIMARY_MEMBERS",
        .value = 0xC00002DCUL,
        .description = "Cannot change to a security-disabled group because primary members are in this group.",
    },
    {
        .name = "STATUS_WMI_NOT_SUPPORTED",
        .value = 0xC00002DDUL,
        .description = "The WMI operation is not supported by the data block or method.",
    },
    {
        .name = "STATUS_INSUFFICIENT_POWER",
        .value = 0xC00002DEUL,
        .description = "There is not enough power to complete the requested operation.",
    },
    {
        .name = "STATUS_SAM_NEED_BOOTKEY_PASSWORD",
        .value = 0xC00002DFUL,
        .description = "The Security Accounts Manager needs to get the boot password.",
    },
    {
        .name = "STATUS_SAM_NEED_BOOTKEY_FLOPPY",
        .value = 0xC00002E0UL,
        .description = "The Security Accounts Manager needs to get the boot key from the floppy disk.",
    },
    {
        .name = "STATUS_DS_CANT_START",
        .value = 0xC00002E1UL,
        .description = "The directory service cannot start.",
    },
    {
        .name = "STATUS_DS_INIT_FAILURE",
        .value = 0xC00002E2UL,
        .description = "The directory service could not start because of the following error: %hs Error Status: 0x%x. Click OK to shut down this system and restart in Directory Services Restore Mode. Check the event log for more detailed information.",
    },
    {
        .name = "STATUS_SAM_INIT_FAILURE",
        .value = 0xC00002E3UL,
        .description = "The Security Accounts Manager initialization failed because of the following error: %hs Error Status: 0x%x. Click OK to shut down this system and restart in Safe Mode. Check the event log for more detailed information.",
    },
    {
        .name = "STATUS_DS_GC_REQUIRED",
        .value = 0xC00002E4UL,
        .description = "The requested operation can be performed only on a global catalog server.",
    },
    {
        .name = "STATUS_DS_LOCAL_MEMBER_OF_LOCAL_ONLY",
        .value = 0xC00002E5UL,
        .description = "A local group can only be a member of other local groups in the same domain.",
    },
    {
        .name = "STATUS_DS_NO_FPO_IN_UNIVERSAL_GROUPS",
        .value = 0xC00002E6UL,
        .description = "Foreign security principals cannot be members of universal groups.",
    },
    {
        .name = "STATUS_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED",
        .value = 0xC00002E7UL,
        .description = "Your computer could not be joined to the domain. You have exceeded the maximum number of computer accounts you are allowed to create in this domain. Contact your system administrator to have this limit reset or increased.",
    },
    {
        .name = "STATUS_CURRENT_DOMAIN_NOT_ALLOWED",
        .value = 0xC00002E9UL,
        .description = "This operation cannot be performed on the current domain.",
    },
    {
        .name = "STATUS_CANNOT_MAKE",
        .value = 0xC00002EAUL,
        .description = "The directory or file cannot be created.",
    },
    {
        .name = "STATUS_SYSTEM_SHUTDOWN",
        .value = 0xC00002EBUL,
        .description = "The system is in the process of shutting down.",
    },
    {
        .name = "STATUS_DS_INIT_FAILURE_CONSOLE",
        .value = 0xC00002ECUL,
        .description = "Directory Services could not start because of the following error: %hs Error Status: 0x%x. Click OK to shut down the system. You can use the recovery console to diagnose the system further.",
    },
    {
        .name = "STATUS_DS_SAM_INIT_FAILURE_CONSOLE",
        .value = 0xC00002EDUL,
        .description = "Security Accounts Manager initialization failed because of the following error: %hs Error Status: 0x%x. Click OK to shut down the system. You can use the recovery console to diagnose the system further.",
    },
    {
        .name = "STATUS_UNFINISHED_CONTEXT_DELETED",
        .value = 0xC00002EEUL,
        .description = "A security context was deleted before the context was completed. This is considered a logon failure.",
    },
    {
        .name = "STATUS_NO_TGT_REPLY",
        .value = 0xC00002EFUL,
        .description = "The client is trying to negotiate a context and the server requires user-to-user but did not send a TGT reply.",
    },
    {
        .name = "STATUS_OBJECTID_NOT_FOUND",
        .value = 0xC00002F0UL,
        .description = "An object ID was not found in the file.",
    },
    {
        .name = "STATUS_NO_IP_ADDRESSES",
        .value = 0xC00002F1UL,
        .description = "Unable to accomplish the requested task because the local machine does not have any IP addresses.",
    },
    {
        .name = "STATUS_WRONG_CREDENTIAL_HANDLE",
        .value = 0xC00002F2UL,
        .description = "The supplied credential handle does not match the credential that is associated with the security context.",
    },
    {
        .name = "STATUS_CRYPTO_SYSTEM_INVALID",
        .value = 0xC00002F3UL,
        .description = "The crypto system or checksum function is invalid because a required function is unavailable.",
    },
    {
        .name = "STATUS_MAX_REFERRALS_EXCEEDED",
        .value = 0xC00002F4UL,
        .description = "The number of maximum ticket referrals has been exceeded.",
    },
    {
        .name = "STATUS_MUST_BE_KDC",
        .value = 0xC00002F5UL,
        .description = "The local machine must be a Kerberos KDC (domain controller) and it is not.",
    },
    {
        .name = "STATUS_STRONG_CRYPTO_NOT_SUPPORTED",
        .value = 0xC00002F6UL,
        .description = "The other end of the security negotiation requires strong crypto but it is not supported on the local machine.",
    },
    {
        .name = "STATUS_TOO_MANY_PRINCIPALS",
        .value = 0xC00002F7UL,
        .description = "The KDC reply contained more than one principal name.",
    },
    {
        .name = "STATUS_NO_PA_DATA",
        .value = 0xC00002F8UL,
        .description = "Expected to find PA data for a hint of what etype to use, but it was not found.",
    },
    {
        .name = "STATUS_PKINIT_NAME_MISMATCH",
        .value = 0xC00002F9UL,
        .description = "The client certificate does not contain a valid UPN, or does not match the client name in the logon request. Contact your administrator.",
    },
    {
        .name = "STATUS_SMARTCARD_LOGON_REQUIRED",
        .value = 0xC00002FAUL,
        .description = "Smart card logon is required and was not used.",
    },
    {
        .name = "STATUS_KDC_INVALID_REQUEST",
        .value = 0xC00002FBUL,
        .description = "An invalid request was sent to the KDC.",
    },
    {
        .name = "STATUS_KDC_UNABLE_TO_REFER",
        .value = 0xC00002FCUL,
        .description = "The KDC was unable to generate a referral for the service requested.",
    },
    {
        .name = "STATUS_KDC_UNKNOWN_ETYPE",
        .value = 0xC00002FDUL,
        .description = "The encryption type requested is not supported by the KDC.",
    },
    {
        .name = "STATUS_SHUTDOWN_IN_PROGRESS",
        .value = 0xC00002FEUL,
        .description = "A system shutdown is in progress.",
    },
    {
        .name = "STATUS_SERVER_SHUTDOWN_IN_PROGRESS",
        .value = 0xC00002FFUL,
        .description = "The server machine is shutting down.",
    },
    {
        .name = "STATUS_NOT_SUPPORTED_ON_SBS",
        .value = 0xC0000300UL,
        .description = "This operation is not supported on a computer running Windows Server 2003 operating system for Small Business Server.",
    },
    {
        .name = "STATUS_WMI_GUID_DISCONNECTED",
        .value = 0xC0000301UL,
        .description = "The WMI GUID is no longer available.",
    },
    {
        .name = "STATUS_WMI_ALREADY_DISABLED",
        .value = 0xC0000302UL,
        .description = "Collection or events for the WMI GUID is already disabled.",
    },
    {
        .name = "STATUS_WMI_ALREADY_ENABLED",
        .value = 0xC0000303UL,
        .description = "Collection or events for the WMI GUID is already enabled.",
    },
    {
        .name = "STATUS_MFT_TOO_FRAGMENTED",
        .value = 0xC0000304UL,
        .description = "The master file table on the volume is too fragmented to complete this operation.",
    },
    {
        .name = "STATUS_COPY_PROTECTION_FAILURE",
        .value = 0xC0000305UL,
        .description = "Copy protection failure.",
    },
    {
        .name = "STATUS_CSS_AUTHENTICATION_FAILURE",
        .value = 0xC0000306UL,
        .description = "Copy protection error—DVD CSS Authentication failed.",
    },
    {
        .name = "STATUS_CSS_KEY_NOT_PRESENT",
        .value = 0xC0000307UL,
        .description = "Copy protection error—The specified sector does not contain a valid key.",
    },
    {
        .name = "STATUS_CSS_KEY_NOT_ESTABLISHED",
        .value = 0xC0000308UL,
        .description = "Copy protection error—DVD session key not established.",
    },
    {
        .name = "STATUS_CSS_SCRAMBLED_SECTOR",
        .value = 0xC0000309UL,
        .description = "Copy protection error—The read failed because the sector is encrypted.",
    },
    {
        .name = "STATUS_CSS_REGION_MISMATCH",
        .value = 0xC000030AUL,
        .description = "Copy protection error—The region of the specified DVD does not correspond to the region setting of the drive.",
    },
    {
        .name = "STATUS_CSS_RESETS_EXHAUSTED",
        .value = 0xC000030BUL,
        .description = "Copy protection error—The region setting of the drive might be permanent.",
    },
    {
        .name = "STATUS_PKINIT_FAILURE",
        .value = 0xC0000320UL,
        .description = "The Kerberos protocol encountered an error while validating the KDC certificate during smart card logon. There is more information in the system event log.",
    },
    {
        .name = "STATUS_SMARTCARD_SUBSYSTEM_FAILURE",
        .value = 0xC0000321UL,
        .description = "The Kerberos protocol encountered an error while attempting to use the smart card subsystem.",
    },
    {
        .name = "STATUS_NO_KERB_KEY",
        .value = 0xC0000322UL,
        .description = "The target server does not have acceptable Kerberos credentials.",
    },
    {
        .name = "STATUS_HOST_DOWN",
        .value = 0xC0000350UL,
        .description = "The transport determined that the remote system is down.",
    },
    {
        .name = "STATUS_UNSUPPORTED_PREAUTH",
        .value = 0xC0000351UL,
        .description = "An unsupported pre-authentication mechanism was presented to the Kerberos package.",
    },
    {
        .name = "STATUS_EFS_ALG_BLOB_TOO_BIG",
        .value = 0xC0000352UL,
        .description = "The encryption algorithm that is used on the source file needs a bigger key buffer than the one that is used on the destination file.",
    },
    {
        .name = "STATUS_PORT_NOT_SET",
        .value = 0xC0000353UL,
        .description = "An attempt to remove a processes DebugPort was made, but a port was not already associated with the process.",
    },
    {
        .name = "STATUS_DEBUGGER_INACTIVE",
        .value = 0xC0000354UL,
        .description = "An attempt to do an operation on a debug port failed because the port is in the process of being deleted.",
    },
    {
        .name = "STATUS_DS_VERSION_CHECK_FAILURE",
        .value = 0xC0000355UL,
        .description = "This version of Windows is not compatible with the behavior version of the directory forest, domain, or domain controller.",
    },
    {
        .name = "STATUS_AUDITING_DISABLED",
        .value = 0xC0000356UL,
        .description = "The specified event is currently not being audited.",
    },
    {
        .name = "STATUS_PRENT4_MACHINE_ACCOUNT",
        .value = 0xC0000357UL,
        .description = "The machine account was created prior to Windows NT 4.0 operating system. The account needs to be recreated.",
    },
    {
        .name = "STATUS_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER",
        .value = 0xC0000358UL,
        .description = "An account group cannot have a universal group as a member.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_WIN_32",
        .value = 0xC0000359UL,
        .description = "The specified image file did not have the correct format; it appears to be a 32-bit Windows image.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_WIN_64",
        .value = 0xC000035AUL,
        .description = "The specified image file did not have the correct format; it appears to be a 64-bit Windows image.",
    },
    {
        .name = "STATUS_BAD_BINDINGS",
        .value = 0xC000035BUL,
        .description = "The client's supplied SSPI channel bindings were incorrect.",
    },
    {
        .name = "STATUS_NETWORK_SESSION_EXPIRED",
        .value = 0xC000035CUL,
        .description = "The client session has expired; so the client must re-authenticate to continue accessing the remote resources.",
    },
    {
        .name = "STATUS_APPHELP_BLOCK",
        .value = 0xC000035DUL,
        .description = "The AppHelp dialog box canceled; thus preventing the application from starting.",
    },
    {
        .name = "STATUS_ALL_SIDS_FILTERED",
        .value = 0xC000035EUL,
        .description = "The SID filtering operation removed all SIDs.",
    },
    {
        .name = "STATUS_NOT_SAFE_MODE_DRIVER",
        .value = 0xC000035FUL,
        .description = "The driver was not loaded because the system is starting in safe mode.",
    },
    {
        .name = "STATUS_ACCESS_DISABLED_BY_POLICY_DEFAULT",
        .value = 0xC0000361UL,
        .description = "Access to %1 has been restricted by your Administrator by the default software restriction policy level.",
    },
    {
        .name = "STATUS_ACCESS_DISABLED_BY_POLICY_PATH",
        .value = 0xC0000362UL,
        .description = "Access to %1 has been restricted by your Administrator by location with policy rule %2 placed on path %3.",
    },
    {
        .name = "STATUS_ACCESS_DISABLED_BY_POLICY_PUBLISHER",
        .value = 0xC0000363UL,
        .description = "Access to %1 has been restricted by your Administrator by software publisher policy.",
    },
    {
        .name = "STATUS_ACCESS_DISABLED_BY_POLICY_OTHER",
        .value = 0xC0000364UL,
        .description = "Access to %1 has been restricted by your Administrator by policy rule %2.",
    },
    {
        .name = "STATUS_FAILED_DRIVER_ENTRY",
        .value = 0xC0000365UL,
        .description = "The driver was not loaded because it failed its initialization call.",
    },
    {
        .name = "STATUS_DEVICE_ENUMERATION_ERROR",
        .value = 0xC0000366UL,
        .description = "The device encountered an error while applying power or reading the device configuration. This might be caused by a failure of your hardware or by a poor connection.",
    },
    {
        .name = "STATUS_MOUNT_POINT_NOT_RESOLVED",
        .value = 0xC0000368UL,
        .description = "The create operation failed because the name contained at least one mount point that resolves to a volume to which the specified device object is not attached.",
    },
    {
        .name = "STATUS_INVALID_DEVICE_OBJECT_PARAMETER",
        .value = 0xC0000369UL,
        .description = "The device object parameter is either not a valid device object or is not attached to the volume that is specified by the file name.",
    },
    {
        .name = "STATUS_MCA_OCCURED",
        .value = 0xC000036AUL,
        .description = "A machine check error has occurred. Check the system event log for additional information.",
    },
    {
        .name = "STATUS_DRIVER_BLOCKED_CRITICAL",
        .value = 0xC000036BUL,
        .description = "Driver %2 has been blocked from loading.",
    },
    {
        .name = "STATUS_DRIVER_BLOCKED",
        .value = 0xC000036CUL,
        .description = "Driver %2 has been blocked from loading.",
    },
    {
        .name = "STATUS_DRIVER_DATABASE_ERROR",
        .value = 0xC000036DUL,
        .description = "There was error [%2] processing the driver database.",
    },
    {
        .name = "STATUS_SYSTEM_HIVE_TOO_LARGE",
        .value = 0xC000036EUL,
        .description = "System hive size has exceeded its limit.",
    },
    {
        .name = "STATUS_INVALID_IMPORT_OF_NON_DLL",
        .value = 0xC000036FUL,
        .description = "A dynamic link library (DLL) referenced a module that was neither a DLL nor the process's executable image.",
    },
    {
        .name = "STATUS_NO_SECRETS",
        .value = 0xC0000371UL,
        .description = "The local account store does not contain secret material for the specified account.",
    },
    {
        .name = "STATUS_ACCESS_DISABLED_NO_SAFER_UI_BY_POLICY",
        .value = 0xC0000372UL,
        .description = "Access to %1 has been restricted by your Administrator by policy rule %2.",
    },
    {
        .name = "STATUS_FAILED_STACK_SWITCH",
        .value = 0xC0000373UL,
        .description = "The system was not able to allocate enough memory to perform a stack switch.",
    },
    {
        .name = "STATUS_HEAP_CORRUPTION",
        .value = 0xC0000374UL,
        .description = "A heap has been corrupted.",
    },
    {
        .name = "STATUS_SMARTCARD_WRONG_PIN",
        .value = 0xC0000380UL,
        .description = "An incorrect PIN was presented to the smart card.",
    },
    {
        .name = "STATUS_SMARTCARD_CARD_BLOCKED",
        .value = 0xC0000381UL,
        .description = "The smart card is blocked.",
    },
    {
        .name = "STATUS_SMARTCARD_CARD_NOT_AUTHENTICATED",
        .value = 0xC0000382UL,
        .description = "No PIN was presented to the smart card.",
    },
    {
        .name = "STATUS_SMARTCARD_NO_CARD",
        .value = 0xC0000383UL,
        .description = "No smart card is available.",
    },
    {
        .name = "STATUS_SMARTCARD_NO_KEY_CONTAINER",
        .value = 0xC0000384UL,
        .description = "The requested key container does not exist on the smart card.",
    },
    {
        .name = "STATUS_SMARTCARD_NO_CERTIFICATE",
        .value = 0xC0000385UL,
        .description = "The requested certificate does not exist on the smart card.",
    },
    {
        .name = "STATUS_SMARTCARD_NO_KEYSET",
        .value = 0xC0000386UL,
        .description = "The requested keyset does not exist.",
    },
    {
        .name = "STATUS_SMARTCARD_IO_ERROR",
        .value = 0xC0000387UL,
        .description = "A communication error with the smart card has been detected.",
    },
    {
        .name = "STATUS_DOWNGRADE_DETECTED",
        .value = 0xC0000388UL,
        .description = "The system detected a possible attempt to compromise security. Ensure that you can contact the server that authenticated you.",
    },
    {
        .name = "STATUS_SMARTCARD_CERT_REVOKED",
        .value = 0xC0000389UL,
        .description = "The smart card certificate used for authentication has been revoked. Contact your system administrator. There might be additional information in the event log.",
    },
    {
        .name = "STATUS_ISSUING_CA_UNTRUSTED",
        .value = 0xC000038AUL,
        .description = "An untrusted certificate authority was detected while processing the smart card certificate that is used for authentication. Contact your system administrator.",
    },
    {
        .name = "STATUS_REVOCATION_OFFLINE_C",
        .value = 0xC000038BUL,
        .description = "The revocation status of the smart card certificate that is used for authentication could not be determined. Contact your system administrator.",
    },
    {
        .name = "STATUS_PKINIT_CLIENT_FAILURE",
        .value = 0xC000038CUL,
        .description = "The smart card certificate used for authentication was not trusted. Contact your system administrator.",
    },
    {
        .name = "STATUS_SMARTCARD_CERT_EXPIRED",
        .value = 0xC000038DUL,
        .description = "The smart card certificate used for authentication has expired. Contact your system administrator.",
    },
    {
        .name = "STATUS_DRIVER_FAILED_PRIOR_UNLOAD",
        .value = 0xC000038EUL,
        .description = "The driver could not be loaded because a previous version of the driver is still in memory.",
    },
    {
        .name = "STATUS_SMARTCARD_SILENT_CONTEXT",
        .value = 0xC000038FUL,
        .description = "The smart card provider could not perform the action because the context was acquired as silent.",
    },
    {
        .name = "STATUS_PER_USER_TRUST_QUOTA_EXCEEDED",
        .value = 0xC0000401UL,
        .description = "The delegated trust creation quota of the current user has been exceeded.",
    },
    {
        .name = "STATUS_ALL_USER_TRUST_QUOTA_EXCEEDED",
        .value = 0xC0000402UL,
        .description = "The total delegated trust creation quota has been exceeded.",
    },
    {
        .name = "STATUS_USER_DELETE_TRUST_QUOTA_EXCEEDED",
        .value = 0xC0000403UL,
        .description = "The delegated trust deletion quota of the current user has been exceeded.",
    },
    {
        .name = "STATUS_DS_NAME_NOT_UNIQUE",
        .value = 0xC0000404UL,
        .description = "The requested name already exists as a unique identifier.",
    },
    {
        .name = "STATUS_DS_DUPLICATE_ID_FOUND",
        .value = 0xC0000405UL,
        .description = "The requested object has a non-unique identifier and cannot be retrieved.",
    },
    {
        .name = "STATUS_DS_GROUP_CONVERSION_ERROR",
        .value = 0xC0000406UL,
        .description = "The group cannot be converted due to attribute restrictions on the requested group type.",
    },
    {
        .name = "STATUS_VOLSNAP_PREPARE_HIBERNATE",
        .value = 0xC0000407UL,
        .description = "{Volume Shadow Copy Service} Wait while the Volume Shadow Copy Service prepares volume %hs for hibernation.",
    },
    {
        .name = "STATUS_USER2USER_REQUIRED",
        .value = 0xC0000408UL,
        .description = "Kerberos sub-protocol User2User is required.",
    },
    {
        .name = "STATUS_STACK_BUFFER_OVERRUN",
        .value = 0xC0000409UL,
        .description = "The system detected an overrun of a stack-based buffer in this application. This overrun could potentially allow a malicious user to gain control of this application.",
    },
    {
        .name = "STATUS_NO_S4U_PROT_SUPPORT",
        .value = 0xC000040AUL,
        .description = "The Kerberos subsystem encountered an error. A service for user protocol request was made against a domain controller which does not support service for user.",
    },
    {
        .name = "STATUS_CROSSREALM_DELEGATION_FAILURE",
        .value = 0xC000040BUL,
        .description = "An attempt was made by this server to make a Kerberos constrained delegation request for a target that is outside the server realm. This action is not supported and the resulting error indicates a misconfiguration on the allowed-to-delegate-to list for this server. Contact your administrator.",
    },
    {
        .name = "STATUS_REVOCATION_OFFLINE_KDC",
        .value = 0xC000040CUL,
        .description = "The revocation status of the domain controller certificate used for smart card authentication could not be determined. There is additional information in the system event log. Contact your system administrator.",
    },
    {
        .name = "STATUS_ISSUING_CA_UNTRUSTED_KDC",
        .value = 0xC000040DUL,
        .description = "An untrusted certificate authority was detected while processing the domain controller certificate used for authentication. There is additional information in the system event log. Contact your system administrator.",
    },
    {
        .name = "STATUS_KDC_CERT_EXPIRED",
        .value = 0xC000040EUL,
        .description = "The domain controller certificate used for smart card logon has expired. Contact your system administrator with the contents of your system event log.",
    },
    {
        .name = "STATUS_KDC_CERT_REVOKED",
        .value = 0xC000040FUL,
        .description = "The domain controller certificate used for smart card logon has been revoked. Contact your system administrator with the contents of your system event log.",
    },
    {
        .name = "STATUS_PARAMETER_QUOTA_EXCEEDED",
        .value = 0xC0000410UL,
        .description = "Data present in one of the parameters is more than the function can operate on.",
    },
    {
        .name = "STATUS_HIBERNATION_FAILURE",
        .value = 0xC0000411UL,
        .description = "The system has failed to hibernate (The error code is %hs). Hibernation will be disabled until the system is restarted.",
    },
    {
        .name = "STATUS_DELAY_LOAD_FAILED",
        .value = 0xC0000412UL,
        .description = "An attempt to delay-load a .dll or get a function address in a delay-loaded .dll failed.",
    },
    {
        .name = "STATUS_AUTHENTICATION_FIREWALL_FAILED",
        .value = 0xC0000413UL,
        .description = "Logon Failure: The machine you are logging onto is protected by an authentication firewall. The specified account is not allowed to authenticate to the machine.",
    },
    {
        .name = "STATUS_VDM_DISALLOWED",
        .value = 0xC0000414UL,
        .description = "%hs is a 16-bit application. You do not have permissions to execute 16-bit applications. Check your permissions with your system administrator.",
    },
    {
        .name = "STATUS_HUNG_DISPLAY_DRIVER_THREAD",
        .value = 0xC0000415UL,
        .description = "{Display Driver Stopped Responding} The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the machine a dialog will be displayed giving you a chance to report this failure to Microsoft.",
    },
    {
        .name = "STATUS_INSUFFICIENT_RESOURCE_FOR_SPECIFIED_SHARED_SECTION_SIZE",
        .value = 0xC0000416UL,
        .description = "The Desktop heap encountered an error while allocating session memory. There is more information in the system event log.",
    },
    {
        .name = "STATUS_INVALID_CRUNTIME_PARAMETER",
        .value = 0xC0000417UL,
        .description = "An invalid parameter was passed to a C runtime function.",
    },
    {
        .name = "STATUS_NTLM_BLOCKED",
        .value = 0xC0000418UL,
        .description = "The authentication failed because NTLM was blocked.",
    },
    {
        .name = "STATUS_DS_SRC_SID_EXISTS_IN_FOREST",
        .value = 0xC0000419UL,
        .description = "The source object's SID already exists in destination forest.",
    },
    {
        .name = "STATUS_DS_DOMAIN_NAME_EXISTS_IN_FOREST",
        .value = 0xC000041AUL,
        .description = "The domain name of the trusted domain already exists in the forest.",
    },
    {
        .name = "STATUS_DS_FLAT_NAME_EXISTS_IN_FOREST",
        .value = 0xC000041BUL,
        .description = "The flat name of the trusted domain already exists in the forest.",
    },
    {
        .name = "STATUS_INVALID_USER_PRINCIPAL_NAME",
        .value = 0xC000041CUL,
        .description = "The User Principal Name (UPN) is invalid.",
    },
    {
        .name = "STATUS_ASSERTION_FAILURE",
        .value = 0xC0000420UL,
        .description = "There has been an assertion failure.",
    },
    {
        .name = "STATUS_VERIFIER_STOP",
        .value = 0xC0000421UL,
        .description = "Application verifier has found an error in the current process.",
    },
    {
        .name = "STATUS_CALLBACK_POP_STACK",
        .value = 0xC0000423UL,
        .description = "A user mode unwind is in progress.",
    },
    {
        .name = "STATUS_INCOMPATIBLE_DRIVER_BLOCKED",
        .value = 0xC0000424UL,
        .description = "%2 has been blocked from loading due to incompatibility with this system. Contact your software vendor for a compatible version of the driver.",
    },
    {
        .name = "STATUS_HIVE_UNLOADED",
        .value = 0xC0000425UL,
        .description = "Illegal operation attempted on a registry key which has already been unloaded.",
    },
    {
        .name = "STATUS_COMPRESSION_DISABLED",
        .value = 0xC0000426UL,
        .description = "Compression is disabled for this volume.",
    },
    {
        .name = "STATUS_FILE_SYSTEM_LIMITATION",
        .value = 0xC0000427UL,
        .description = "The requested operation could not be completed due to a file system limitation.",
    },
    {
        .name = "STATUS_INVALID_IMAGE_HASH",
        .value = 0xC0000428UL,
        .description = "The hash for image %hs cannot be found in the system catalogs. The image is likely corrupt or the victim of tampering.",
    },
    {
        .name = "STATUS_NOT_CAPABLE",
        .value = 0xC0000429UL,
        .description = "The implementation is not capable of performing the request.",
    },
    {
        .name = "STATUS_REQUEST_OUT_OF_SEQUENCE",
        .value = 0xC000042AUL,
        .description = "The requested operation is out of order with respect to other operations.",
    },
    {
        .name = "STATUS_IMPLEMENTATION_LIMIT",
        .value = 0xC000042BUL,
        .description = "An operation attempted to exceed an implementation-defined limit.",
    },
    {
        .name = "STATUS_ELEVATION_REQUIRED",
        .value = 0xC000042CUL,
        .description = "The requested operation requires elevation.",
    },
    {
        .name = "STATUS_NO_SECURITY_CONTEXT",
        .value = 0xC000042DUL,
        .description = "The required security context does not exist.",
    },
    {
        .name = "STATUS_PKU2U_CERT_FAILURE",
        .value = 0xC000042EUL,
        .description = "The PKU2U protocol encountered an error while attempting to utilize the associated certificates.",
    },
    {
        .name = "STATUS_BEYOND_VDL",
        .value = 0xC0000432UL,
        .description = "The operation was attempted beyond the valid data length of the file.",
    },
    {
        .name = "STATUS_ENCOUNTERED_WRITE_IN_PROGRESS",
        .value = 0xC0000433UL,
        .description = "The attempted write operation encountered a write already in progress for some portion of the range.",
    },
    {
        .name = "STATUS_PTE_CHANGED",
        .value = 0xC0000434UL,
        .description = "The page fault mappings changed in the middle of processing a fault so the operation must be retried.",
    },
    {
        .name = "STATUS_PURGE_FAILED",
        .value = 0xC0000435UL,
        .description = "The attempt to purge this file from memory failed to purge some or all the data from memory.",
    },
    {
        .name = "STATUS_CRED_REQUIRES_CONFIRMATION",
        .value = 0xC0000440UL,
        .description = "The requested credential requires confirmation.",
    },
    {
        .name = "STATUS_CS_ENCRYPTION_INVALID_SERVER_RESPONSE",
        .value = 0xC0000441UL,
        .description = "The remote server sent an invalid response for a file being opened with Client Side Encryption.",
    },
    {
        .name = "STATUS_CS_ENCRYPTION_UNSUPPORTED_SERVER",
        .value = 0xC0000442UL,
        .description = "Client Side Encryption is not supported by the remote server even though it claims to support it.",
    },
    {
        .name = "STATUS_CS_ENCRYPTION_EXISTING_ENCRYPTED_FILE",
        .value = 0xC0000443UL,
        .description = "File is encrypted and should be opened in Client Side Encryption mode.",
    },
    {
        .name = "STATUS_CS_ENCRYPTION_NEW_ENCRYPTED_FILE",
        .value = 0xC0000444UL,
        .description = "A new encrypted file is being created and a $EFS needs to be provided.",
    },
    {
        .name = "STATUS_CS_ENCRYPTION_FILE_NOT_CSE",
        .value = 0xC0000445UL,
        .description = "The SMB client requested a CSE FSCTL on a non-CSE file.",
    },
    {
        .name = "STATUS_INVALID_LABEL",
        .value = 0xC0000446UL,
        .description = "Indicates a particular Security ID cannot be assigned as the label of an object.",
    },
    {
        .name = "STATUS_DRIVER_PROCESS_TERMINATED",
        .value = 0xC0000450UL,
        .description = "The process hosting the driver for this device has terminated.",
    },
    {
        .name = "STATUS_AMBIGUOUS_SYSTEM_DEVICE",
        .value = 0xC0000451UL,
        .description = "The requested system device cannot be identified due to multiple indistinguishable devices potentially matching the identification criteria.",
    },
    {
        .name = "STATUS_SYSTEM_DEVICE_NOT_FOUND",
        .value = 0xC0000452UL,
        .description = "The requested system device cannot be found.",
    },
    {
        .name = "STATUS_RESTART_BOOT_APPLICATION",
        .value = 0xC0000453UL,
        .description = "This boot application must be restarted.",
    },
    {
        .name = "STATUS_INSUFFICIENT_NVRAM_RESOURCES",
        .value = 0xC0000454UL,
        .description = "Insufficient NVRAM resources exist to complete the API. A reboot might be required.",
    },
    {
        .name = "STATUS_NO_RANGES_PROCESSED",
        .value = 0xC0000460UL,
        .description = "No ranges for the specified operation were able to be processed.",
    },
    {
        .name = "STATUS_DEVICE_FEATURE_NOT_SUPPORTED",
        .value = 0xC0000463UL,
        .description = "The storage device does not support Offload Write.",
    },
    {
        .name = "STATUS_DEVICE_UNREACHABLE",
        .value = 0xC0000464UL,
        .description = "Data cannot be moved because the source device cannot communicate with the destination device.",
    },
    {
        .name = "STATUS_INVALID_TOKEN",
        .value = 0xC0000465UL,
        .description = "The token representing the data is invalid or expired.",
    },
    {
        .name = "STATUS_SERVER_UNAVAILABLE",
        .value = 0xC0000466UL,
        .description = "The file server is temporarily unavailable.",
    },
    {
        .name = "STATUS_INVALID_TASK_NAME",
        .value = 0xC0000500UL,
        .description = "The specified task name is invalid.",
    },
    {
        .name = "STATUS_INVALID_TASK_INDEX",
        .value = 0xC0000501UL,
        .description = "The specified task index is invalid.",
    },
    {
        .name = "STATUS_THREAD_ALREADY_IN_TASK",
        .value = 0xC0000502UL,
        .description = "The specified thread is already joining a task.",
    },
    {
        .name = "STATUS_CALLBACK_BYPASS",
        .value = 0xC0000503UL,
        .description = "A callback has requested to bypass native code.",
    },
    {
        .name = "STATUS_FAIL_FAST_EXCEPTION",
        .value = 0xC0000602UL,
        .description = "A fail fast exception occurred. Exception handlers will not be invoked and the process will be terminated immediately.",
    },
    {
        .name = "STATUS_IMAGE_CERT_REVOKED",
        .value = 0xC0000603UL,
        .description = "Windows cannot verify the digital signature for this file. The signing certificate for this file has been revoked.",
    },
    {
        .name = "STATUS_PORT_CLOSED",
        .value = 0xC0000700UL,
        .description = "The ALPC port is closed.",
    },
    {
        .name = "STATUS_MESSAGE_LOST",
        .value = 0xC0000701UL,
        .description = "The ALPC message requested is no longer available.",
    },
    {
        .name = "STATUS_INVALID_MESSAGE",
        .value = 0xC0000702UL,
        .description = "The ALPC message supplied is invalid.",
    },
    {
        .name = "STATUS_REQUEST_CANCELED",
        .value = 0xC0000703UL,
        .description = "The ALPC message has been canceled.",
    },
    {
        .name = "STATUS_RECURSIVE_DISPATCH",
        .value = 0xC0000704UL,
        .description = "Invalid recursive dispatch attempt.",
    },
    {
        .name = "STATUS_LPC_RECEIVE_BUFFER_EXPECTED",
        .value = 0xC0000705UL,
        .description = "No receive buffer has been supplied in a synchronous request.",
    },
    {
        .name = "STATUS_LPC_INVALID_CONNECTION_USAGE",
        .value = 0xC0000706UL,
        .description = "The connection port is used in an invalid context.",
    },
    {
        .name = "STATUS_LPC_REQUESTS_NOT_ALLOWED",
        .value = 0xC0000707UL,
        .description = "The ALPC port does not accept new request messages.",
    },
    {
        .name = "STATUS_RESOURCE_IN_USE",
        .value = 0xC0000708UL,
        .description = "The resource requested is already in use.",
    },
    {
        .name = "STATUS_HARDWARE_MEMORY_ERROR",
        .value = 0xC0000709UL,
        .description = "The hardware has reported an uncorrectable memory error.",
    },
    {
        .name = "STATUS_THREADPOOL_HANDLE_EXCEPTION",
        .value = 0xC000070AUL,
        .description = "Status 0x%08x was returned, waiting on handle 0x%x for wait 0x%p, in waiter 0x%p.",
    },
    {
        .name = "STATUS_THREADPOOL_SET_EVENT_ON_COMPLETION_FAILED",
        .value = 0xC000070BUL,
        .description = "After a callback to 0x%p(0x%p), a completion call to Set event(0x%p) failed with status 0x%08x.",
    },
    {
        .name = "STATUS_THREADPOOL_RELEASE_SEMAPHORE_ON_COMPLETION_FAILED",
        .value = 0xC000070CUL,
        .description = "After a callback to 0x%p(0x%p), a completion call to ReleaseSemaphore(0x%p, %d) failed with status 0x%08x.",
    },
    {
        .name = "STATUS_THREADPOOL_RELEASE_MUTEX_ON_COMPLETION_FAILED",
        .value = 0xC000070DUL,
        .description = "After a callback to 0x%p(0x%p), a completion call to ReleaseMutex(%p) failed with status 0x%08x.",
    },
    {
        .name = "STATUS_THREADPOOL_FREE_LIBRARY_ON_COMPLETION_FAILED",
        .value = 0xC000070EUL,
        .description = "After a callback to 0x%p(0x%p), a completion call to FreeLibrary(%p) failed with status 0x%08x.",
    },
    {
        .name = "STATUS_THREADPOOL_RELEASED_DURING_OPERATION",
        .value = 0xC000070FUL,
        .description = "The thread pool 0x%p was released while a thread was posting a callback to 0x%p(0x%p) to it.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_WHILE_IMPERSONATING",
        .value = 0xC0000710UL,
        .description = "A thread pool worker thread is impersonating a client, after a callback to 0x%p(0x%p). This is unexpected, indicating that the callback is missing a call to revert the impersonation.",
    },
    {
        .name = "STATUS_APC_RETURNED_WHILE_IMPERSONATING",
        .value = 0xC0000711UL,
        .description = "A thread pool worker thread is impersonating a client, after executing an APC. This is unexpected, indicating that the APC is missing a call to revert the impersonation.",
    },
    {
        .name = "STATUS_PROCESS_IS_PROTECTED",
        .value = 0xC0000712UL,
        .description = "Either the target process, or the target thread's containing process, is a protected process.",
    },
    {
        .name = "STATUS_MCA_EXCEPTION",
        .value = 0xC0000713UL,
        .description = "A thread is getting dispatched with MCA EXCEPTION because of MCA.",
    },
    {
        .name = "STATUS_CERTIFICATE_MAPPING_NOT_UNIQUE",
        .value = 0xC0000714UL,
        .description = "The client certificate account mapping is not unique.",
    },
    {
        .name = "STATUS_SYMLINK_CLASS_DISABLED",
        .value = 0xC0000715UL,
        .description = "The symbolic link cannot be followed because its type is disabled.",
    },
    {
        .name = "STATUS_INVALID_IDN_NORMALIZATION",
        .value = 0xC0000716UL,
        .description = "Indicates that the specified string is not valid for IDN normalization.",
    },
    {
        .name = "STATUS_NO_UNICODE_TRANSLATION",
        .value = 0xC0000717UL,
        .description = "No mapping for the Unicode character exists in the target multi-byte code page.",
    },
    {
        .name = "STATUS_ALREADY_REGISTERED",
        .value = 0xC0000718UL,
        .description = "The provided callback is already registered.",
    },
    {
        .name = "STATUS_CONTEXT_MISMATCH",
        .value = 0xC0000719UL,
        .description = "The provided context did not match the target.",
    },
    {
        .name = "STATUS_PORT_ALREADY_HAS_COMPLETION_LIST",
        .value = 0xC000071AUL,
        .description = "The specified port already has a completion list.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_THREAD_PRIORITY",
        .value = 0xC000071BUL,
        .description = "A threadpool worker thread entered a callback at thread base priority 0x%x and exited at priority 0x%x. This is unexpected, indicating that the callback missed restoring the priority.",
    },
    {
        .name = "STATUS_INVALID_THREAD",
        .value = 0xC000071CUL,
        .description = "An invalid thread, handle %p, is specified for this operation. Possibly, a threadpool worker thread was specified.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_TRANSACTION",
        .value = 0xC000071DUL,
        .description = "A threadpool worker thread entered a callback, which left transaction state. This is unexpected, indicating that the callback missed clearing the transaction.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_LDR_LOCK",
        .value = 0xC000071EUL,
        .description = "A threadpool worker thread entered a callback, which left the loader lock held. This is unexpected, indicating that the callback missed releasing the lock.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_LANG",
        .value = 0xC000071FUL,
        .description = "A threadpool worker thread entered a callback, which left with preferred languages set. This is unexpected, indicating that the callback missed clearing them.",
    },
    {
        .name = "STATUS_CALLBACK_RETURNED_PRI_BACK",
        .value = 0xC0000720UL,
        .description = "A threadpool worker thread entered a callback, which left with background priorities set. This is unexpected, indicating that the callback missed restoring the original priorities.",
    },
    {
        .name = "STATUS_DISK_REPAIR_DISABLED",
        .value = 0xC0000800UL,
        .description = "The attempted operation required self healing to be enabled.",
    },
    {
        .name = "STATUS_DS_DOMAIN_RENAME_IN_PROGRESS",
        .value = 0xC0000801UL,
        .description = "The directory service cannot perform the requested operation because a domain rename operation is in progress.",
    },
    {
        .name = "STATUS_DISK_QUOTA_EXCEEDED",
        .value = 0xC0000802UL,
        .description = "An operation failed because the storage quota was exceeded.",
    },
    {
        .name = "STATUS_CONTENT_BLOCKED",
        .value = 0xC0000804UL,
        .description = "An operation failed because the content was blocked.",
    },
    {
        .name = "STATUS_BAD_CLUSTERS",
        .value = 0xC0000805UL,
        .description = "The operation could not be completed due to bad clusters on disk.",
    },
    {
        .name = "STATUS_VOLUME_DIRTY",
        .value = 0xC0000806UL,
        .description = "The operation could not be completed because the volume is dirty. Please run the Chkdsk utility and try again.",
    },
    {
        .name = "STATUS_FILE_CHECKED_OUT",
        .value = 0xC0000901UL,
        .description = "This file is checked out or locked for editing by another user.",
    },
    {
        .name = "STATUS_CHECKOUT_REQUIRED",
        .value = 0xC0000902UL,
        .description = "The file must be checked out before saving changes.",
    },
    {
        .name = "STATUS_BAD_FILE_TYPE",
        .value = 0xC0000903UL,
        .description = "The file type being saved or retrieved has been blocked.",
    },
    {
        .name = "STATUS_FILE_TOO_LARGE",
        .value = 0xC0000904UL,
        .description = "The file size exceeds the limit allowed and cannot be saved.",
    },
    {
        .name = "STATUS_FORMS_AUTH_REQUIRED",
        .value = 0xC0000905UL,
        .description = "Access Denied. Before opening files in this location, you must first browse to the e.g. site and select the option to log on automatically.",
    },
    {
        .name = "STATUS_VIRUS_INFECTED",
        .value = 0xC0000906UL,
        .description = "The operation did not complete successfully because the file contains a virus.",
    },
    {
        .name = "STATUS_VIRUS_DELETED",
        .value = 0xC0000907UL,
        .description = "This file contains a virus and cannot be opened. Due to the nature of this virus, the file has been removed from this location.",
    },
    {
        .name = "STATUS_BAD_MCFG_TABLE",
        .value = 0xC0000908UL,
        .description = "The resources required for this device conflict with the MCFG table.",
    },
    {
        .name = "STATUS_BAD_DATA",
        .value = 0xC000090BUL,
        .description = "Bad data.",
    },
    {
        .name = "STATUS_CANNOT_BREAK_OPLOCK",
        .value = 0xC0000909UL,
        .description = "The operation did not complete successfully because it would cause an oplock to be broken. The caller has requested that existing oplocks not be broken.",
    },
    {
        .name = "STATUS_WOW_ASSERTION",
        .value = 0xC0009898UL,
        .description = "WOW Assertion Error.",
    },
    {
        .name = "STATUS_INVALID_SIGNATURE",
        .value = 0xC000A000UL,
        .description = "The cryptographic signature is invalid.",
    },
    {
        .name = "STATUS_HMAC_NOT_SUPPORTED",
        .value = 0xC000A001UL,
        .description = "The cryptographic provider does not support HMAC.",
    },
    {
        .name = "STATUS_AUTH_TAG_MISMATCH",
        .value = 0xC000A002UL,
        .description = "The computed authentication tag did not match the input authentication tag.",
    },
    {
        .name = "STATUS_IPSEC_QUEUE_OVERFLOW",
        .value = 0xC000A010UL,
        .description = "The IPsec queue overflowed.",
    },
    {
        .name = "STATUS_ND_QUEUE_OVERFLOW",
        .value = 0xC000A011UL,
        .description = "The neighbor discovery queue overflowed.",
    },
    {
        .name = "STATUS_HOPLIMIT_EXCEEDED",
        .value = 0xC000A012UL,
        .description = "An Internet Control Message Protocol (ICMP) hop limit exceeded error was received.",
    },
    {
        .name = "STATUS_PROTOCOL_NOT_SUPPORTED",
        .value = 0xC000A013UL,
        .description = "The protocol is not installed on the local machine.",
    },
    {
        .name = "STATUS_LOST_WRITEBEHIND_DATA_NETWORK_DISCONNECTED",
        .value = 0xC000A080UL,
        .description = "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error might be caused by network connectivity issues. Try to save this file elsewhere.",
    },
    {
        .name = "STATUS_LOST_WRITEBEHIND_DATA_NETWORK_SERVER_ERROR",
        .value = 0xC000A081UL,
        .description = "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error was returned by the server on which the file exists. Try to save this file elsewhere.",
    },
    {
        .name = "STATUS_LOST_WRITEBEHIND_DATA_LOCAL_DISK_ERROR",
        .value = 0xC000A082UL,
        .description = "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error might be caused if the device has been removed or the media is write-protected.",
    },
    {
        .name = "STATUS_XML_PARSE_ERROR",
        .value = 0xC000A083UL,
        .description = "Windows was unable to parse the requested XML data.",
    },
    {
        .name = "STATUS_XMLDSIG_ERROR",
        .value = 0xC000A084UL,
        .description = "An error was encountered while processing an XML digital signature.",
    },
    {
        .name = "STATUS_WRONG_COMPARTMENT",
        .value = 0xC000A085UL,
        .description = "This indicates that the caller made the connection request in the wrong routing compartment.",
    },
    {
        .name = "STATUS_AUTHIP_FAILURE",
        .value = 0xC000A086UL,
        .description = "This indicates that there was an AuthIP failure when attempting to connect to the remote host.",
    },
    {
        .name = "STATUS_DS_OID_MAPPED_GROUP_CANT_HAVE_MEMBERS",
        .value = 0xC000A087UL,
        .description = "OID mapped groups cannot have members.",
    },
    {
        .name = "STATUS_DS_OID_NOT_FOUND",
        .value = 0xC000A088UL,
        .description = "The specified OID cannot be found.",
    },
    {
        .name = "STATUS_HASH_NOT_SUPPORTED",
        .value = 0xC000A100UL,
        .description = "Hash generation for the specified version and hash type is not enabled on server.",
    },
    {
        .name = "STATUS_HASH_NOT_PRESENT",
        .value = 0xC000A101UL,
        .description = "The hash requests is not present or not up to date with the current file contents.",
    },
    {
        .name = "STATUS_OFFLOAD_READ_FLT_NOT_SUPPORTED",
        .value = 0xC000A2A1UL,
        .description = "A file system filter on the server has not opted in for Offload Read support.",
    },
    {
        .name = "STATUS_OFFLOAD_WRITE_FLT_NOT_SUPPORTED",
        .value = 0xC000A2A2UL,
        .description = "A file system filter on the server has not opted in for Offload Write support.",
    },
    {
        .name = "STATUS_OFFLOAD_READ_FILE_NOT_SUPPORTED",
        .value = 0xC000A2A3UL,
        .description = "Offload read operations cannot be performed on: Compressed files Sparse files Encrypted files File system metadata files",
    },
    {
        .name = "STATUS_OFFLOAD_WRITE_FILE_NOT_SUPPORTED",
        .value = 0xC000A2A4UL,
        .description = "Offload write operations cannot be performed on: Compressed files Sparse files Encrypted files File system metadata files",
    },
    {
        .name = "DBG_NO_STATE_CHANGE",
        .value = 0xC0010001UL,
        .description = "The debugger did not perform a state change.",
    },
    {
        .name = "DBG_APP_NOT_IDLE",
        .value = 0xC0010002UL,
        .description = "The debugger found that the application is not idle.",
    },
    {
        .name = "RPC_NT_INVALID_STRING_BINDING",
        .value = 0xC0020001UL,
        .description = "The string binding is invalid.",
    },
    {
        .name = "RPC_NT_WRONG_KIND_OF_BINDING",
        .value = 0xC0020002UL,
        .description = "The binding handle is not the correct type.",
    },
    {
        .name = "RPC_NT_INVALID_BINDING",
        .value = 0xC0020003UL,
        .description = "The binding handle is invalid.",
    },
    {
        .name = "RPC_NT_PROTSEQ_NOT_SUPPORTED",
        .value = 0xC0020004UL,
        .description = "The RPC protocol sequence is not supported.",
    },
    {
        .name = "RPC_NT_INVALID_RPC_PROTSEQ",
        .value = 0xC0020005UL,
        .description = "The RPC protocol sequence is invalid.",
    },
    {
        .name = "RPC_NT_INVALID_STRING_UUID",
        .value = 0xC0020006UL,
        .description = "The string UUID is invalid.",
    },
    {
        .name = "RPC_NT_INVALID_ENDPOINT_FORMAT",
        .value = 0xC0020007UL,
        .description = "The endpoint format is invalid.",
    },
    {
        .name = "RPC_NT_INVALID_NET_ADDR",
        .value = 0xC0020008UL,
        .description = "The network address is invalid.",
    },
    {
        .name = "RPC_NT_NO_ENDPOINT_FOUND",
        .value = 0xC0020009UL,
        .description = "No endpoint was found.",
    },
    {
        .name = "RPC_NT_INVALID_TIMEOUT",
        .value = 0xC002000AUL,
        .description = "The time-out value is invalid.",
    },
    {
        .name = "RPC_NT_OBJECT_NOT_FOUND",
        .value = 0xC002000BUL,
        .description = "The object UUID was not found.",
    },
    {
        .name = "RPC_NT_ALREADY_REGISTERED",
        .value = 0xC002000CUL,
        .description = "The object UUID has already been registered.",
    },
    {
        .name = "RPC_NT_TYPE_ALREADY_REGISTERED",
        .value = 0xC002000DUL,
        .description = "The type UUID has already been registered.",
    },
    {
        .name = "RPC_NT_ALREADY_LISTENING",
        .value = 0xC002000EUL,
        .description = "The RPC server is already listening.",
    },
    {
        .name = "RPC_NT_NO_PROTSEQS_REGISTERED",
        .value = 0xC002000FUL,
        .description = "No protocol sequences have been registered.",
    },
    {
        .name = "RPC_NT_NOT_LISTENING",
        .value = 0xC0020010UL,
        .description = "The RPC server is not listening.",
    },
    {
        .name = "RPC_NT_UNKNOWN_MGR_TYPE",
        .value = 0xC0020011UL,
        .description = "The manager type is unknown.",
    },
    {
        .name = "RPC_NT_UNKNOWN_IF",
        .value = 0xC0020012UL,
        .description = "The interface is unknown.",
    },
    {
        .name = "RPC_NT_NO_BINDINGS",
        .value = 0xC0020013UL,
        .description = "There are no bindings.",
    },
    {
        .name = "RPC_NT_NO_PROTSEQS",
        .value = 0xC0020014UL,
        .description = "There are no protocol sequences.",
    },
    {
        .name = "RPC_NT_CANT_CREATE_ENDPOINT",
        .value = 0xC0020015UL,
        .description = "The endpoint cannot be created.",
    },
    {
        .name = "RPC_NT_OUT_OF_RESOURCES",
        .value = 0xC0020016UL,
        .description = "Insufficient resources are available to complete this operation.",
    },
    {
        .name = "RPC_NT_SERVER_UNAVAILABLE",
        .value = 0xC0020017UL,
        .description = "The RPC server is unavailable.",
    },
    {
        .name = "RPC_NT_SERVER_TOO_BUSY",
        .value = 0xC0020018UL,
        .description = "The RPC server is too busy to complete this operation.",
    },
    {
        .name = "RPC_NT_INVALID_NETWORK_OPTIONS",
        .value = 0xC0020019UL,
        .description = "The network options are invalid.",
    },
    {
        .name = "RPC_NT_NO_CALL_ACTIVE",
        .value = 0xC002001AUL,
        .description = "No RPCs are active on this thread.",
    },
    {
        .name = "RPC_NT_CALL_FAILED",
        .value = 0xC002001BUL,
        .description = "The RPC failed.",
    },
    {
        .name = "RPC_NT_CALL_FAILED_DNE",
        .value = 0xC002001CUL,
        .description = "The RPC failed and did not execute.",
    },
    {
        .name = "RPC_NT_PROTOCOL_ERROR",
        .value = 0xC002001DUL,
        .description = "An RPC protocol error occurred.",
    },
    {
        .name = "RPC_NT_UNSUPPORTED_TRANS_SYN",
        .value = 0xC002001FUL,
        .description = "The RPC server does not support the transfer syntax.",
    },
    {
        .name = "RPC_NT_UNSUPPORTED_TYPE",
        .value = 0xC0020021UL,
        .description = "The type UUID is not supported.",
    },
    {
        .name = "RPC_NT_INVALID_TAG",
        .value = 0xC0020022UL,
        .description = "The tag is invalid.",
    },
    {
        .name = "RPC_NT_INVALID_BOUND",
        .value = 0xC0020023UL,
        .description = "The array bounds are invalid.",
    },
    {
        .name = "RPC_NT_NO_ENTRY_NAME",
        .value = 0xC0020024UL,
        .description = "The binding does not contain an entry name.",
    },
    {
        .name = "RPC_NT_INVALID_NAME_SYNTAX",
        .value = 0xC0020025UL,
        .description = "The name syntax is invalid.",
    },
    {
        .name = "RPC_NT_UNSUPPORTED_NAME_SYNTAX",
        .value = 0xC0020026UL,
        .description = "The name syntax is not supported.",
    },
    {
        .name = "RPC_NT_UUID_NO_ADDRESS",
        .value = 0xC0020028UL,
        .description = "No network address is available to construct a UUID.",
    },
    {
        .name = "RPC_NT_DUPLICATE_ENDPOINT",
        .value = 0xC0020029UL,
        .description = "The endpoint is a duplicate.",
    },
    {
        .name = "RPC_NT_UNKNOWN_AUTHN_TYPE",
        .value = 0xC002002AUL,
        .description = "The authentication type is unknown.",
    },
    {
        .name = "RPC_NT_MAX_CALLS_TOO_SMALL",
        .value = 0xC002002BUL,
        .description = "The maximum number of calls is too small.",
    },
    {
        .name = "RPC_NT_STRING_TOO_LONG",
        .value = 0xC002002CUL,
        .description = "The string is too long.",
    },
    {
        .name = "RPC_NT_PROTSEQ_NOT_FOUND",
        .value = 0xC002002DUL,
        .description = "The RPC protocol sequence was not found.",
    },
    {
        .name = "RPC_NT_PROCNUM_OUT_OF_RANGE",
        .value = 0xC002002EUL,
        .description = "The procedure number is out of range.",
    },
    {
        .name = "RPC_NT_BINDING_HAS_NO_AUTH",
        .value = 0xC002002FUL,
        .description = "The binding does not contain any authentication information.",
    },
    {
        .name = "RPC_NT_UNKNOWN_AUTHN_SERVICE",
        .value = 0xC0020030UL,
        .description = "The authentication service is unknown.",
    },
    {
        .name = "RPC_NT_UNKNOWN_AUTHN_LEVEL",
        .value = 0xC0020031UL,
        .description = "The authentication level is unknown.",
    },
    {
        .name = "RPC_NT_INVALID_AUTH_IDENTITY",
        .value = 0xC0020032UL,
        .description = "The security context is invalid.",
    },
    {
        .name = "RPC_NT_UNKNOWN_AUTHZ_SERVICE",
        .value = 0xC0020033UL,
        .description = "The authorization service is unknown.",
    },
    {
        .name = "EPT_NT_INVALID_ENTRY",
        .value = 0xC0020034UL,
        .description = "The entry is invalid.",
    },
    {
        .name = "EPT_NT_CANT_PERFORM_OP",
        .value = 0xC0020035UL,
        .description = "The operation cannot be performed.",
    },
    {
        .name = "EPT_NT_NOT_REGISTERED",
        .value = 0xC0020036UL,
        .description = "No more endpoints are available from the endpoint mapper.",
    },
    {
        .name = "RPC_NT_NOTHING_TO_EXPORT",
        .value = 0xC0020037UL,
        .description = "No interfaces have been exported.",
    },
    {
        .name = "RPC_NT_INCOMPLETE_NAME",
        .value = 0xC0020038UL,
        .description = "The entry name is incomplete.",
    },
    {
        .name = "RPC_NT_INVALID_VERS_OPTION",
        .value = 0xC0020039UL,
        .description = "The version option is invalid.",
    },
    {
        .name = "RPC_NT_NO_MORE_MEMBERS",
        .value = 0xC002003AUL,
        .description = "There are no more members.",
    },
    {
        .name = "RPC_NT_NOT_ALL_OBJS_UNEXPORTED",
        .value = 0xC002003BUL,
        .description = "There is nothing to unexport.",
    },
    {
        .name = "RPC_NT_INTERFACE_NOT_FOUND",
        .value = 0xC002003CUL,
        .description = "The interface was not found.",
    },
    {
        .name = "RPC_NT_ENTRY_ALREADY_EXISTS",
        .value = 0xC002003DUL,
        .description = "The entry already exists.",
    },
    {
        .name = "RPC_NT_ENTRY_NOT_FOUND",
        .value = 0xC002003EUL,
        .description = "The entry was not found.",
    },
    {
        .name = "RPC_NT_NAME_SERVICE_UNAVAILABLE",
        .value = 0xC002003FUL,
        .description = "The name service is unavailable.",
    },
    {
        .name = "RPC_NT_INVALID_NAF_ID",
        .value = 0xC0020040UL,
        .description = "The network address family is invalid.",
    },
    {
        .name = "RPC_NT_CANNOT_SUPPORT",
        .value = 0xC0020041UL,
        .description = "The requested operation is not supported.",
    },
    {
        .name = "RPC_NT_NO_CONTEXT_AVAILABLE",
        .value = 0xC0020042UL,
        .description = "No security context is available to allow impersonation.",
    },
    {
        .name = "RPC_NT_INTERNAL_ERROR",
        .value = 0xC0020043UL,
        .description = "An internal error occurred in the RPC.",
    },
    {
        .name = "RPC_NT_ZERO_DIVIDE",
        .value = 0xC0020044UL,
        .description = "The RPC server attempted to divide an integer by zero.",
    },
    {
        .name = "RPC_NT_ADDRESS_ERROR",
        .value = 0xC0020045UL,
        .description = "An addressing error occurred in the RPC server.",
    },
    {
        .name = "RPC_NT_FP_DIV_ZERO",
        .value = 0xC0020046UL,
        .description = "A floating point operation at the RPC server caused a divide by zero.",
    },
    {
        .name = "RPC_NT_FP_UNDERFLOW",
        .value = 0xC0020047UL,
        .description = "A floating point underflow occurred at the RPC server.",
    },
    {
        .name = "RPC_NT_FP_OVERFLOW",
        .value = 0xC0020048UL,
        .description = "A floating point overflow occurred at the RPC server.",
    },
    {
        .name = "RPC_NT_CALL_IN_PROGRESS",
        .value = 0xC0020049UL,
        .description = "An RPC is already in progress for this thread.",
    },
    {
        .name = "RPC_NT_NO_MORE_BINDINGS",
        .value = 0xC002004AUL,
        .description = "There are no more bindings.",
    },
    {
        .name = "RPC_NT_GROUP_MEMBER_NOT_FOUND",
        .value = 0xC002004BUL,
        .description = "The group member was not found.",
    },
    {
        .name = "EPT_NT_CANT_CREATE",
        .value = 0xC002004CUL,
        .description = "The endpoint mapper database entry could not be created.",
    },
    {
        .name = "RPC_NT_INVALID_OBJECT",
        .value = 0xC002004DUL,
        .description = "The object UUID is the nil UUID.",
    },
    {
        .name = "RPC_NT_NO_INTERFACES",
        .value = 0xC002004FUL,
        .description = "No interfaces have been registered.",
    },
    {
        .name = "RPC_NT_CALL_CANCELLED",
        .value = 0xC0020050UL,
        .description = "The RPC was canceled.",
    },
    {
        .name = "RPC_NT_BINDING_INCOMPLETE",
        .value = 0xC0020051UL,
        .description = "The binding handle does not contain all the required information.",
    },
    {
        .name = "RPC_NT_COMM_FAILURE",
        .value = 0xC0020052UL,
        .description = "A communications failure occurred during an RPC.",
    },
    {
        .name = "RPC_NT_UNSUPPORTED_AUTHN_LEVEL",
        .value = 0xC0020053UL,
        .description = "The requested authentication level is not supported.",
    },
    {
        .name = "RPC_NT_NO_PRINC_NAME",
        .value = 0xC0020054UL,
        .description = "No principal name was registered.",
    },
    {
        .name = "RPC_NT_NOT_RPC_ERROR",
        .value = 0xC0020055UL,
        .description = "The error specified is not a valid Windows RPC error code.",
    },
    {
        .name = "RPC_NT_SEC_PKG_ERROR",
        .value = 0xC0020057UL,
        .description = "A security package-specific error occurred.",
    },
    {
        .name = "RPC_NT_NOT_CANCELLED",
        .value = 0xC0020058UL,
        .description = "The thread was not canceled.",
    },
    {
        .name = "RPC_NT_INVALID_ASYNC_HANDLE",
        .value = 0xC0020062UL,
        .description = "Invalid asynchronous RPC handle.",
    },
    {
        .name = "RPC_NT_INVALID_ASYNC_CALL",
        .value = 0xC0020063UL,
        .description = "Invalid asynchronous RPC call handle for this operation.",
    },
    {
        .name = "RPC_NT_PROXY_ACCESS_DENIED",
        .value = 0xC0020064UL,
        .description = "Access to the HTTP proxy is denied.",
    },
    {
        .name = "RPC_NT_NO_MORE_ENTRIES",
        .value = 0xC0030001UL,
        .description = "The list of RPC servers available for auto-handle binding has been exhausted.",
    },
    {
        .name = "RPC_NT_SS_CHAR_TRANS_OPEN_FAIL",
        .value = 0xC0030002UL,
        .description = "The file designated by DCERPCCHARTRANS cannot be opened.",
    },
    {
        .name = "RPC_NT_SS_CHAR_TRANS_SHORT_FILE",
        .value = 0xC0030003UL,
        .description = "The file containing the character translation table has fewer than 512 bytes.",
    },
    {
        .name = "RPC_NT_SS_IN_NULL_CONTEXT",
        .value = 0xC0030004UL,
        .description = "A null context handle is passed as an [in] parameter.",
    },
    {
        .name = "RPC_NT_SS_CONTEXT_MISMATCH",
        .value = 0xC0030005UL,
        .description = "The context handle does not match any known context handles.",
    },
    {
        .name = "RPC_NT_SS_CONTEXT_DAMAGED",
        .value = 0xC0030006UL,
        .description = "The context handle changed during a call.",
    },
    {
        .name = "RPC_NT_SS_HANDLES_MISMATCH",
        .value = 0xC0030007UL,
        .description = "The binding handles passed to an RPC do not match.",
    },
    {
        .name = "RPC_NT_SS_CANNOT_GET_CALL_HANDLE",
        .value = 0xC0030008UL,
        .description = "The stub is unable to get the call handle.",
    },
    {
        .name = "RPC_NT_NULL_REF_POINTER",
        .value = 0xC0030009UL,
        .description = "A null reference pointer was passed to the stub.",
    },
    {
        .name = "RPC_NT_ENUM_VALUE_OUT_OF_RANGE",
        .value = 0xC003000AUL,
        .description = "The enumeration value is out of range.",
    },
    {
        .name = "RPC_NT_BYTE_COUNT_TOO_SMALL",
        .value = 0xC003000BUL,
        .description = "The byte count is too small.",
    },
    {
        .name = "RPC_NT_BAD_STUB_DATA",
        .value = 0xC003000CUL,
        .description = "The stub received bad data.",
    },
    {
        .name = "RPC_NT_INVALID_ES_ACTION",
        .value = 0xC0030059UL,
        .description = "Invalid operation on the encoding/decoding handle.",
    },
    {
        .name = "RPC_NT_WRONG_ES_VERSION",
        .value = 0xC003005AUL,
        .description = "Incompatible version of the serializing package.",
    },
    {
        .name = "RPC_NT_WRONG_STUB_VERSION",
        .value = 0xC003005BUL,
        .description = "Incompatible version of the RPC stub.",
    },
    {
        .name = "RPC_NT_INVALID_PIPE_OBJECT",
        .value = 0xC003005CUL,
        .description = "The RPC pipe object is invalid or corrupt.",
    },
    {
        .name = "RPC_NT_INVALID_PIPE_OPERATION",
        .value = 0xC003005DUL,
        .description = "An invalid operation was attempted on an RPC pipe object.",
    },
    {
        .name = "RPC_NT_WRONG_PIPE_VERSION",
        .value = 0xC003005EUL,
        .description = "Unsupported RPC pipe version.",
    },
    {
        .name = "RPC_NT_PIPE_CLOSED",
        .value = 0xC003005FUL,
        .description = "The RPC pipe object has already been closed.",
    },
    {
        .name = "RPC_NT_PIPE_DISCIPLINE_ERROR",
        .value = 0xC0030060UL,
        .description = "The RPC call completed before all pipes were processed.",
    },
    {
        .name = "RPC_NT_PIPE_EMPTY",
        .value = 0xC0030061UL,
        .description = "No more data is available from the RPC pipe.",
    },
    {
        .name = "STATUS_PNP_BAD_MPS_TABLE",
        .value = 0xC0040035UL,
        .description = "A device is missing in the system BIOS MPS table. This device will not be used. Contact your system vendor for a system BIOS update.",
    },
    {
        .name = "STATUS_PNP_TRANSLATION_FAILED",
        .value = 0xC0040036UL,
        .description = "A translator failed to translate resources.",
    },
    {
        .name = "STATUS_PNP_IRQ_TRANSLATION_FAILED",
        .value = 0xC0040037UL,
        .description = "An IRQ translator failed to translate resources.",
    },
    {
        .name = "STATUS_PNP_INVALID_ID",
        .value = 0xC0040038UL,
        .description = "Driver %2 returned an invalid ID for a child device (%3).",
    },
    {
        .name = "STATUS_IO_REISSUE_AS_CACHED",
        .value = 0xC0040039UL,
        .description = "Reissue the given operation as a cached I/O operation",
    },
    {
        .name = "STATUS_CTX_WINSTATION_NAME_INVALID",
        .value = 0xC00A0001UL,
        .description = "Session name %1 is invalid.",
    },
    {
        .name = "STATUS_CTX_INVALID_PD",
        .value = 0xC00A0002UL,
        .description = "The protocol driver %1 is invalid.",
    },
    {
        .name = "STATUS_CTX_PD_NOT_FOUND",
        .value = 0xC00A0003UL,
        .description = "The protocol driver %1 was not found in the system path.",
    },
    {
        .name = "STATUS_CTX_CLOSE_PENDING",
        .value = 0xC00A0006UL,
        .description = "A close operation is pending on the terminal connection.",
    },
    {
        .name = "STATUS_CTX_NO_OUTBUF",
        .value = 0xC00A0007UL,
        .description = "No free output buffers are available.",
    },
    {
        .name = "STATUS_CTX_MODEM_INF_NOT_FOUND",
        .value = 0xC00A0008UL,
        .description = "The MODEM.INF file was not found.",
    },
    {
        .name = "STATUS_CTX_INVALID_MODEMNAME",
        .value = 0xC00A0009UL,
        .description = "The modem (%1) was not found in the MODEM.INF file.",
    },
    {
        .name = "STATUS_CTX_RESPONSE_ERROR",
        .value = 0xC00A000AUL,
        .description = "The modem did not accept the command sent to it. Verify that the configured modem name matches the attached modem.",
    },
    {
        .name = "STATUS_CTX_MODEM_RESPONSE_TIMEOUT",
        .value = 0xC00A000BUL,
        .description = "The modem did not respond to the command sent to it. Verify that the modem cable is properly attached and the modem is turned on.",
    },
    {
        .name = "STATUS_CTX_MODEM_RESPONSE_NO_CARRIER",
        .value = 0xC00A000CUL,
        .description = "Carrier detection has failed or the carrier has been dropped due to disconnection.",
    },
    {
        .name = "STATUS_CTX_MODEM_RESPONSE_NO_DIALTONE",
        .value = 0xC00A000DUL,
        .description = "A dial tone was not detected within the required time. Verify that the phone cable is properly attached and functional.",
    },
    {
        .name = "STATUS_CTX_MODEM_RESPONSE_BUSY",
        .value = 0xC00A000EUL,
        .description = "A busy signal was detected at a remote site on callback.",
    },
    {
        .name = "STATUS_CTX_MODEM_RESPONSE_VOICE",
        .value = 0xC00A000FUL,
        .description = "A voice was detected at a remote site on callback.",
    },
    {
        .name = "STATUS_CTX_TD_ERROR",
        .value = 0xC00A0010UL,
        .description = "Transport driver error.",
    },
    {
        .name = "STATUS_CTX_LICENSE_CLIENT_INVALID",
        .value = 0xC00A0012UL,
        .description = "The client you are using is not licensed to use this system. Your logon request is denied.",
    },
    {
        .name = "STATUS_CTX_LICENSE_NOT_AVAILABLE",
        .value = 0xC00A0013UL,
        .description = "The system has reached its licensed logon limit. Try again later.",
    },
    {
        .name = "STATUS_CTX_LICENSE_EXPIRED",
        .value = 0xC00A0014UL,
        .description = "The system license has expired. Your logon request is denied.",
    },
    {
        .name = "STATUS_CTX_WINSTATION_NOT_FOUND",
        .value = 0xC00A0015UL,
        .description = "The specified session cannot be found.",
    },
    {
        .name = "STATUS_CTX_WINSTATION_NAME_COLLISION",
        .value = 0xC00A0016UL,
        .description = "The specified session name is already in use.",
    },
    {
        .name = "STATUS_CTX_WINSTATION_BUSY",
        .value = 0xC00A0017UL,
        .description = "The requested operation cannot be completed because the terminal connection is currently processing a connect, disconnect, reset, or delete operation.",
    },
    {
        .name = "STATUS_CTX_BAD_VIDEO_MODE",
        .value = 0xC00A0018UL,
        .description = "An attempt has been made to connect to a session whose video mode is not supported by the current client.",
    },
    {
        .name = "STATUS_CTX_GRAPHICS_INVALID",
        .value = 0xC00A0022UL,
        .description = "The application attempted to enable DOS graphics mode. DOS graphics mode is not supported.",
    },
    {
        .name = "STATUS_CTX_NOT_CONSOLE",
        .value = 0xC00A0024UL,
        .description = "The requested operation can be performed only on the system console. This is most often the result of a driver or system DLL requiring direct console access.",
    },
    {
        .name = "STATUS_CTX_CLIENT_QUERY_TIMEOUT",
        .value = 0xC00A0026UL,
        .description = "The client failed to respond to the server connect message.",
    },
    {
        .name = "STATUS_CTX_CONSOLE_DISCONNECT",
        .value = 0xC00A0027UL,
        .description = "Disconnecting the console session is not supported.",
    },
    {
        .name = "STATUS_CTX_CONSOLE_CONNECT",
        .value = 0xC00A0028UL,
        .description = "Reconnecting a disconnected session to the console is not supported.",
    },
    {
        .name = "STATUS_CTX_SHADOW_DENIED",
        .value = 0xC00A002AUL,
        .description = "The request to control another session remotely was denied.",
    },
    {
        .name = "STATUS_CTX_WINSTATION_ACCESS_DENIED",
        .value = 0xC00A002BUL,
        .description = "A process has requested access to a session, but has not been granted those access rights.",
    },
    {
        .name = "STATUS_CTX_INVALID_WD",
        .value = 0xC00A002EUL,
        .description = "The terminal connection driver %1 is invalid.",
    },
    {
        .name = "STATUS_CTX_WD_NOT_FOUND",
        .value = 0xC00A002FUL,
        .description = "The terminal connection driver %1 was not found in the system path.",
    },
    {
        .name = "STATUS_CTX_SHADOW_INVALID",
        .value = 0xC00A0030UL,
        .description = "The requested session cannot be controlled remotely. You cannot control your own session, a session that is trying to control your session, a session that has no user logged on, or other sessions from the console.",
    },
    {
        .name = "STATUS_CTX_SHADOW_DISABLED",
        .value = 0xC00A0031UL,
        .description = "The requested session is not configured to allow remote control.",
    },
    {
        .name = "STATUS_RDP_PROTOCOL_ERROR",
        .value = 0xC00A0032UL,
        .description = "The RDP protocol component %2 detected an error in the protocol stream and has disconnected the client.",
    },
    {
        .name = "STATUS_CTX_CLIENT_LICENSE_NOT_SET",
        .value = 0xC00A0033UL,
        .description = "Your request to connect to this terminal server has been rejected. Your terminal server client license number has not been entered for this copy of the terminal client. Contact your system administrator for help in entering a valid, unique license number for this terminal server client. Click OK to continue.",
    },
    {
        .name = "STATUS_CTX_CLIENT_LICENSE_IN_USE",
        .value = 0xC00A0034UL,
        .description = "Your request to connect to this terminal server has been rejected. Your terminal server client license number is currently being used by another user. Contact your system administrator to obtain a new copy of the terminal server client with a valid, unique license number. Click OK to continue.",
    },
    {
        .name = "STATUS_CTX_SHADOW_ENDED_BY_MODE_CHANGE",
        .value = 0xC00A0035UL,
        .description = "The remote control of the console was terminated because the display mode was changed. Changing the display mode in a remote control session is not supported.",
    },
    {
        .name = "STATUS_CTX_SHADOW_NOT_RUNNING",
        .value = 0xC00A0036UL,
        .description = "Remote control could not be terminated because the specified session is not currently being remotely controlled.",
    },
    {
        .name = "STATUS_CTX_LOGON_DISABLED",
        .value = 0xC00A0037UL,
        .description = "Your interactive logon privilege has been disabled. Contact your system administrator.",
    },
    {
        .name = "STATUS_CTX_SECURITY_LAYER_ERROR",
        .value = 0xC00A0038UL,
        .description = "The terminal server security layer detected an error in the protocol stream and has disconnected the client.",
    },
    {
        .name = "STATUS_TS_INCOMPATIBLE_SESSIONS",
        .value = 0xC00A0039UL,
        .description = "The target session is incompatible with the current session.",
    },
    {
        .name = "STATUS_MUI_FILE_NOT_FOUND",
        .value = 0xC00B0001UL,
        .description = "The resource loader failed to find an MUI file.",
    },
    {
        .name = "STATUS_MUI_INVALID_FILE",
        .value = 0xC00B0002UL,
        .description = "The resource loader failed to load an MUI file because the file failed to pass validation.",
    },
    {
        .name = "STATUS_MUI_INVALID_RC_CONFIG",
        .value = 0xC00B0003UL,
        .description = "The RC manifest is corrupted with garbage data, is an unsupported version, or is missing a required item.",
    },
    {
        .name = "STATUS_MUI_INVALID_LOCALE_NAME",
        .value = 0xC00B0004UL,
        .description = "The RC manifest has an invalid culture name.",
    },
    {
        .name = "STATUS_MUI_INVALID_ULTIMATEFALLBACK_NAME",
        .value = 0xC00B0005UL,
        .description = "The RC manifest has and invalid ultimate fallback name.",
    },
    {
        .name = "STATUS_MUI_FILE_NOT_LOADED",
        .value = 0xC00B0006UL,
        .description = "The resource loader cache does not have a loaded MUI entry.",
    },
    {
        .name = "STATUS_RESOURCE_ENUM_USER_STOP",
        .value = 0xC00B0007UL,
        .description = "The user stopped resource enumeration.",
    },
    {
        .name = "STATUS_CLUSTER_INVALID_NODE",
        .value = 0xC0130001UL,
        .description = "The cluster node is not valid.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_EXISTS",
        .value = 0xC0130002UL,
        .description = "The cluster node already exists.",
    },
    {
        .name = "STATUS_CLUSTER_JOIN_IN_PROGRESS",
        .value = 0xC0130003UL,
        .description = "A node is in the process of joining the cluster.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_NOT_FOUND",
        .value = 0xC0130004UL,
        .description = "The cluster node was not found.",
    },
    {
        .name = "STATUS_CLUSTER_LOCAL_NODE_NOT_FOUND",
        .value = 0xC0130005UL,
        .description = "The cluster local node information was not found.",
    },
    {
        .name = "STATUS_CLUSTER_NETWORK_EXISTS",
        .value = 0xC0130006UL,
        .description = "The cluster network already exists.",
    },
    {
        .name = "STATUS_CLUSTER_NETWORK_NOT_FOUND",
        .value = 0xC0130007UL,
        .description = "The cluster network was not found.",
    },
    {
        .name = "STATUS_CLUSTER_NETINTERFACE_EXISTS",
        .value = 0xC0130008UL,
        .description = "The cluster network interface already exists.",
    },
    {
        .name = "STATUS_CLUSTER_NETINTERFACE_NOT_FOUND",
        .value = 0xC0130009UL,
        .description = "The cluster network interface was not found.",
    },
    {
        .name = "STATUS_CLUSTER_INVALID_REQUEST",
        .value = 0xC013000AUL,
        .description = "The cluster request is not valid for this object.",
    },
    {
        .name = "STATUS_CLUSTER_INVALID_NETWORK_PROVIDER",
        .value = 0xC013000BUL,
        .description = "The cluster network provider is not valid.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_DOWN",
        .value = 0xC013000CUL,
        .description = "The cluster node is down.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_UNREACHABLE",
        .value = 0xC013000DUL,
        .description = "The cluster node is not reachable.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_NOT_MEMBER",
        .value = 0xC013000EUL,
        .description = "The cluster node is not a member of the cluster.",
    },
    {
        .name = "STATUS_CLUSTER_JOIN_NOT_IN_PROGRESS",
        .value = 0xC013000FUL,
        .description = "A cluster join operation is not in progress.",
    },
    {
        .name = "STATUS_CLUSTER_INVALID_NETWORK",
        .value = 0xC0130010UL,
        .description = "The cluster network is not valid.",
    },
    {
        .name = "STATUS_CLUSTER_NO_NET_ADAPTERS",
        .value = 0xC0130011UL,
        .description = "No network adapters are available.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_UP",
        .value = 0xC0130012UL,
        .description = "The cluster node is up.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_PAUSED",
        .value = 0xC0130013UL,
        .description = "The cluster node is paused.",
    },
    {
        .name = "STATUS_CLUSTER_NODE_NOT_PAUSED",
        .value = 0xC0130014UL,
        .description = "The cluster node is not paused.",
    },
    {
        .name = "STATUS_CLUSTER_NO_SECURITY_CONTEXT",
        .value = 0xC0130015UL,
        .description = "No cluster security context is available.",
    },
    {
        .name = "STATUS_CLUSTER_NETWORK_NOT_INTERNAL",
        .value = 0xC0130016UL,
        .description = "The cluster network is not configured for internal cluster communication.",
    },
    {
        .name = "STATUS_CLUSTER_POISONED",
        .value = 0xC0130017UL,
        .description = "The cluster node has been poisoned.",
    },
    {
        .name = "STATUS_ACPI_INVALID_OPCODE",
        .value = 0xC0140001UL,
        .description = "An attempt was made to run an invalid AML opcode.",
    },
    {
        .name = "STATUS_ACPI_STACK_OVERFLOW",
        .value = 0xC0140002UL,
        .description = "The AML interpreter stack has overflowed.",
    },
    {
        .name = "STATUS_ACPI_ASSERT_FAILED",
        .value = 0xC0140003UL,
        .description = "An inconsistent state has occurred.",
    },
    {
        .name = "STATUS_ACPI_INVALID_INDEX",
        .value = 0xC0140004UL,
        .description = "An attempt was made to access an array outside its bounds.",
    },
    {
        .name = "STATUS_ACPI_INVALID_ARGUMENT",
        .value = 0xC0140005UL,
        .description = "A required argument was not specified.",
    },
    {
        .name = "STATUS_ACPI_FATAL",
        .value = 0xC0140006UL,
        .description = "A fatal error has occurred.",
    },
    {
        .name = "STATUS_ACPI_INVALID_SUPERNAME",
        .value = 0xC0140007UL,
        .description = "An invalid SuperName was specified.",
    },
    {
        .name = "STATUS_ACPI_INVALID_ARGTYPE",
        .value = 0xC0140008UL,
        .description = "An argument with an incorrect type was specified.",
    },
    {
        .name = "STATUS_ACPI_INVALID_OBJTYPE",
        .value = 0xC0140009UL,
        .description = "An object with an incorrect type was specified.",
    },
    {
        .name = "STATUS_ACPI_INVALID_TARGETTYPE",
        .value = 0xC014000AUL,
        .description = "A target with an incorrect type was specified.",
    },
    {
        .name = "STATUS_ACPI_INCORRECT_ARGUMENT_COUNT",
        .value = 0xC014000BUL,
        .description = "An incorrect number of arguments was specified.",
    },
    {
        .name = "STATUS_ACPI_ADDRESS_NOT_MAPPED",
        .value = 0xC014000CUL,
        .description = "An address failed to translate.",
    },
    {
        .name = "STATUS_ACPI_INVALID_EVENTTYPE",
        .value = 0xC014000DUL,
        .description = "An incorrect event type was specified.",
    },
    {
        .name = "STATUS_ACPI_HANDLER_COLLISION",
        .value = 0xC014000EUL,
        .description = "A handler for the target already exists.",
    },
    {
        .name = "STATUS_ACPI_INVALID_DATA",
        .value = 0xC014000FUL,
        .description = "Invalid data for the target was specified.",
    },
    {
        .name = "STATUS_ACPI_INVALID_REGION",
        .value = 0xC0140010UL,
        .description = "An invalid region for the target was specified.",
    },
    {
        .name = "STATUS_ACPI_INVALID_ACCESS_SIZE",
        .value = 0xC0140011UL,
        .description = "An attempt was made to access a field outside the defined range.",
    },
    {
        .name = "STATUS_ACPI_ACQUIRE_GLOBAL_LOCK",
        .value = 0xC0140012UL,
        .description = "The global system lock could not be acquired.",
    },
    {
        .name = "STATUS_ACPI_ALREADY_INITIALIZED",
        .value = 0xC0140013UL,
        .description = "An attempt was made to reinitialize the ACPI subsystem.",
    },
    {
        .name = "STATUS_ACPI_NOT_INITIALIZED",
        .value = 0xC0140014UL,
        .description = "The ACPI subsystem has not been initialized.",
    },
    {
        .name = "STATUS_ACPI_INVALID_MUTEX_LEVEL",
        .value = 0xC0140015UL,
        .description = "An incorrect mutex was specified.",
    },
    {
        .name = "STATUS_ACPI_MUTEX_NOT_OWNED",
        .value = 0xC0140016UL,
        .description = "The mutex is not currently owned.",
    },
    {
        .name = "STATUS_ACPI_MUTEX_NOT_OWNER",
        .value = 0xC0140017UL,
        .description = "An attempt was made to access the mutex by a process that was not the owner.",
    },
    {
        .name = "STATUS_ACPI_RS_ACCESS",
        .value = 0xC0140018UL,
        .description = "An error occurred during an access to region space.",
    },
    {
        .name = "STATUS_ACPI_INVALID_TABLE",
        .value = 0xC0140019UL,
        .description = "An attempt was made to use an incorrect table.",
    },
    {
        .name = "STATUS_ACPI_REG_HANDLER_FAILED",
        .value = 0xC0140020UL,
        .description = "The registration of an ACPI event failed.",
    },
    {
        .name = "STATUS_ACPI_POWER_REQUEST_FAILED",
        .value = 0xC0140021UL,
        .description = "An ACPI power object failed to transition state.",
    },
    {
        .name = "STATUS_SXS_SECTION_NOT_FOUND",
        .value = 0xC0150001UL,
        .description = "The requested section is not present in the activation context.",
    },
    {
        .name = "STATUS_SXS_CANT_GEN_ACTCTX",
        .value = 0xC0150002UL,
        .description = "Windows was unble to process the application binding information. Refer to the system event log for further information.",
    },
    {
        .name = "STATUS_SXS_INVALID_ACTCTXDATA_FORMAT",
        .value = 0xC0150003UL,
        .description = "The application binding data format is invalid.",
    },
    {
        .name = "STATUS_SXS_ASSEMBLY_NOT_FOUND",
        .value = 0xC0150004UL,
        .description = "The referenced assembly is not installed on the system.",
    },
    {
        .name = "STATUS_SXS_MANIFEST_FORMAT_ERROR",
        .value = 0xC0150005UL,
        .description = "The manifest file does not begin with the required tag and format information.",
    },
    {
        .name = "STATUS_SXS_MANIFEST_PARSE_ERROR",
        .value = 0xC0150006UL,
        .description = "The manifest file contains one or more syntax errors.",
    },
    {
        .name = "STATUS_SXS_ACTIVATION_CONTEXT_DISABLED",
        .value = 0xC0150007UL,
        .description = "The application attempted to activate a disabled activation context.",
    },
    {
        .name = "STATUS_SXS_KEY_NOT_FOUND",
        .value = 0xC0150008UL,
        .description = "The requested lookup key was not found in any active activation context.",
    },
    {
        .name = "STATUS_SXS_VERSION_CONFLICT",
        .value = 0xC0150009UL,
        .description = "A component version required by the application conflicts with another component version that is already active.",
    },
    {
        .name = "STATUS_SXS_WRONG_SECTION_TYPE",
        .value = 0xC015000AUL,
        .description = "The type requested activation context section does not match the query API used.",
    },
    {
        .name = "STATUS_SXS_THREAD_QUERIES_DISABLED",
        .value = 0xC015000BUL,
        .description = "Lack of system resources has required isolated activation to be disabled for the current thread of execution.",
    },
    {
        .name = "STATUS_SXS_ASSEMBLY_MISSING",
        .value = 0xC015000CUL,
        .description = "The referenced assembly could not be found.",
    },
    {
        .name = "STATUS_SXS_PROCESS_DEFAULT_ALREADY_SET",
        .value = 0xC015000EUL,
        .description = "An attempt to set the process default activation context failed because the process default activation context was already set.",
    },
    {
        .name = "STATUS_SXS_EARLY_DEACTIVATION",
        .value = 0xC015000FUL,
        .description = "The activation context being deactivated is not the most recently activated one.",
    },
    {
        .name = "STATUS_SXS_INVALID_DEACTIVATION",
        .value = 0xC0150010UL,
        .description = "The activation context being deactivated is not active for the current thread of execution.",
    },
    {
        .name = "STATUS_SXS_MULTIPLE_DEACTIVATION",
        .value = 0xC0150011UL,
        .description = "The activation context being deactivated has already been deactivated.",
    },
    {
        .name = "STATUS_SXS_SYSTEM_DEFAULT_ACTIVATION_CONTEXT_EMPTY",
        .value = 0xC0150012UL,
        .description = "The activation context of the system default assembly could not be generated.",
    },
    {
        .name = "STATUS_SXS_PROCESS_TERMINATION_REQUESTED",
        .value = 0xC0150013UL,
        .description = "A component used by the isolation facility has requested that the process be terminated.",
    },
    {
        .name = "STATUS_SXS_CORRUPT_ACTIVATION_STACK",
        .value = 0xC0150014UL,
        .description = "The activation context activation stack for the running thread of execution is corrupt.",
    },
    {
        .name = "STATUS_SXS_CORRUPTION",
        .value = 0xC0150015UL,
        .description = "The application isolation metadata for this process or thread has become corrupt.",
    },
    {
        .name = "STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_VALUE",
        .value = 0xC0150016UL,
        .description = "The value of an attribute in an identity is not within the legal range.",
    },
    {
        .name = "STATUS_SXS_INVALID_IDENTITY_ATTRIBUTE_NAME",
        .value = 0xC0150017UL,
        .description = "The name of an attribute in an identity is not within the legal range.",
    },
    {
        .name = "STATUS_SXS_IDENTITY_DUPLICATE_ATTRIBUTE",
        .value = 0xC0150018UL,
        .description = "An identity contains two definitions for the same attribute.",
    },
    {
        .name = "STATUS_SXS_IDENTITY_PARSE_ERROR",
        .value = 0xC0150019UL,
        .description = "The identity string is malformed. This might be due to a trailing comma, more than two unnamed attributes, a missing attribute name, or a missing attribute value.",
    },
    {
        .name = "STATUS_SXS_COMPONENT_STORE_CORRUPT",
        .value = 0xC015001AUL,
        .description = "The component store has become corrupted.",
    },
    {
        .name = "STATUS_SXS_FILE_HASH_MISMATCH",
        .value = 0xC015001BUL,
        .description = "A component's file does not match the verification information present in the component manifest.",
    },
    {
        .name = "STATUS_SXS_MANIFEST_IDENTITY_SAME_BUT_CONTENTS_DIFFERENT",
        .value = 0xC015001CUL,
        .description = "The identities of the manifests are identical, but their contents are different.",
    },
    {
        .name = "STATUS_SXS_IDENTITIES_DIFFERENT",
        .value = 0xC015001DUL,
        .description = "The component identities are different.",
    },
    {
        .name = "STATUS_SXS_ASSEMBLY_IS_NOT_A_DEPLOYMENT",
        .value = 0xC015001EUL,
        .description = "The assembly is not a deployment.",
    },
    {
        .name = "STATUS_SXS_FILE_NOT_PART_OF_ASSEMBLY",
        .value = 0xC015001FUL,
        .description = "The file is not a part of the assembly.",
    },
    {
        .name = "STATUS_ADVANCED_INSTALLER_FAILED",
        .value = 0xC0150020UL,
        .description = "An advanced installer failed during setup or servicing.",
    },
    {
        .name = "STATUS_XML_ENCODING_MISMATCH",
        .value = 0xC0150021UL,
        .description = "The character encoding in the XML declaration did not match the encoding used in the document.",
    },
    {
        .name = "STATUS_SXS_MANIFEST_TOO_BIG",
        .value = 0xC0150022UL,
        .description = "The size of the manifest exceeds the maximum allowed.",
    },
    {
        .name = "STATUS_SXS_SETTING_NOT_REGISTERED",
        .value = 0xC0150023UL,
        .description = "The setting is not registered.",
    },
    {
        .name = "STATUS_SXS_TRANSACTION_CLOSURE_INCOMPLETE",
        .value = 0xC0150024UL,
        .description = "One or more required transaction members are not present.",
    },
    {
        .name = "STATUS_SMI_PRIMITIVE_INSTALLER_FAILED",
        .value = 0xC0150025UL,
        .description = "The SMI primitive installer failed during setup or servicing.",
    },
    {
        .name = "STATUS_GENERIC_COMMAND_FAILED",
        .value = 0xC0150026UL,
        .description = "A generic command executable returned a result that indicates failure.",
    },
    {
        .name = "STATUS_SXS_FILE_HASH_MISSING",
        .value = 0xC0150027UL,
        .description = "A component is missing file verification information in its manifest.",
    },
    {
        .name = "STATUS_TRANSACTIONAL_CONFLICT",
        .value = 0xC0190001UL,
        .description = "The function attempted to use a name that is reserved for use by another transaction.",
    },
    {
        .name = "STATUS_INVALID_TRANSACTION",
        .value = 0xC0190002UL,
        .description = "The transaction handle associated with this operation is invalid.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_ACTIVE",
        .value = 0xC0190003UL,
        .description = "The requested operation was made in the context of a transaction that is no longer active.",
    },
    {
        .name = "STATUS_TM_INITIALIZATION_FAILED",
        .value = 0xC0190004UL,
        .description = "The transaction manager was unable to be successfully initialized. Transacted operations are not supported.",
    },
    {
        .name = "STATUS_RM_NOT_ACTIVE",
        .value = 0xC0190005UL,
        .description = "Transaction support within the specified file system resource manager was not started or was shut down due to an error.",
    },
    {
        .name = "STATUS_RM_METADATA_CORRUPT",
        .value = 0xC0190006UL,
        .description = "The metadata of the resource manager has been corrupted. The resource manager will not function.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_JOINED",
        .value = 0xC0190007UL,
        .description = "The resource manager attempted to prepare a transaction that it has not successfully joined.",
    },
    {
        .name = "STATUS_DIRECTORY_NOT_RM",
        .value = 0xC0190008UL,
        .description = "The specified directory does not contain a file system resource manager.",
    },
    {
        .name = "STATUS_TRANSACTIONS_UNSUPPORTED_REMOTE",
        .value = 0xC019000AUL,
        .description = "The remote server or share does not support transacted file operations.",
    },
    {
        .name = "STATUS_LOG_RESIZE_INVALID_SIZE",
        .value = 0xC019000BUL,
        .description = "The requested log size for the file system resource manager is invalid.",
    },
    {
        .name = "STATUS_REMOTE_FILE_VERSION_MISMATCH",
        .value = 0xC019000CUL,
        .description = "The remote server sent mismatching version number or Fid for a file opened with transactions.",
    },
    {
        .name = "STATUS_CRM_PROTOCOL_ALREADY_EXISTS",
        .value = 0xC019000FUL,
        .description = "The resource manager tried to register a protocol that already exists.",
    },
    {
        .name = "STATUS_TRANSACTION_PROPAGATION_FAILED",
        .value = 0xC0190010UL,
        .description = "The attempt to propagate the transaction failed.",
    },
    {
        .name = "STATUS_CRM_PROTOCOL_NOT_FOUND",
        .value = 0xC0190011UL,
        .description = "The requested propagation protocol was not registered as a CRM.",
    },
    {
        .name = "STATUS_TRANSACTION_SUPERIOR_EXISTS",
        .value = 0xC0190012UL,
        .description = "The transaction object already has a superior enlistment, and the caller attempted an operation that would have created a new superior. Only a single superior enlistment is allowed.",
    },
    {
        .name = "STATUS_TRANSACTION_REQUEST_NOT_VALID",
        .value = 0xC0190013UL,
        .description = "The requested operation is not valid on the transaction object in its current state.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_REQUESTED",
        .value = 0xC0190014UL,
        .description = "The caller has called a response API, but the response is not expected because the transaction manager did not issue the corresponding request to the caller.",
    },
    {
        .name = "STATUS_TRANSACTION_ALREADY_ABORTED",
        .value = 0xC0190015UL,
        .description = "It is too late to perform the requested operation, because the transaction has already been aborted.",
    },
    {
        .name = "STATUS_TRANSACTION_ALREADY_COMMITTED",
        .value = 0xC0190016UL,
        .description = "It is too late to perform the requested operation, because the transaction has already been committed.",
    },
    {
        .name = "STATUS_TRANSACTION_INVALID_MARSHALL_BUFFER",
        .value = 0xC0190017UL,
        .description = "The buffer passed in to NtPushTransaction or NtPullTransaction is not in a valid format.",
    },
    {
        .name = "STATUS_CURRENT_TRANSACTION_NOT_VALID",
        .value = 0xC0190018UL,
        .description = "The current transaction context associated with the thread is not a valid handle to a transaction object.",
    },
    {
        .name = "STATUS_LOG_GROWTH_FAILED",
        .value = 0xC0190019UL,
        .description = "An attempt to create space in the transactional resource manager's log failed. The failure status has been recorded in the event log.",
    },
    {
        .name = "STATUS_OBJECT_NO_LONGER_EXISTS",
        .value = 0xC0190021UL,
        .description = "The object (file, stream, or link) that corresponds to the handle has been deleted by a transaction savepoint rollback.",
    },
    {
        .name = "STATUS_STREAM_MINIVERSION_NOT_FOUND",
        .value = 0xC0190022UL,
        .description = "The specified file miniversion was not found for this transacted file open.",
    },
    {
        .name = "STATUS_STREAM_MINIVERSION_NOT_VALID",
        .value = 0xC0190023UL,
        .description = "The specified file miniversion was found but has been invalidated. The most likely cause is a transaction savepoint rollback.",
    },
    {
        .name = "STATUS_MINIVERSION_INACCESSIBLE_FROM_SPECIFIED_TRANSACTION",
        .value = 0xC0190024UL,
        .description = "A miniversion can be opened only in the context of the transaction that created it.",
    },
    {
        .name = "STATUS_CANT_OPEN_MINIVERSION_WITH_MODIFY_INTENT",
        .value = 0xC0190025UL,
        .description = "It is not possible to open a miniversion with modify access.",
    },
    {
        .name = "STATUS_CANT_CREATE_MORE_STREAM_MINIVERSIONS",
        .value = 0xC0190026UL,
        .description = "It is not possible to create any more miniversions for this stream.",
    },
    {
        .name = "STATUS_HANDLE_NO_LONGER_VALID",
        .value = 0xC0190028UL,
        .description = "The handle has been invalidated by a transaction. The most likely cause is the presence of memory mapping on a file or an open handle when the transaction ended or rolled back to savepoint.",
    },
    {
        .name = "STATUS_LOG_CORRUPTION_DETECTED",
        .value = 0xC0190030UL,
        .description = "The log data is corrupt.",
    },
    {
        .name = "STATUS_RM_DISCONNECTED",
        .value = 0xC0190032UL,
        .description = "The transaction outcome is unavailable because the resource manager responsible for it is disconnected.",
    },
    {
        .name = "STATUS_ENLISTMENT_NOT_SUPERIOR",
        .value = 0xC0190033UL,
        .description = "The request was rejected because the enlistment in question is not a superior enlistment.",
    },
    {
        .name = "STATUS_FILE_IDENTITY_NOT_PERSISTENT",
        .value = 0xC0190036UL,
        .description = "The file cannot be opened in a transaction because its identity depends on the outcome of an unresolved transaction.",
    },
    {
        .name = "STATUS_CANT_BREAK_TRANSACTIONAL_DEPENDENCY",
        .value = 0xC0190037UL,
        .description = "The operation cannot be performed because another transaction is depending on this property not changing.",
    },
    {
        .name = "STATUS_CANT_CROSS_RM_BOUNDARY",
        .value = 0xC0190038UL,
        .description = "The operation would involve a single file with two transactional resource managers and is, therefore, not allowed.",
    },
    {
        .name = "STATUS_TXF_DIR_NOT_EMPTY",
        .value = 0xC0190039UL,
        .description = "The $Txf directory must be empty for this operation to succeed.",
    },
    {
        .name = "STATUS_INDOUBT_TRANSACTIONS_EXIST",
        .value = 0xC019003AUL,
        .description = "The operation would leave a transactional resource manager in an inconsistent state and is therefore not allowed.",
    },
    {
        .name = "STATUS_TM_VOLATILE",
        .value = 0xC019003BUL,
        .description = "The operation could not be completed because the transaction manager does not have a log.",
    },
    {
        .name = "STATUS_ROLLBACK_TIMER_EXPIRED",
        .value = 0xC019003CUL,
        .description = "A rollback could not be scheduled because a previously scheduled rollback has already executed or been queued for execution.",
    },
    {
        .name = "STATUS_TXF_ATTRIBUTE_CORRUPT",
        .value = 0xC019003DUL,
        .description = "The transactional metadata attribute on the file or directory %hs is corrupt and unreadable.",
    },
    {
        .name = "STATUS_EFS_NOT_ALLOWED_IN_TRANSACTION",
        .value = 0xC019003EUL,
        .description = "The encryption operation could not be completed because a transaction is active.",
    },
    {
        .name = "STATUS_TRANSACTIONAL_OPEN_NOT_ALLOWED",
        .value = 0xC019003FUL,
        .description = "This object is not allowed to be opened in a transaction.",
    },
    {
        .name = "STATUS_TRANSACTED_MAPPING_UNSUPPORTED_REMOTE",
        .value = 0xC0190040UL,
        .description = "Memory mapping (creating a mapped section) a remote file under a transaction is not supported.",
    },
    {
        .name = "STATUS_TRANSACTION_REQUIRED_PROMOTION",
        .value = 0xC0190043UL,
        .description = "Promotion was required to allow the resource manager to enlist, but the transaction was set to disallow it.",
    },
    {
        .name = "STATUS_CANNOT_EXECUTE_FILE_IN_TRANSACTION",
        .value = 0xC0190044UL,
        .description = "This file is open for modification in an unresolved transaction and can be opened for execute only by a transacted reader.",
    },
    {
        .name = "STATUS_TRANSACTIONS_NOT_FROZEN",
        .value = 0xC0190045UL,
        .description = "The request to thaw frozen transactions was ignored because transactions were not previously frozen.",
    },
    {
        .name = "STATUS_TRANSACTION_FREEZE_IN_PROGRESS",
        .value = 0xC0190046UL,
        .description = "Transactions cannot be frozen because a freeze is already in progress.",
    },
    {
        .name = "STATUS_NOT_SNAPSHOT_VOLUME",
        .value = 0xC0190047UL,
        .description = "The target volume is not a snapshot volume. This operation is valid only on a volume mounted as a snapshot.",
    },
    {
        .name = "STATUS_NO_SAVEPOINT_WITH_OPEN_FILES",
        .value = 0xC0190048UL,
        .description = "The savepoint operation failed because files are open on the transaction, which is not permitted.",
    },
    {
        .name = "STATUS_SPARSE_NOT_ALLOWED_IN_TRANSACTION",
        .value = 0xC0190049UL,
        .description = "The sparse operation could not be completed because a transaction is active on the file.",
    },
    {
        .name = "STATUS_TM_IDENTITY_MISMATCH",
        .value = 0xC019004AUL,
        .description = "The call to create a transaction manager object failed because the Tm Identity that is stored in the log file does not match the Tm Identity that was passed in as an argument.",
    },
    {
        .name = "STATUS_FLOATED_SECTION",
        .value = 0xC019004BUL,
        .description = "I/O was attempted on a section object that has been floated as a result of a transaction ending. There is no valid data.",
    },
    {
        .name = "STATUS_CANNOT_ACCEPT_TRANSACTED_WORK",
        .value = 0xC019004CUL,
        .description = "The transactional resource manager cannot currently accept transacted work due to a transient condition, such as low resources.",
    },
    {
        .name = "STATUS_CANNOT_ABORT_TRANSACTIONS",
        .value = 0xC019004DUL,
        .description = "The transactional resource manager had too many transactions outstanding that could not be aborted. The transactional resource manager has been shut down.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_FOUND",
        .value = 0xC019004EUL,
        .description = "The specified transaction was unable to be opened because it was not found.",
    },
    {
        .name = "STATUS_RESOURCEMANAGER_NOT_FOUND",
        .value = 0xC019004FUL,
        .description = "The specified resource manager was unable to be opened because it was not found.",
    },
    {
        .name = "STATUS_ENLISTMENT_NOT_FOUND",
        .value = 0xC0190050UL,
        .description = "The specified enlistment was unable to be opened because it was not found.",
    },
    {
        .name = "STATUS_TRANSACTIONMANAGER_NOT_FOUND",
        .value = 0xC0190051UL,
        .description = "The specified transaction manager was unable to be opened because it was not found.",
    },
    {
        .name = "STATUS_TRANSACTIONMANAGER_NOT_ONLINE",
        .value = 0xC0190052UL,
        .description = "The specified resource manager was unable to create an enlistment because its associated transaction manager is not online.",
    },
    {
        .name = "STATUS_TRANSACTIONMANAGER_RECOVERY_NAME_COLLISION",
        .value = 0xC0190053UL,
        .description = "The specified transaction manager was unable to create the objects contained in its log file in the Ob namespace. Therefore, the transaction manager was unable to recover.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_ROOT",
        .value = 0xC0190054UL,
        .description = "The call to create a superior enlistment on this transaction object could not be completed because the transaction object specified for the enlistment is a subordinate branch of the transaction. Only the root of the transaction can be enlisted as a superior.",
    },
    {
        .name = "STATUS_TRANSACTION_OBJECT_EXPIRED",
        .value = 0xC0190055UL,
        .description = "Because the associated transaction manager or resource manager has been closed, the handle is no longer valid.",
    },
    {
        .name = "STATUS_COMPRESSION_NOT_ALLOWED_IN_TRANSACTION",
        .value = 0xC0190056UL,
        .description = "The compression operation could not be completed because a transaction is active on the file.",
    },
    {
        .name = "STATUS_TRANSACTION_RESPONSE_NOT_ENLISTED",
        .value = 0xC0190057UL,
        .description = "The specified operation could not be performed on this superior enlistment because the enlistment was not created with the corresponding completion response in the NotificationMask.",
    },
    {
        .name = "STATUS_TRANSACTION_RECORD_TOO_LONG",
        .value = 0xC0190058UL,
        .description = "The specified operation could not be performed because the record to be logged was too long. This can occur because either there are too many enlistments on this transaction or the combined RecoveryInformation being logged on behalf of those enlistments is too long.",
    },
    {
        .name = "STATUS_NO_LINK_TRACKING_IN_TRANSACTION",
        .value = 0xC0190059UL,
        .description = "The link-tracking operation could not be completed because a transaction is active.",
    },
    {
        .name = "STATUS_OPERATION_NOT_SUPPORTED_IN_TRANSACTION",
        .value = 0xC019005AUL,
        .description = "This operation cannot be performed in a transaction.",
    },
    {
        .name = "STATUS_TRANSACTION_INTEGRITY_VIOLATED",
        .value = 0xC019005BUL,
        .description = "The kernel transaction manager had to abort or forget the transaction because it blocked forward progress.",
    },
    {
        .name = "STATUS_EXPIRED_HANDLE",
        .value = 0xC0190060UL,
        .description = "The handle is no longer properly associated with its transaction. It might have been opened in a transactional resource manager that was subsequently forced to restart. Please close the handle and open a new one.",
    },
    {
        .name = "STATUS_TRANSACTION_NOT_ENLISTED",
        .value = 0xC0190061UL,
        .description = "The specified operation could not be performed because the resource manager is not enlisted in the transaction.",
    },
    {
        .name = "STATUS_LOG_SECTOR_INVALID",
        .value = 0xC01A0001UL,
        .description = "The log service found an invalid log sector.",
    },
    {
        .name = "STATUS_LOG_SECTOR_PARITY_INVALID",
        .value = 0xC01A0002UL,
        .description = "The log service encountered a log sector with invalid block parity.",
    },
    {
        .name = "STATUS_LOG_SECTOR_REMAPPED",
        .value = 0xC01A0003UL,
        .description = "The log service encountered a remapped log sector.",
    },
    {
        .name = "STATUS_LOG_BLOCK_INCOMPLETE",
        .value = 0xC01A0004UL,
        .description = "The log service encountered a partial or incomplete log block.",
    },
    {
        .name = "STATUS_LOG_INVALID_RANGE",
        .value = 0xC01A0005UL,
        .description = "The log service encountered an attempt to access data outside the active log range.",
    },
    {
        .name = "STATUS_LOG_BLOCKS_EXHAUSTED",
        .value = 0xC01A0006UL,
        .description = "The log service user-log marshaling buffers are exhausted.",
    },
    {
        .name = "STATUS_LOG_READ_CONTEXT_INVALID",
        .value = 0xC01A0007UL,
        .description = "The log service encountered an attempt to read from a marshaling area with an invalid read context.",
    },
    {
        .name = "STATUS_LOG_RESTART_INVALID",
        .value = 0xC01A0008UL,
        .description = "The log service encountered an invalid log restart area.",
    },
    {
        .name = "STATUS_LOG_BLOCK_VERSION",
        .value = 0xC01A0009UL,
        .description = "The log service encountered an invalid log block version.",
    },
    {
        .name = "STATUS_LOG_BLOCK_INVALID",
        .value = 0xC01A000AUL,
        .description = "The log service encountered an invalid log block.",
    },
    {
        .name = "STATUS_LOG_READ_MODE_INVALID",
        .value = 0xC01A000BUL,
        .description = "The log service encountered an attempt to read the log with an invalid read mode.",
    },
    {
        .name = "STATUS_LOG_METADATA_CORRUPT",
        .value = 0xC01A000DUL,
        .description = "The log service encountered a corrupted metadata file.",
    },
    {
        .name = "STATUS_LOG_METADATA_INVALID",
        .value = 0xC01A000EUL,
        .description = "The log service encountered a metadata file that could not be created by the log file system.",
    },
    {
        .name = "STATUS_LOG_METADATA_INCONSISTENT",
        .value = 0xC01A000FUL,
        .description = "The log service encountered a metadata file with inconsistent data.",
    },
    {
        .name = "STATUS_LOG_RESERVATION_INVALID",
        .value = 0xC01A0010UL,
        .description = "The log service encountered an attempt to erroneously allocate or dispose reservation space.",
    },
    {
        .name = "STATUS_LOG_CANT_DELETE",
        .value = 0xC01A0011UL,
        .description = "The log service cannot delete the log file or the file system container.",
    },
    {
        .name = "STATUS_LOG_CONTAINER_LIMIT_EXCEEDED",
        .value = 0xC01A0012UL,
        .description = "The log service has reached the maximum allowable containers allocated to a log file.",
    },
    {
        .name = "STATUS_LOG_START_OF_LOG",
        .value = 0xC01A0013UL,
        .description = "The log service has attempted to read or write backward past the start of the log.",
    },
    {
        .name = "STATUS_LOG_POLICY_ALREADY_INSTALLED",
        .value = 0xC01A0014UL,
        .description = "The log policy could not be installed because a policy of the same type is already present.",
    },
    {
        .name = "STATUS_LOG_POLICY_NOT_INSTALLED",
        .value = 0xC01A0015UL,
        .description = "The log policy in question was not installed at the time of the request.",
    },
    {
        .name = "STATUS_LOG_POLICY_INVALID",
        .value = 0xC01A0016UL,
        .description = "The installed set of policies on the log is invalid.",
    },
    {
        .name = "STATUS_LOG_POLICY_CONFLICT",
        .value = 0xC01A0017UL,
        .description = "A policy on the log in question prevented the operation from completing.",
    },
    {
        .name = "STATUS_LOG_PINNED_ARCHIVE_TAIL",
        .value = 0xC01A0018UL,
        .description = "The log space cannot be reclaimed because the log is pinned by the archive tail.",
    },
    {
        .name = "STATUS_LOG_RECORD_NONEXISTENT",
        .value = 0xC01A0019UL,
        .description = "The log record is not a record in the log file.",
    },
    {
        .name = "STATUS_LOG_RECORDS_RESERVED_INVALID",
        .value = 0xC01A001AUL,
        .description = "The number of reserved log records or the adjustment of the number of reserved log records is invalid.",
    },
    {
        .name = "STATUS_LOG_SPACE_RESERVED_INVALID",
        .value = 0xC01A001BUL,
        .description = "The reserved log space or the adjustment of the log space is invalid.",
    },
    {
        .name = "STATUS_LOG_TAIL_INVALID",
        .value = 0xC01A001CUL,
        .description = "A new or existing archive tail or the base of the active log is invalid.",
    },
    {
        .name = "STATUS_LOG_FULL",
        .value = 0xC01A001DUL,
        .description = "The log space is exhausted.",
    },
    {
        .name = "STATUS_LOG_MULTIPLEXED",
        .value = 0xC01A001EUL,
        .description = "The log is multiplexed; no direct writes to the physical log are allowed.",
    },
    {
        .name = "STATUS_LOG_DEDICATED",
        .value = 0xC01A001FUL,
        .description = "The operation failed because the log is dedicated.",
    },
    {
        .name = "STATUS_LOG_ARCHIVE_NOT_IN_PROGRESS",
        .value = 0xC01A0020UL,
        .description = "The operation requires an archive context.",
    },
    {
        .name = "STATUS_LOG_ARCHIVE_IN_PROGRESS",
        .value = 0xC01A0021UL,
        .description = "Log archival is in progress.",
    },
    {
        .name = "STATUS_LOG_EPHEMERAL",
        .value = 0xC01A0022UL,
        .description = "The operation requires a nonephemeral log, but the log is ephemeral.",
    },
    {
        .name = "STATUS_LOG_NOT_ENOUGH_CONTAINERS",
        .value = 0xC01A0023UL,
        .description = "The log must have at least two containers before it can be read from or written to.",
    },
    {
        .name = "STATUS_LOG_CLIENT_ALREADY_REGISTERED",
        .value = 0xC01A0024UL,
        .description = "A log client has already registered on the stream.",
    },
    {
        .name = "STATUS_LOG_CLIENT_NOT_REGISTERED",
        .value = 0xC01A0025UL,
        .description = "A log client has not been registered on the stream.",
    },
    {
        .name = "STATUS_LOG_FULL_HANDLER_IN_PROGRESS",
        .value = 0xC01A0026UL,
        .description = "A request has already been made to handle the log full condition.",
    },
    {
        .name = "STATUS_LOG_CONTAINER_READ_FAILED",
        .value = 0xC01A0027UL,
        .description = "The log service encountered an error when attempting to read from a log container.",
    },
    {
        .name = "STATUS_LOG_CONTAINER_WRITE_FAILED",
        .value = 0xC01A0028UL,
        .description = "The log service encountered an error when attempting to write to a log container.",
    },
    {
        .name = "STATUS_LOG_CONTAINER_OPEN_FAILED",
        .value = 0xC01A0029UL,
        .description = "The log service encountered an error when attempting to open a log container.",
    },
    {
        .name = "STATUS_LOG_CONTAINER_STATE_INVALID",
        .value = 0xC01A002AUL,
        .description = "The log service encountered an invalid container state when attempting a requested action.",
    },
    {
        .name = "STATUS_LOG_STATE_INVALID",
        .value = 0xC01A002BUL,
        .description = "The log service is not in the correct state to perform a requested action.",
    },
    {
        .name = "STATUS_LOG_PINNED",
        .value = 0xC01A002CUL,
        .description = "The log space cannot be reclaimed because the log is pinned.",
    },
    {
        .name = "STATUS_LOG_METADATA_FLUSH_FAILED",
        .value = 0xC01A002DUL,
        .description = "The log metadata flush failed.",
    },
    {
        .name = "STATUS_LOG_INCONSISTENT_SECURITY",
        .value = 0xC01A002EUL,
        .description = "Security on the log and its containers is inconsistent.",
    },
    {
        .name = "STATUS_LOG_APPENDED_FLUSH_FAILED",
        .value = 0xC01A002FUL,
        .description = "Records were appended to the log or reservation changes were made, but the log could not be flushed.",
    },
    {
        .name = "STATUS_LOG_PINNED_RESERVATION",
        .value = 0xC01A0030UL,
        .description = "The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available.",
    },
    {
        .name = "STATUS_VIDEO_HUNG_DISPLAY_DRIVER_THREAD",
        .value = 0xC01B00EAUL,
        .description = "{Display Driver Stopped Responding} The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the computer, a dialog box will allow you to upload data about this failure to Microsoft.",
    },
    {
        .name = "STATUS_FLT_NO_HANDLER_DEFINED",
        .value = 0xC01C0001UL,
        .description = "A handler was not defined by the filter for this operation.",
    },
    {
        .name = "STATUS_FLT_CONTEXT_ALREADY_DEFINED",
        .value = 0xC01C0002UL,
        .description = "A context is already defined for this object.",
    },
    {
        .name = "STATUS_FLT_INVALID_ASYNCHRONOUS_REQUEST",
        .value = 0xC01C0003UL,
        .description = "Asynchronous requests are not valid for this operation.",
    },
    {
        .name = "STATUS_FLT_DISALLOW_FAST_IO",
        .value = 0xC01C0004UL,
        .description = "This is an internal error code used by the filter manager to determine if a fast I/O operation should be forced down the input/output request packet (IRP) path. Minifilters should never return this value.",
    },
    {
        .name = "STATUS_FLT_INVALID_NAME_REQUEST",
        .value = 0xC01C0005UL,
        .description = "An invalid name request was made. The name requested cannot be retrieved at this time.",
    },
    {
        .name = "STATUS_FLT_NOT_SAFE_TO_POST_OPERATION",
        .value = 0xC01C0006UL,
        .description = "Posting this operation to a worker thread for further processing is not safe at this time because it could lead to a system deadlock.",
    },
    {
        .name = "STATUS_FLT_NOT_INITIALIZED",
        .value = 0xC01C0007UL,
        .description = "The Filter Manager was not initialized when a filter tried to register. Make sure that the Filter Manager is loaded as a driver.",
    },
    {
        .name = "STATUS_FLT_FILTER_NOT_READY",
        .value = 0xC01C0008UL,
        .description = "The filter is not ready for attachment to volumes because it has not finished initializing (FltStartFiltering has not been called).",
    },
    {
        .name = "STATUS_FLT_POST_OPERATION_CLEANUP",
        .value = 0xC01C0009UL,
        .description = "The filter must clean up any operation-specific context at this time because it is being removed from the system before the operation is completed by the lower drivers.",
    },
    {
        .name = "STATUS_FLT_INTERNAL_ERROR",
        .value = 0xC01C000AUL,
        .description = "The Filter Manager had an internal error from which it cannot recover; therefore, the operation has failed. This is usually the result of a filter returning an invalid value from a pre-operation callback.",
    },
    {
        .name = "STATUS_FLT_DELETING_OBJECT",
        .value = 0xC01C000BUL,
        .description = "The object specified for this action is in the process of being deleted; therefore, the action requested cannot be completed at this time.",
    },
    {
        .name = "STATUS_FLT_MUST_BE_NONPAGED_POOL",
        .value = 0xC01C000CUL,
        .description = "A nonpaged pool must be used for this type of context.",
    },
    {
        .name = "STATUS_FLT_DUPLICATE_ENTRY",
        .value = 0xC01C000DUL,
        .description = "A duplicate handler definition has been provided for an operation.",
    },
    {
        .name = "STATUS_FLT_CBDQ_DISABLED",
        .value = 0xC01C000EUL,
        .description = "The callback data queue has been disabled.",
    },
    {
        .name = "STATUS_FLT_DO_NOT_ATTACH",
        .value = 0xC01C000FUL,
        .description = "Do not attach the filter to the volume at this time.",
    },
    {
        .name = "STATUS_FLT_DO_NOT_DETACH",
        .value = 0xC01C0010UL,
        .description = "Do not detach the filter from the volume at this time.",
    },
    {
        .name = "STATUS_FLT_INSTANCE_ALTITUDE_COLLISION",
        .value = 0xC01C0011UL,
        .description = "An instance already exists at this altitude on the volume specified.",
    },
    {
        .name = "STATUS_FLT_INSTANCE_NAME_COLLISION",
        .value = 0xC01C0012UL,
        .description = "An instance already exists with this name on the volume specified.",
    },
    {
        .name = "STATUS_FLT_FILTER_NOT_FOUND",
        .value = 0xC01C0013UL,
        .description = "The system could not find the filter specified.",
    },
    {
        .name = "STATUS_FLT_VOLUME_NOT_FOUND",
        .value = 0xC01C0014UL,
        .description = "The system could not find the volume specified.",
    },
    {
        .name = "STATUS_FLT_INSTANCE_NOT_FOUND",
        .value = 0xC01C0015UL,
        .description = "The system could not find the instance specified.",
    },
    {
        .name = "STATUS_FLT_CONTEXT_ALLOCATION_NOT_FOUND",
        .value = 0xC01C0016UL,
        .description = "No registered context allocation definition was found for the given request.",
    },
    {
        .name = "STATUS_FLT_INVALID_CONTEXT_REGISTRATION",
        .value = 0xC01C0017UL,
        .description = "An invalid parameter was specified during context registration.",
    },
    {
        .name = "STATUS_FLT_NAME_CACHE_MISS",
        .value = 0xC01C0018UL,
        .description = "The name requested was not found in the Filter Manager name cache and could not be retrieved from the file system.",
    },
    {
        .name = "STATUS_FLT_NO_DEVICE_OBJECT",
        .value = 0xC01C0019UL,
        .description = "The requested device object does not exist for the given volume.",
    },
    {
        .name = "STATUS_FLT_VOLUME_ALREADY_MOUNTED",
        .value = 0xC01C001AUL,
        .description = "The specified volume is already mounted.",
    },
    {
        .name = "STATUS_FLT_ALREADY_ENLISTED",
        .value = 0xC01C001BUL,
        .description = "The specified transaction context is already enlisted in a transaction.",
    },
    {
        .name = "STATUS_FLT_CONTEXT_ALREADY_LINKED",
        .value = 0xC01C001CUL,
        .description = "The specified context is already attached to another object.",
    },
    {
        .name = "STATUS_FLT_NO_WAITER_FOR_REPLY",
        .value = 0xC01C0020UL,
        .description = "No waiter is present for the filter's reply to this message.",
    },
    {
        .name = "STATUS_MONITOR_NO_DESCRIPTOR",
        .value = 0xC01D0001UL,
        .description = "A monitor descriptor could not be obtained.",
    },
    {
        .name = "STATUS_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT",
        .value = 0xC01D0002UL,
        .description = "This release does not support the format of the obtained monitor descriptor.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_DESCRIPTOR_CHECKSUM",
        .value = 0xC01D0003UL,
        .description = "The checksum of the obtained monitor descriptor is invalid.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_STANDARD_TIMING_BLOCK",
        .value = 0xC01D0004UL,
        .description = "The monitor descriptor contains an invalid standard timing block.",
    },
    {
        .name = "STATUS_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED",
        .value = 0xC01D0005UL,
        .description = "WMI data-block registration failed for one of the MSMonitorClass WMI subclasses.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK",
        .value = 0xC01D0006UL,
        .description = "The provided monitor descriptor block is either corrupted or does not contain the monitor's detailed serial number.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK",
        .value = 0xC01D0007UL,
        .description = "The provided monitor descriptor block is either corrupted or does not contain the monitor's user-friendly name.",
    },
    {
        .name = "STATUS_MONITOR_NO_MORE_DESCRIPTOR_DATA",
        .value = 0xC01D0008UL,
        .description = "There is no monitor descriptor data at the specified (offset or size) region.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_DETAILED_TIMING_BLOCK",
        .value = 0xC01D0009UL,
        .description = "The monitor descriptor contains an invalid detailed timing block.",
    },
    {
        .name = "STATUS_MONITOR_INVALID_MANUFACTURE_DATE",
        .value = 0xC01D000AUL,
        .description = "Monitor descriptor contains invalid manufacture date.",
    },
    {
        .name = "STATUS_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER",
        .value = 0xC01E0000UL,
        .description = "Exclusive mode ownership is needed to create an unmanaged primary allocation.",
    },
    {
        .name = "STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER",
        .value = 0xC01E0001UL,
        .description = "The driver needs more DMA buffer space to complete the requested operation.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_DISPLAY_ADAPTER",
        .value = 0xC01E0002UL,
        .description = "The specified display adapter handle is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_ADAPTER_WAS_RESET",
        .value = 0xC01E0003UL,
        .description = "The specified display adapter and all of its state have been reset.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_DRIVER_MODEL",
        .value = 0xC01E0004UL,
        .description = "The driver stack does not match the expected driver model.",
    },
    {
        .name = "STATUS_GRAPHICS_PRESENT_MODE_CHANGED",
        .value = 0xC01E0005UL,
        .description = "Present happened but ended up into the changed desktop mode.",
    },
    {
        .name = "STATUS_GRAPHICS_PRESENT_OCCLUDED",
        .value = 0xC01E0006UL,
        .description = "Nothing to present due to desktop occlusion.",
    },
    {
        .name = "STATUS_GRAPHICS_PRESENT_DENIED",
        .value = 0xC01E0007UL,
        .description = "Not able to present due to denial of desktop access.",
    },
    {
        .name = "STATUS_GRAPHICS_CANNOTCOLORCONVERT",
        .value = 0xC01E0008UL,
        .description = "Not able to present with color conversion.",
    },
    {
        .name = "STATUS_GRAPHICS_PRESENT_REDIRECTION_DISABLED",
        .value = 0xC01E000BUL,
        .description = "Present redirection is disabled (desktop windowing management subsystem is off).",
    },
    {
        .name = "STATUS_GRAPHICS_PRESENT_UNOCCLUDED",
        .value = 0xC01E000CUL,
        .description = "Previous exclusive VidPn source owner has released its ownership",
    },
    {
        .name = "STATUS_GRAPHICS_NO_VIDEO_MEMORY",
        .value = 0xC01E0100UL,
        .description = "Not enough video memory is available to complete the operation.",
    },
    {
        .name = "STATUS_GRAPHICS_CANT_LOCK_MEMORY",
        .value = 0xC01E0101UL,
        .description = "Could not probe and lock the underlying memory of an allocation.",
    },
    {
        .name = "STATUS_GRAPHICS_ALLOCATION_BUSY",
        .value = 0xC01E0102UL,
        .description = "The allocation is currently busy.",
    },
    {
        .name = "STATUS_GRAPHICS_TOO_MANY_REFERENCES",
        .value = 0xC01E0103UL,
        .description = "An object being referenced has already reached the maximum reference count and cannot be referenced further.",
    },
    {
        .name = "STATUS_GRAPHICS_TRY_AGAIN_LATER",
        .value = 0xC01E0104UL,
        .description = "A problem could not be solved due to an existing condition. Try again later.",
    },
    {
        .name = "STATUS_GRAPHICS_TRY_AGAIN_NOW",
        .value = 0xC01E0105UL,
        .description = "A problem could not be solved due to an existing condition. Try again now.",
    },
    {
        .name = "STATUS_GRAPHICS_ALLOCATION_INVALID",
        .value = 0xC01E0106UL,
        .description = "The allocation is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE",
        .value = 0xC01E0107UL,
        .description = "No more unswizzling apertures are currently available.",
    },
    {
        .name = "STATUS_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED",
        .value = 0xC01E0108UL,
        .description = "The current allocation cannot be unswizzled by an aperture.",
    },
    {
        .name = "STATUS_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION",
        .value = 0xC01E0109UL,
        .description = "The request failed because a pinned allocation cannot be evicted.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_ALLOCATION_USAGE",
        .value = 0xC01E0110UL,
        .description = "The allocation cannot be used from its current segment location for the specified operation.",
    },
    {
        .name = "STATUS_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION",
        .value = 0xC01E0111UL,
        .description = "A locked allocation cannot be used in the current command buffer.",
    },
    {
        .name = "STATUS_GRAPHICS_ALLOCATION_CLOSED",
        .value = 0xC01E0112UL,
        .description = "The allocation being referenced has been closed permanently.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_ALLOCATION_INSTANCE",
        .value = 0xC01E0113UL,
        .description = "An invalid allocation instance is being referenced.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_ALLOCATION_HANDLE",
        .value = 0xC01E0114UL,
        .description = "An invalid allocation handle is being referenced.",
    },
    {
        .name = "STATUS_GRAPHICS_WRONG_ALLOCATION_DEVICE",
        .value = 0xC01E0115UL,
        .description = "The allocation being referenced does not belong to the current device.",
    },
    {
        .name = "STATUS_GRAPHICS_ALLOCATION_CONTENT_LOST",
        .value = 0xC01E0116UL,
        .description = "The specified allocation lost its content.",
    },
    {
        .name = "STATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE",
        .value = 0xC01E0200UL,
        .description = "A GPU exception was detected on the given device. The device cannot be scheduled.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY",
        .value = 0xC01E0300UL,
        .description = "The specified VidPN topology is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED",
        .value = 0xC01E0301UL,
        .description = "The specified VidPN topology is valid but is not supported by this model of the display adapter.",
    },
    {
        .name = "STATUS_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED",
        .value = 0xC01E0302UL,
        .description = "The specified VidPN topology is valid but is not currently supported by the display adapter due to allocation of its resources.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN",
        .value = 0xC01E0303UL,
        .description = "The specified VidPN handle is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE",
        .value = 0xC01E0304UL,
        .description = "The specified video present source is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET",
        .value = 0xC01E0305UL,
        .description = "The specified video present target is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED",
        .value = 0xC01E0306UL,
        .description = "The specified VidPN modality is not supported (for example, at least two of the pinned modes are not co-functional).",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_SOURCEMODESET",
        .value = 0xC01E0308UL,
        .description = "The specified VidPN source mode set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_TARGETMODESET",
        .value = 0xC01E0309UL,
        .description = "The specified VidPN target mode set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_FREQUENCY",
        .value = 0xC01E030AUL,
        .description = "The specified video signal frequency is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_ACTIVE_REGION",
        .value = 0xC01E030BUL,
        .description = "The specified video signal active region is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_TOTAL_REGION",
        .value = 0xC01E030CUL,
        .description = "The specified video signal total region is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE",
        .value = 0xC01E0310UL,
        .description = "The specified video present source mode is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE",
        .value = 0xC01E0311UL,
        .description = "The specified video present target mode is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET",
        .value = 0xC01E0312UL,
        .description = "The pinned mode must remain in the set on the VidPN's co-functional modality enumeration.",
    },
    {
        .name = "STATUS_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY",
        .value = 0xC01E0313UL,
        .description = "The specified video present path is already in the VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_MODE_ALREADY_IN_MODESET",
        .value = 0xC01E0314UL,
        .description = "The specified mode is already in the mode set.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET",
        .value = 0xC01E0315UL,
        .description = "The specified video present source set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET",
        .value = 0xC01E0316UL,
        .description = "The specified video present target set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_SOURCE_ALREADY_IN_SET",
        .value = 0xC01E0317UL,
        .description = "The specified video present source is already in the video present source set.",
    },
    {
        .name = "STATUS_GRAPHICS_TARGET_ALREADY_IN_SET",
        .value = 0xC01E0318UL,
        .description = "The specified video present target is already in the video present target set.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_PRESENT_PATH",
        .value = 0xC01E0319UL,
        .description = "The specified VidPN present path is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY",
        .value = 0xC01E031AUL,
        .description = "The miniport has no recommendation for augmenting the specified VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET",
        .value = 0xC01E031BUL,
        .description = "The specified monitor frequency range set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE",
        .value = 0xC01E031CUL,
        .description = "The specified monitor frequency range is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET",
        .value = 0xC01E031DUL,
        .description = "The specified frequency range is not in the specified monitor frequency range set.",
    },
    {
        .name = "STATUS_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET",
        .value = 0xC01E031FUL,
        .description = "The specified frequency range is already in the specified monitor frequency range set.",
    },
    {
        .name = "STATUS_GRAPHICS_STALE_MODESET",
        .value = 0xC01E0320UL,
        .description = "The specified mode set is stale. Reacquire the new mode set.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_SOURCEMODESET",
        .value = 0xC01E0321UL,
        .description = "The specified monitor source mode set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_SOURCE_MODE",
        .value = 0xC01E0322UL,
        .description = "The specified monitor source mode is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN",
        .value = 0xC01E0323UL,
        .description = "The miniport does not have a recommendation regarding the request to provide a functional VidPN given the current display adapter configuration.",
    },
    {
        .name = "STATUS_GRAPHICS_MODE_ID_MUST_BE_UNIQUE",
        .value = 0xC01E0324UL,
        .description = "The ID of the specified mode is being used by another mode in the set.",
    },
    {
        .name = "STATUS_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION",
        .value = 0xC01E0325UL,
        .description = "The system failed to determine a mode that is supported by both the display adapter and the monitor connected to it.",
    },
    {
        .name = "STATUS_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES",
        .value = 0xC01E0326UL,
        .description = "The number of video present targets must be greater than or equal to the number of video present sources.",
    },
    {
        .name = "STATUS_GRAPHICS_PATH_NOT_IN_TOPOLOGY",
        .value = 0xC01E0327UL,
        .description = "The specified present path is not in the VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE",
        .value = 0xC01E0328UL,
        .description = "The display adapter must have at least one video present source.",
    },
    {
        .name = "STATUS_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET",
        .value = 0xC01E0329UL,
        .description = "The display adapter must have at least one video present target.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITORDESCRIPTORSET",
        .value = 0xC01E032AUL,
        .description = "The specified monitor descriptor set is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITORDESCRIPTOR",
        .value = 0xC01E032BUL,
        .description = "The specified monitor descriptor is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET",
        .value = 0xC01E032CUL,
        .description = "The specified descriptor is not in the specified monitor descriptor set.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET",
        .value = 0xC01E032DUL,
        .description = "The specified descriptor is already in the specified monitor descriptor set.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE",
        .value = 0xC01E032EUL,
        .description = "The ID of the specified monitor descriptor is being used by another descriptor in the set.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE",
        .value = 0xC01E032FUL,
        .description = "The specified video present target subset type is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_RESOURCES_NOT_RELATED",
        .value = 0xC01E0330UL,
        .description = "Two or more of the specified resources are not related to each other, as defined by the interface semantics.",
    },
    {
        .name = "STATUS_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE",
        .value = 0xC01E0331UL,
        .description = "The ID of the specified video present source is being used by another source in the set.",
    },
    {
        .name = "STATUS_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE",
        .value = 0xC01E0332UL,
        .description = "The ID of the specified video present target is being used by another target in the set.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET",
        .value = 0xC01E0333UL,
        .description = "The specified VidPN source cannot be used because there is no available VidPN target to connect it to.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER",
        .value = 0xC01E0334UL,
        .description = "The newly arrived monitor could not be associated with a display adapter.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_VIDPNMGR",
        .value = 0xC01E0335UL,
        .description = "The particular display adapter does not have an associated VidPN manager.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_ACTIVE_VIDPN",
        .value = 0xC01E0336UL,
        .description = "The VidPN manager of the particular display adapter does not have an active VidPN.",
    },
    {
        .name = "STATUS_GRAPHICS_STALE_VIDPN_TOPOLOGY",
        .value = 0xC01E0337UL,
        .description = "The specified VidPN topology is stale; obtain the new topology.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITOR_NOT_CONNECTED",
        .value = 0xC01E0338UL,
        .description = "No monitor is connected on the specified video present target.",
    },
    {
        .name = "STATUS_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY",
        .value = 0xC01E0339UL,
        .description = "The specified source is not part of the specified VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE",
        .value = 0xC01E033AUL,
        .description = "The specified primary surface size is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VISIBLEREGION_SIZE",
        .value = 0xC01E033BUL,
        .description = "The specified visible region size is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_STRIDE",
        .value = 0xC01E033CUL,
        .description = "The specified stride is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PIXELFORMAT",
        .value = 0xC01E033DUL,
        .description = "The specified pixel format is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_COLORBASIS",
        .value = 0xC01E033EUL,
        .description = "The specified color basis is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PIXELVALUEACCESSMODE",
        .value = 0xC01E033FUL,
        .description = "The specified pixel value access mode is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_TARGET_NOT_IN_TOPOLOGY",
        .value = 0xC01E0340UL,
        .description = "The specified target is not part of the specified VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT",
        .value = 0xC01E0341UL,
        .description = "Failed to acquire the display mode management interface.",
    },
    {
        .name = "STATUS_GRAPHICS_VIDPN_SOURCE_IN_USE",
        .value = 0xC01E0342UL,
        .description = "The specified VidPN source is already owned by a DMM client and cannot be used until that client releases it.",
    },
    {
        .name = "STATUS_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN",
        .value = 0xC01E0343UL,
        .description = "The specified VidPN is active and cannot be accessed.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL",
        .value = 0xC01E0344UL,
        .description = "The specified VidPN's present path importance ordinal is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION",
        .value = 0xC01E0345UL,
        .description = "The specified VidPN's present path content geometry transformation is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED",
        .value = 0xC01E0346UL,
        .description = "The specified content geometry transformation is not supported on the respective VidPN present path.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_GAMMA_RAMP",
        .value = 0xC01E0347UL,
        .description = "The specified gamma ramp is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED",
        .value = 0xC01E0348UL,
        .description = "The specified gamma ramp is not supported on the respective VidPN present path.",
    },
    {
        .name = "STATUS_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED",
        .value = 0xC01E0349UL,
        .description = "Multisampling is not supported on the respective VidPN present path.",
    },
    {
        .name = "STATUS_GRAPHICS_MODE_NOT_IN_MODESET",
        .value = 0xC01E034AUL,
        .description = "The specified mode is not in the specified mode set.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON",
        .value = 0xC01E034DUL,
        .description = "The specified VidPN topology recommendation reason is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PATH_CONTENT_TYPE",
        .value = 0xC01E034EUL,
        .description = "The specified VidPN present path content type is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_COPYPROTECTION_TYPE",
        .value = 0xC01E034FUL,
        .description = "The specified VidPN present path copy protection type is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS",
        .value = 0xC01E0350UL,
        .description = "Only one unassigned mode set can exist at any one time for a particular VidPN source or target.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_SCANLINE_ORDERING",
        .value = 0xC01E0352UL,
        .description = "The specified scan line ordering type is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED",
        .value = 0xC01E0353UL,
        .description = "The topology changes are not allowed for the specified VidPN.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS",
        .value = 0xC01E0354UL,
        .description = "All available importance ordinals are being used in the specified topology.",
    },
    {
        .name = "STATUS_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT",
        .value = 0xC01E0355UL,
        .description = "The specified primary surface has a different private-format attribute than the current primary surface.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM",
        .value = 0xC01E0356UL,
        .description = "The specified mode-pruning algorithm is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_CAPABILITY_ORIGIN",
        .value = 0xC01E0357UL,
        .description = "The specified monitor-capability origin is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE_CONSTRAINT",
        .value = 0xC01E0358UL,
        .description = "The specified monitor-frequency range constraint is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_MAX_NUM_PATHS_REACHED",
        .value = 0xC01E0359UL,
        .description = "The maximum supported number of present paths has been reached.",
    },
    {
        .name = "STATUS_GRAPHICS_CANCEL_VIDPN_TOPOLOGY_AUGMENTATION",
        .value = 0xC01E035AUL,
        .description = "The miniport requested that augmentation be canceled for the specified source of the specified VidPN's topology.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_CLIENT_TYPE",
        .value = 0xC01E035BUL,
        .description = "The specified client type was not recognized.",
    },
    {
        .name = "STATUS_GRAPHICS_CLIENTVIDPN_NOT_SET",
        .value = 0xC01E035CUL,
        .description = "The client VidPN is not set on this adapter (for example, no user mode-initiated mode changes have taken place on this adapter).",
    },
    {
        .name = "STATUS_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED",
        .value = 0xC01E0400UL,
        .description = "The specified display adapter child device already has an external device connected to it.",
    },
    {
        .name = "STATUS_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED",
        .value = 0xC01E0401UL,
        .description = "The display adapter child device does not support reporting a descriptor.",
    },
    {
        .name = "STATUS_GRAPHICS_NOT_A_LINKED_ADAPTER",
        .value = 0xC01E0430UL,
        .description = "The display adapter is not linked to any other adapters.",
    },
    {
        .name = "STATUS_GRAPHICS_LEADLINK_NOT_ENUMERATED",
        .value = 0xC01E0431UL,
        .description = "The lead adapter in a linked configuration was not enumerated yet.",
    },
    {
        .name = "STATUS_GRAPHICS_CHAINLINKS_NOT_ENUMERATED",
        .value = 0xC01E0432UL,
        .description = "Some chain adapters in a linked configuration have not yet been enumerated.",
    },
    {
        .name = "STATUS_GRAPHICS_ADAPTER_CHAIN_NOT_READY",
        .value = 0xC01E0433UL,
        .description = "The chain of linked adapters is not ready to start because of an unknown failure.",
    },
    {
        .name = "STATUS_GRAPHICS_CHAINLINKS_NOT_STARTED",
        .value = 0xC01E0434UL,
        .description = "An attempt was made to start a lead link display adapter when the chain links had not yet started.",
    },
    {
        .name = "STATUS_GRAPHICS_CHAINLINKS_NOT_POWERED_ON",
        .value = 0xC01E0435UL,
        .description = "An attempt was made to turn on a lead link display adapter when the chain links were turned off.",
    },
    {
        .name = "STATUS_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE",
        .value = 0xC01E0436UL,
        .description = "The adapter link was found in an inconsistent state. Not all adapters are in an expected PNP/power state.",
    },
    {
        .name = "STATUS_GRAPHICS_NOT_POST_DEVICE_DRIVER",
        .value = 0xC01E0438UL,
        .description = "The driver trying to start is not the same as the driver for the posted display adapter.",
    },
    {
        .name = "STATUS_GRAPHICS_ADAPTER_ACCESS_NOT_EXCLUDED",
        .value = 0xC01E043BUL,
        .description = "An operation is being attempted that requires the display adapter to be in a quiescent state.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_NOT_SUPPORTED",
        .value = 0xC01E0500UL,
        .description = "The driver does not support OPM.",
    },
    {
        .name = "STATUS_GRAPHICS_COPP_NOT_SUPPORTED",
        .value = 0xC01E0501UL,
        .description = "The driver does not support COPP.",
    },
    {
        .name = "STATUS_GRAPHICS_UAB_NOT_SUPPORTED",
        .value = 0xC01E0502UL,
        .description = "The driver does not support UAB.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS",
        .value = 0xC01E0503UL,
        .description = "The specified encrypted parameters are invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL",
        .value = 0xC01E0504UL,
        .description = "An array passed to a function cannot hold all of the data that the function wants to put in it.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_NO_PROTECTED_OUTPUTS_EXIST",
        .value = 0xC01E0505UL,
        .description = "The GDI display device passed to this function does not have any active protected outputs.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME",
        .value = 0xC01E0506UL,
        .description = "The PVP cannot find an actual GDI display device that corresponds to the passed-in GDI display device name.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP",
        .value = 0xC01E0507UL,
        .description = "This function failed because the GDI display device passed to it was not attached to the Windows desktop.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED",
        .value = 0xC01E0508UL,
        .description = "The PVP does not support mirroring display devices because they do not have any protected outputs.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_POINTER",
        .value = 0xC01E050AUL,
        .description = "The function failed because an invalid pointer parameter was passed to it. A pointer parameter is invalid if it is null, is not correctly aligned, or it points to an invalid address or a kernel mode address.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INTERNAL_ERROR",
        .value = 0xC01E050BUL,
        .description = "An internal error caused an operation to fail.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_HANDLE",
        .value = 0xC01E050CUL,
        .description = "The function failed because the caller passed in an invalid OPM user-mode handle.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE",
        .value = 0xC01E050DUL,
        .description = "This function failed because the GDI device passed to it did not have any monitors associated with it.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH",
        .value = 0xC01E050EUL,
        .description = "A certificate could not be returned because the certificate buffer passed to the function was too small.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_SPANNING_MODE_ENABLED",
        .value = 0xC01E050FUL,
        .description = "DxgkDdiOpmCreateProtectedOutput() could not create a protected output because the video present yarget is in spanning mode.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_THEATER_MODE_ENABLED",
        .value = 0xC01E0510UL,
        .description = "DxgkDdiOpmCreateProtectedOutput() could not create a protected output because the video present target is in theater mode.",
    },
    {
        .name = "STATUS_GRAPHICS_PVP_HFS_FAILED",
        .value = 0xC01E0511UL,
        .description = "The function call failed because the display adapter's hardware functionality scan (HFS) failed to validate the graphics hardware.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_SRM",
        .value = 0xC01E0512UL,
        .description = "The HDCP SRM passed to this function did not comply with section 5 of the HDCP 1.1 specification.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP",
        .value = 0xC01E0513UL,
        .description = "The protected output cannot enable the HDCP system because it does not support it.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP",
        .value = 0xC01E0514UL,
        .description = "The protected output cannot enable analog copy protection because it does not support it.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA",
        .value = 0xC01E0515UL,
        .description = "The protected output cannot enable the CGMS-A protection technology because it does not support it.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_HDCP_SRM_NEVER_SET",
        .value = 0xC01E0516UL,
        .description = "DxgkDdiOPMGetInformation() cannot return the version of the SRM being used because the application never successfully passed an SRM to the protected output.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_RESOLUTION_TOO_HIGH",
        .value = 0xC01E0517UL,
        .description = "DxgkDdiOPMConfigureProtectedOutput() cannot enable the specified output protection technology because the output's screen resolution is too high.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE",
        .value = 0xC01E0518UL,
        .description = "DxgkDdiOPMConfigureProtectedOutput() cannot enable HDCP because other physical outputs are using the display adapter's HDCP hardware.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_NO_LONGER_EXISTS",
        .value = 0xC01E051AUL,
        .description = "The operating system asynchronously destroyed this OPM-protected output because the operating system state changed. This error typically occurs because the monitor PDO associated with this protected output was removed or stopped, the protected output's session became a nonconsole session, or the protected output's desktop became inactive.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS",
        .value = 0xC01E051BUL,
        .description = "OPM functions cannot be called when a session is changing its type. Three types of sessions currently exist: console, disconnected, and remote (RDP or ICA).",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_COPP_SEMANTICS",
        .value = 0xC01E051CUL,
        .description = "The DxgkDdiOPMGetCOPPCompatibleInformation, DxgkDdiOPMGetInformation, or DxgkDdiOPMConfigureProtectedOutput function failed. This error is returned only if a protected output has OPM semantics. DxgkDdiOPMGetCOPPCompatibleInformation always returns this error if a protected output has OPM semantics. DxgkDdiOPMGetInformation returns this error code if the caller requested COPP-specific information. DxgkDdiOPMConfigureProtectedOutput returns this error when the caller tries to use a COPP-specific command.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_INFORMATION_REQUEST",
        .value = 0xC01E051DUL,
        .description = "The DxgkDdiOPMGetInformation and DxgkDdiOPMGetCOPPCompatibleInformation functions return this error code if the passed-in sequence number is not the expected sequence number or the passed-in OMAC value is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_DRIVER_INTERNAL_ERROR",
        .value = 0xC01E051EUL,
        .description = "The function failed because an unexpected error occurred inside a display driver.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_PROTECTED_OUTPUT_DOES_NOT_HAVE_OPM_SEMANTICS",
        .value = 0xC01E051FUL,
        .description = "The DxgkDdiOPMGetCOPPCompatibleInformation, DxgkDdiOPMGetInformation, or DxgkDdiOPMConfigureProtectedOutput function failed. This error is returned only if a protected output has COPP semantics. DxgkDdiOPMGetCOPPCompatibleInformation returns this error code if the caller requested OPM-specific information. DxgkDdiOPMGetInformation always returns this error if a protected output has COPP semantics. DxgkDdiOPMConfigureProtectedOutput returns this error when the caller tries to use an OPM-specific command.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_SIGNALING_NOT_SUPPORTED",
        .value = 0xC01E0520UL,
        .description = "The DxgkDdiOPMGetCOPPCompatibleInformation and DxgkDdiOPMConfigureProtectedOutput functions return this error if the display driver does not support the DXGKMDT_OPM_GET_ACP_AND_CGMSA_SIGNALING and DXGKMDT_OPM_SET_ACP_AND_CGMSA_SIGNALING GUIDs.",
    },
    {
        .name = "STATUS_GRAPHICS_OPM_INVALID_CONFIGURATION_REQUEST",
        .value = 0xC01E0521UL,
        .description = "The DxgkDdiOPMConfigureProtectedOutput function returns this error code if the passed-in sequence number is not the expected sequence number or the passed-in OMAC value is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_I2C_NOT_SUPPORTED",
        .value = 0xC01E0580UL,
        .description = "The monitor connected to the specified video output does not have an I2C bus.",
    },
    {
        .name = "STATUS_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST",
        .value = 0xC01E0581UL,
        .description = "No device on the I2C bus has the specified address.",
    },
    {
        .name = "STATUS_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA",
        .value = 0xC01E0582UL,
        .description = "An error occurred while transmitting data to the device on the I2C bus.",
    },
    {
        .name = "STATUS_GRAPHICS_I2C_ERROR_RECEIVING_DATA",
        .value = 0xC01E0583UL,
        .description = "An error occurred while receiving data from the device on the I2C bus.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED",
        .value = 0xC01E0584UL,
        .description = "The monitor does not support the specified VCP code.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_INVALID_DATA",
        .value = 0xC01E0585UL,
        .description = "The data received from the monitor is invalid.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE",
        .value = 0xC01E0586UL,
        .description = "A function call failed because a monitor returned an invalid timing status byte when the operating system used the DDC/CI get timing report and timing message command to get a timing report from a monitor.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_INVALID_CAPABILITIES_STRING",
        .value = 0xC01E0587UL,
        .description = "A monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1, or MCCS 2 Revision 1 specification.",
    },
    {
        .name = "STATUS_GRAPHICS_MCA_INTERNAL_ERROR",
        .value = 0xC01E0588UL,
        .description = "An internal error caused an operation to fail.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND",
        .value = 0xC01E0589UL,
        .description = "An operation failed because a DDC/CI message had an invalid value in its command field.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH",
        .value = 0xC01E058AUL,
        .description = "This error occurred because a DDC/CI message had an invalid value in its length field.",
    },
    {
        .name = "STATUS_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM",
        .value = 0xC01E058BUL,
        .description = "This error occurred because the value in a DDC/CI message's checksum field did not match the message's computed checksum value. This error implies that the data was corrupted while it was being transmitted from a monitor to a computer.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_PHYSICAL_MONITOR_HANDLE",
        .value = 0xC01E058CUL,
        .description = "This function failed because an invalid monitor handle was passed to it.",
    },
    {
        .name = "STATUS_GRAPHICS_MONITOR_NO_LONGER_EXISTS",
        .value = 0xC01E058DUL,
        .description = "The operating system asynchronously destroyed the monitor that corresponds to this handle because the operating system's state changed. This error typically occurs because the monitor PDO associated with this handle was removed or stopped, or a display mode change occurred. A display mode change occurs when Windows sends a WM_DISPLAYCHANGE message to applications.",
    },
    {
        .name = "STATUS_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED",
        .value = 0xC01E05E0UL,
        .description = "This function can be used only if a program is running in the local console session. It cannot be used if a program is running on a remote desktop session or on a terminal server session.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME",
        .value = 0xC01E05E1UL,
        .description = "This function cannot find an actual GDI display device that corresponds to the specified GDI display device name.",
    },
    {
        .name = "STATUS_GRAPHICS_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP",
        .value = 0xC01E05E2UL,
        .description = "The function failed because the specified GDI display device was not attached to the Windows desktop.",
    },
    {
        .name = "STATUS_GRAPHICS_MIRRORING_DEVICES_NOT_SUPPORTED",
        .value = 0xC01E05E3UL,
        .description = "This function does not support GDI mirroring display devices because GDI mirroring display devices do not have any physical monitors associated with them.",
    },
    {
        .name = "STATUS_GRAPHICS_INVALID_POINTER",
        .value = 0xC01E05E4UL,
        .description = "The function failed because an invalid pointer parameter was passed to it. A pointer parameter is invalid if it is null, is not correctly aligned, or points to an invalid address or to a kernel mode address.",
    },
    {
        .name = "STATUS_GRAPHICS_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE",
        .value = 0xC01E05E5UL,
        .description = "This function failed because the GDI device passed to it did not have a monitor associated with it.",
    },
    {
        .name = "STATUS_GRAPHICS_PARAMETER_ARRAY_TOO_SMALL",
        .value = 0xC01E05E6UL,
        .description = "An array passed to the function cannot hold all of the data that the function must copy into the array.",
    },
    {
        .name = "STATUS_GRAPHICS_INTERNAL_ERROR",
        .value = 0xC01E05E7UL,
        .description = "An internal error caused an operation to fail.",
    },
    {
        .name = "STATUS_GRAPHICS_SESSION_TYPE_CHANGE_IN_PROGRESS",
        .value = 0xC01E05E8UL,
        .description = "The function failed because the current session is changing its type. This function cannot be called when the current session is changing its type. Three types of sessions currently exist: console, disconnected, and remote (RDP or ICA).",
    },
    {
        .name = "STATUS_FVE_LOCKED_VOLUME",
        .value = 0xC0210000UL,
        .description = "The volume must be unlocked before it can be used.",
    },
    {
        .name = "STATUS_FVE_NOT_ENCRYPTED",
        .value = 0xC0210001UL,
        .description = "The volume is fully decrypted and no key is available.",
    },
    {
        .name = "STATUS_FVE_BAD_INFORMATION",
        .value = 0xC0210002UL,
        .description = "The control block for the encrypted volume is not valid.",
    },
    {
        .name = "STATUS_FVE_TOO_SMALL",
        .value = 0xC0210003UL,
        .description = "Not enough free space remains on the volume to allow encryption.",
    },
    {
        .name = "STATUS_FVE_FAILED_WRONG_FS",
        .value = 0xC0210004UL,
        .description = "The partition cannot be encrypted because the file system is not supported.",
    },
    {
        .name = "STATUS_FVE_FAILED_BAD_FS",
        .value = 0xC0210005UL,
        .description = "The file system is inconsistent. Run the Check Disk utility.",
    },
    {
        .name = "STATUS_FVE_FS_NOT_EXTENDED",
        .value = 0xC0210006UL,
        .description = "The file system does not extend to the end of the volume.",
    },
    {
        .name = "STATUS_FVE_FS_MOUNTED",
        .value = 0xC0210007UL,
        .description = "This operation cannot be performed while a file system is mounted on the volume.",
    },
    {
        .name = "STATUS_FVE_NO_LICENSE",
        .value = 0xC0210008UL,
        .description = "BitLocker Drive Encryption is not included with this version of Windows.",
    },
    {
        .name = "STATUS_FVE_ACTION_NOT_ALLOWED",
        .value = 0xC0210009UL,
        .description = "The requested action was denied by the FVE control engine.",
    },
    {
        .name = "STATUS_FVE_BAD_DATA",
        .value = 0xC021000AUL,
        .description = "The data supplied is malformed.",
    },
    {
        .name = "STATUS_FVE_VOLUME_NOT_BOUND",
        .value = 0xC021000BUL,
        .description = "The volume is not bound to the system.",
    },
    {
        .name = "STATUS_FVE_NOT_DATA_VOLUME",
        .value = 0xC021000CUL,
        .description = "The volume specified is not a data volume.",
    },
    {
        .name = "STATUS_FVE_CONV_READ_ERROR",
        .value = 0xC021000DUL,
        .description = "A read operation failed while converting the volume.",
    },
    {
        .name = "STATUS_FVE_CONV_WRITE_ERROR",
        .value = 0xC021000EUL,
        .description = "A write operation failed while converting the volume.",
    },
    {
        .name = "STATUS_FVE_OVERLAPPED_UPDATE",
        .value = 0xC021000FUL,
        .description = "The control block for the encrypted volume was updated by another thread. Try again.",
    },
    {
        .name = "STATUS_FVE_FAILED_SECTOR_SIZE",
        .value = 0xC0210010UL,
        .description = "The volume encryption algorithm cannot be used on this sector size.",
    },
    {
        .name = "STATUS_FVE_FAILED_AUTHENTICATION",
        .value = 0xC0210011UL,
        .description = "BitLocker recovery authentication failed.",
    },
    {
        .name = "STATUS_FVE_NOT_OS_VOLUME",
        .value = 0xC0210012UL,
        .description = "The volume specified is not the boot operating system volume.",
    },
    {
        .name = "STATUS_FVE_KEYFILE_NOT_FOUND",
        .value = 0xC0210013UL,
        .description = "The BitLocker startup key or recovery password could not be read from external media.",
    },
    {
        .name = "STATUS_FVE_KEYFILE_INVALID",
        .value = 0xC0210014UL,
        .description = "The BitLocker startup key or recovery password file is corrupt or invalid.",
    },
    {
        .name = "STATUS_FVE_KEYFILE_NO_VMK",
        .value = 0xC0210015UL,
        .description = "The BitLocker encryption key could not be obtained from the startup key or the recovery password.",
    },
    {
        .name = "STATUS_FVE_TPM_DISABLED",
        .value = 0xC0210016UL,
        .description = "The TPM is disabled.",
    },
    {
        .name = "STATUS_FVE_TPM_SRK_AUTH_NOT_ZERO",
        .value = 0xC0210017UL,
        .description = "The authorization data for the SRK of the TPM is not zero.",
    },
    {
        .name = "STATUS_FVE_TPM_INVALID_PCR",
        .value = 0xC0210018UL,
        .description = "The system boot information changed or the TPM locked out access to BitLocker encryption keys until the computer is restarted.",
    },
    {
        .name = "STATUS_FVE_TPM_NO_VMK",
        .value = 0xC0210019UL,
        .description = "The BitLocker encryption key could not be obtained from the TPM.",
    },
    {
        .name = "STATUS_FVE_PIN_INVALID",
        .value = 0xC021001AUL,
        .description = "The BitLocker encryption key could not be obtained from the TPM and PIN.",
    },
    {
        .name = "STATUS_FVE_AUTH_INVALID_APPLICATION",
        .value = 0xC021001BUL,
        .description = "A boot application hash does not match the hash computed when BitLocker was turned on.",
    },
    {
        .name = "STATUS_FVE_AUTH_INVALID_CONFIG",
        .value = 0xC021001CUL,
        .description = "The Boot Configuration Data (BCD) settings are not supported or have changed because BitLocker was enabled.",
    },
    {
        .name = "STATUS_FVE_DEBUGGER_ENABLED",
        .value = 0xC021001DUL,
        .description = "Boot debugging is enabled. Run Windows Boot Configuration Data Store Editor (bcdedit.exe) to turn it off.",
    },
    {
        .name = "STATUS_FVE_DRY_RUN_FAILED",
        .value = 0xC021001EUL,
        .description = "The BitLocker encryption key could not be obtained.",
    },
    {
        .name = "STATUS_FVE_BAD_METADATA_POINTER",
        .value = 0xC021001FUL,
        .description = "The metadata disk region pointer is incorrect.",
    },
    {
        .name = "STATUS_FVE_OLD_METADATA_COPY",
        .value = 0xC0210020UL,
        .description = "The backup copy of the metadata is out of date.",
    },
    {
        .name = "STATUS_FVE_REBOOT_REQUIRED",
        .value = 0xC0210021UL,
        .description = "No action was taken because a system restart is required.",
    },
    {
        .name = "STATUS_FVE_RAW_ACCESS",
        .value = 0xC0210022UL,
        .description = "No action was taken because BitLocker Drive Encryption is in RAW access mode.",
    },
    {
        .name = "STATUS_FVE_RAW_BLOCKED",
        .value = 0xC0210023UL,
        .description = "BitLocker Drive Encryption cannot enter RAW access mode for this volume.",
    },
    {
        .name = "STATUS_FVE_NO_FEATURE_LICENSE",
        .value = 0xC0210026UL,
        .description = "This feature of BitLocker Drive Encryption is not included with this version of Windows.",
    },
    {
        .name = "STATUS_FVE_POLICY_USER_DISABLE_RDV_NOT_ALLOWED",
        .value = 0xC0210027UL,
        .description = "Group policy does not permit turning off BitLocker Drive Encryption on roaming data volumes.",
    },
    {
        .name = "STATUS_FVE_CONV_RECOVERY_FAILED",
        .value = 0xC0210028UL,
        .description = "Bitlocker Drive Encryption failed to recover from aborted conversion. This could be due to either all conversion logs being corrupted or the media being write-protected.",
    },
    {
        .name = "STATUS_FVE_VIRTUALIZED_SPACE_TOO_BIG",
        .value = 0xC0210029UL,
        .description = "The requested virtualization size is too big.",
    },
    {
        .name = "STATUS_FVE_VOLUME_TOO_SMALL",
        .value = 0xC0210030UL,
        .description = "The drive is too small to be protected using BitLocker Drive Encryption.",
    },
    {
        .name = "STATUS_FWP_CALLOUT_NOT_FOUND",
        .value = 0xC0220001UL,
        .description = "The callout does not exist.",
    },
    {
        .name = "STATUS_FWP_CONDITION_NOT_FOUND",
        .value = 0xC0220002UL,
        .description = "The filter condition does not exist.",
    },
    {
        .name = "STATUS_FWP_FILTER_NOT_FOUND",
        .value = 0xC0220003UL,
        .description = "The filter does not exist.",
    },
    {
        .name = "STATUS_FWP_LAYER_NOT_FOUND",
        .value = 0xC0220004UL,
        .description = "The layer does not exist.",
    },
    {
        .name = "STATUS_FWP_PROVIDER_NOT_FOUND",
        .value = 0xC0220005UL,
        .description = "The provider does not exist.",
    },
    {
        .name = "STATUS_FWP_PROVIDER_CONTEXT_NOT_FOUND",
        .value = 0xC0220006UL,
        .description = "The provider context does not exist.",
    },
    {
        .name = "STATUS_FWP_SUBLAYER_NOT_FOUND",
        .value = 0xC0220007UL,
        .description = "The sublayer does not exist.",
    },
    {
        .name = "STATUS_FWP_NOT_FOUND",
        .value = 0xC0220008UL,
        .description = "The object does not exist.",
    },
    {
        .name = "STATUS_FWP_ALREADY_EXISTS",
        .value = 0xC0220009UL,
        .description = "An object with that GUID or LUID already exists.",
    },
    {
        .name = "STATUS_FWP_IN_USE",
        .value = 0xC022000AUL,
        .description = "The object is referenced by other objects and cannot be deleted.",
    },
    {
        .name = "STATUS_FWP_DYNAMIC_SESSION_IN_PROGRESS",
        .value = 0xC022000BUL,
        .description = "The call is not allowed from within a dynamic session.",
    },
    {
        .name = "STATUS_FWP_WRONG_SESSION",
        .value = 0xC022000CUL,
        .description = "The call was made from the wrong session and cannot be completed.",
    },
    {
        .name = "STATUS_FWP_NO_TXN_IN_PROGRESS",
        .value = 0xC022000DUL,
        .description = "The call must be made from within an explicit transaction.",
    },
    {
        .name = "STATUS_FWP_TXN_IN_PROGRESS",
        .value = 0xC022000EUL,
        .description = "The call is not allowed from within an explicit transaction.",
    },
    {
        .name = "STATUS_FWP_TXN_ABORTED",
        .value = 0xC022000FUL,
        .description = "The explicit transaction has been forcibly canceled.",
    },
    {
        .name = "STATUS_FWP_SESSION_ABORTED",
        .value = 0xC0220010UL,
        .description = "The session has been canceled.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_TXN",
        .value = 0xC0220011UL,
        .description = "The call is not allowed from within a read-only transaction.",
    },
    {
        .name = "STATUS_FWP_TIMEOUT",
        .value = 0xC0220012UL,
        .description = "The call timed out while waiting to acquire the transaction lock.",
    },
    {
        .name = "STATUS_FWP_NET_EVENTS_DISABLED",
        .value = 0xC0220013UL,
        .description = "The collection of network diagnostic events is disabled.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_LAYER",
        .value = 0xC0220014UL,
        .description = "The operation is not supported by the specified layer.",
    },
    {
        .name = "STATUS_FWP_KM_CLIENTS_ONLY",
        .value = 0xC0220015UL,
        .description = "The call is allowed for kernel-mode callers only.",
    },
    {
        .name = "STATUS_FWP_LIFETIME_MISMATCH",
        .value = 0xC0220016UL,
        .description = "The call tried to associate two objects with incompatible lifetimes.",
    },
    {
        .name = "STATUS_FWP_BUILTIN_OBJECT",
        .value = 0xC0220017UL,
        .description = "The object is built-in and cannot be deleted.",
    },
    {
        .name = "STATUS_FWP_TOO_MANY_BOOTTIME_FILTERS",
        .value = 0xC0220018UL,
        .description = "The maximum number of boot-time filters has been reached.",
    },
    {
        .name = "STATUS_FWP_TOO_MANY_CALLOUTS",
        .value = 0xC0220018UL,
        .description = "The maximum number of callouts has been reached.",
    },
    {
        .name = "STATUS_FWP_NOTIFICATION_DROPPED",
        .value = 0xC0220019UL,
        .description = "A notification could not be delivered because a message queue has reached maximum capacity.",
    },
    {
        .name = "STATUS_FWP_TRAFFIC_MISMATCH",
        .value = 0xC022001AUL,
        .description = "The traffic parameters do not match those for the security association context.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_SA_STATE",
        .value = 0xC022001BUL,
        .description = "The call is not allowed for the current security association state.",
    },
    {
        .name = "STATUS_FWP_NULL_POINTER",
        .value = 0xC022001CUL,
        .description = "A required pointer is null.",
    },
    {
        .name = "STATUS_FWP_INVALID_ENUMERATOR",
        .value = 0xC022001DUL,
        .description = "An enumerator is not valid.",
    },
    {
        .name = "STATUS_FWP_INVALID_FLAGS",
        .value = 0xC022001EUL,
        .description = "The flags field contains an invalid value.",
    },
    {
        .name = "STATUS_FWP_INVALID_NET_MASK",
        .value = 0xC022001FUL,
        .description = "A network mask is not valid.",
    },
    {
        .name = "STATUS_FWP_INVALID_RANGE",
        .value = 0xC0220020UL,
        .description = "An FWP_RANGE is not valid.",
    },
    {
        .name = "STATUS_FWP_INVALID_INTERVAL",
        .value = 0xC0220021UL,
        .description = "The time interval is not valid.",
    },
    {
        .name = "STATUS_FWP_ZERO_LENGTH_ARRAY",
        .value = 0xC0220022UL,
        .description = "An array that must contain at least one element has a zero length.",
    },
    {
        .name = "STATUS_FWP_NULL_DISPLAY_NAME",
        .value = 0xC0220023UL,
        .description = "The displayData.name field cannot be null.",
    },
    {
        .name = "STATUS_FWP_INVALID_ACTION_TYPE",
        .value = 0xC0220024UL,
        .description = "The action type is not one of the allowed action types for a filter.",
    },
    {
        .name = "STATUS_FWP_INVALID_WEIGHT",
        .value = 0xC0220025UL,
        .description = "The filter weight is not valid.",
    },
    {
        .name = "STATUS_FWP_MATCH_TYPE_MISMATCH",
        .value = 0xC0220026UL,
        .description = "A filter condition contains a match type that is not compatible with the operands.",
    },
    {
        .name = "STATUS_FWP_TYPE_MISMATCH",
        .value = 0xC0220027UL,
        .description = "An FWP_VALUE or FWPM_CONDITION_VALUE is of the wrong type.",
    },
    {
        .name = "STATUS_FWP_OUT_OF_BOUNDS",
        .value = 0xC0220028UL,
        .description = "An integer value is outside the allowed range.",
    },
    {
        .name = "STATUS_FWP_RESERVED",
        .value = 0xC0220029UL,
        .description = "A reserved field is nonzero.",
    },
    {
        .name = "STATUS_FWP_DUPLICATE_CONDITION",
        .value = 0xC022002AUL,
        .description = "A filter cannot contain multiple conditions operating on a single field.",
    },
    {
        .name = "STATUS_FWP_DUPLICATE_KEYMOD",
        .value = 0xC022002BUL,
        .description = "A policy cannot contain the same keying module more than once.",
    },
    {
        .name = "STATUS_FWP_ACTION_INCOMPATIBLE_WITH_LAYER",
        .value = 0xC022002CUL,
        .description = "The action type is not compatible with the layer.",
    },
    {
        .name = "STATUS_FWP_ACTION_INCOMPATIBLE_WITH_SUBLAYER",
        .value = 0xC022002DUL,
        .description = "The action type is not compatible with the sublayer.",
    },
    {
        .name = "STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_LAYER",
        .value = 0xC022002EUL,
        .description = "The raw context or the provider context is not compatible with the layer.",
    },
    {
        .name = "STATUS_FWP_CONTEXT_INCOMPATIBLE_WITH_CALLOUT",
        .value = 0xC022002FUL,
        .description = "The raw context or the provider context is not compatible with the callout.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_AUTH_METHOD",
        .value = 0xC0220030UL,
        .description = "The authentication method is not compatible with the policy type.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_DH_GROUP",
        .value = 0xC0220031UL,
        .description = "The Diffie-Hellman group is not compatible with the policy type.",
    },
    {
        .name = "STATUS_FWP_EM_NOT_SUPPORTED",
        .value = 0xC0220032UL,
        .description = "An IKE policy cannot contain an Extended Mode policy.",
    },
    {
        .name = "STATUS_FWP_NEVER_MATCH",
        .value = 0xC0220033UL,
        .description = "The enumeration template or subscription will never match any objects.",
    },
    {
        .name = "STATUS_FWP_PROVIDER_CONTEXT_MISMATCH",
        .value = 0xC0220034UL,
        .description = "The provider context is of the wrong type.",
    },
    {
        .name = "STATUS_FWP_INVALID_PARAMETER",
        .value = 0xC0220035UL,
        .description = "The parameter is incorrect.",
    },
    {
        .name = "STATUS_FWP_TOO_MANY_SUBLAYERS",
        .value = 0xC0220036UL,
        .description = "The maximum number of sublayers has been reached.",
    },
    {
        .name = "STATUS_FWP_CALLOUT_NOTIFICATION_FAILED",
        .value = 0xC0220037UL,
        .description = "The notification function for a callout returned an error.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_AUTH_CONFIG",
        .value = 0xC0220038UL,
        .description = "The IPsec authentication configuration is not compatible with the authentication type.",
    },
    {
        .name = "STATUS_FWP_INCOMPATIBLE_CIPHER_CONFIG",
        .value = 0xC0220039UL,
        .description = "The IPsec cipher configuration is not compatible with the cipher type.",
    },
    {
        .name = "STATUS_FWP_DUPLICATE_AUTH_METHOD",
        .value = 0xC022003CUL,
        .description = "A policy cannot contain the same auth method more than once.",
    },
    {
        .name = "STATUS_FWP_TCPIP_NOT_READY",
        .value = 0xC0220100UL,
        .description = "The TCP/IP stack is not ready.",
    },
    {
        .name = "STATUS_FWP_INJECT_HANDLE_CLOSING",
        .value = 0xC0220101UL,
        .description = "The injection handle is being closed by another thread.",
    },
    {
        .name = "STATUS_FWP_INJECT_HANDLE_STALE",
        .value = 0xC0220102UL,
        .description = "The injection handle is stale.",
    },
    {
        .name = "STATUS_FWP_CANNOT_PEND",
        .value = 0xC0220103UL,
        .description = "The classify cannot be pended.",
    },
    {
        .name = "STATUS_NDIS_CLOSING",
        .value = 0xC0230002UL,
        .description = "The binding to the network interface is being closed.",
    },
    {
        .name = "STATUS_NDIS_BAD_VERSION",
        .value = 0xC0230004UL,
        .description = "An invalid version was specified.",
    },
    {
        .name = "STATUS_NDIS_BAD_CHARACTERISTICS",
        .value = 0xC0230005UL,
        .description = "An invalid characteristics table was used.",
    },
    {
        .name = "STATUS_NDIS_ADAPTER_NOT_FOUND",
        .value = 0xC0230006UL,
        .description = "Failed to find the network interface or the network interface is not ready.",
    },
    {
        .name = "STATUS_NDIS_OPEN_FAILED",
        .value = 0xC0230007UL,
        .description = "Failed to open the network interface.",
    },
    {
        .name = "STATUS_NDIS_DEVICE_FAILED",
        .value = 0xC0230008UL,
        .description = "The network interface has encountered an internal unrecoverable failure.",
    },
    {
        .name = "STATUS_NDIS_MULTICAST_FULL",
        .value = 0xC0230009UL,
        .description = "The multicast list on the network interface is full.",
    },
    {
        .name = "STATUS_NDIS_MULTICAST_EXISTS",
        .value = 0xC023000AUL,
        .description = "An attempt was made to add a duplicate multicast address to the list.",
    },
    {
        .name = "STATUS_NDIS_MULTICAST_NOT_FOUND",
        .value = 0xC023000BUL,
        .description = "At attempt was made to remove a multicast address that was never added.",
    },
    {
        .name = "STATUS_NDIS_REQUEST_ABORTED",
        .value = 0xC023000CUL,
        .description = "The network interface aborted the request.",
    },
    {
        .name = "STATUS_NDIS_RESET_IN_PROGRESS",
        .value = 0xC023000DUL,
        .description = "The network interface cannot process the request because it is being reset.",
    },
    {
        .name = "STATUS_NDIS_INVALID_PACKET",
        .value = 0xC023000FUL,
        .description = "An attempt was made to send an invalid packet on a network interface.",
    },
    {
        .name = "STATUS_NDIS_INVALID_DEVICE_REQUEST",
        .value = 0xC0230010UL,
        .description = "The specified request is not a valid operation for the target device.",
    },
    {
        .name = "STATUS_NDIS_ADAPTER_NOT_READY",
        .value = 0xC0230011UL,
        .description = "The network interface is not ready to complete this operation.",
    },
    {
        .name = "STATUS_NDIS_INVALID_LENGTH",
        .value = 0xC0230014UL,
        .description = "The length of the buffer submitted for this operation is not valid.",
    },
    {
        .name = "STATUS_NDIS_INVALID_DATA",
        .value = 0xC0230015UL,
        .description = "The data used for this operation is not valid.",
    },
    {
        .name = "STATUS_NDIS_BUFFER_TOO_SHORT",
        .value = 0xC0230016UL,
        .description = "The length of the submitted buffer for this operation is too small.",
    },
    {
        .name = "STATUS_NDIS_INVALID_OID",
        .value = 0xC0230017UL,
        .description = "The network interface does not support this object identifier.",
    },
    {
        .name = "STATUS_NDIS_ADAPTER_REMOVED",
        .value = 0xC0230018UL,
        .description = "The network interface has been removed.",
    },
    {
        .name = "STATUS_NDIS_UNSUPPORTED_MEDIA",
        .value = 0xC0230019UL,
        .description = "The network interface does not support this media type.",
    },
    {
        .name = "STATUS_NDIS_GROUP_ADDRESS_IN_USE",
        .value = 0xC023001AUL,
        .description = "An attempt was made to remove a token ring group address that is in use by other components.",
    },
    {
        .name = "STATUS_NDIS_FILE_NOT_FOUND",
        .value = 0xC023001BUL,
        .description = "An attempt was made to map a file that cannot be found.",
    },
    {
        .name = "STATUS_NDIS_ERROR_READING_FILE",
        .value = 0xC023001CUL,
        .description = "An error occurred while NDIS tried to map the file.",
    },
    {
        .name = "STATUS_NDIS_ALREADY_MAPPED",
        .value = 0xC023001DUL,
        .description = "An attempt was made to map a file that is already mapped.",
    },
    {
        .name = "STATUS_NDIS_RESOURCE_CONFLICT",
        .value = 0xC023001EUL,
        .description = "An attempt to allocate a hardware resource failed because the resource is used by another component.",
    },
    {
        .name = "STATUS_NDIS_MEDIA_DISCONNECTED",
        .value = 0xC023001FUL,
        .description = "The I/O operation failed because the network media is disconnected or the wireless access point is out of range.",
    },
    {
        .name = "STATUS_NDIS_INVALID_ADDRESS",
        .value = 0xC0230022UL,
        .description = "The network address used in the request is invalid.",
    },
    {
        .name = "STATUS_NDIS_PAUSED",
        .value = 0xC023002AUL,
        .description = "The offload operation on the network interface has been paused.",
    },
    {
        .name = "STATUS_NDIS_INTERFACE_NOT_FOUND",
        .value = 0xC023002BUL,
        .description = "The network interface was not found.",
    },
    {
        .name = "STATUS_NDIS_UNSUPPORTED_REVISION",
        .value = 0xC023002CUL,
        .description = "The revision number specified in the structure is not supported.",
    },
    {
        .name = "STATUS_NDIS_INVALID_PORT",
        .value = 0xC023002DUL,
        .description = "The specified port does not exist on this network interface.",
    },
    {
        .name = "STATUS_NDIS_INVALID_PORT_STATE",
        .value = 0xC023002EUL,
        .description = "The current state of the specified port on this network interface does not support the requested operation.",
    },
    {
        .name = "STATUS_NDIS_LOW_POWER_STATE",
        .value = 0xC023002FUL,
        .description = "The miniport adapter is in a lower power state.",
    },
    {
        .name = "STATUS_NDIS_NOT_SUPPORTED",
        .value = 0xC02300BBUL,
        .description = "The network interface does not support this request.",
    },
    {
        .name = "STATUS_NDIS_OFFLOAD_POLICY",
        .value = 0xC023100FUL,
        .description = "The TCP connection is not offloadable because of a local policy setting.",
    },
    {
        .name = "STATUS_NDIS_OFFLOAD_CONNECTION_REJECTED",
        .value = 0xC0231012UL,
        .description = "The TCP connection is not offloadable by the Chimney offload target.",
    },
    {
        .name = "STATUS_NDIS_OFFLOAD_PATH_REJECTED",
        .value = 0xC0231013UL,
        .description = "The IP Path object is not in an offloadable state.",
    },
    {
        .name = "STATUS_NDIS_DOT11_AUTO_CONFIG_ENABLED",
        .value = 0xC0232000UL,
        .description = "The wireless LAN interface is in auto-configuration mode and does not support the requested parameter change operation.",
    },
    {
        .name = "STATUS_NDIS_DOT11_MEDIA_IN_USE",
        .value = 0xC0232001UL,
        .description = "The wireless LAN interface is busy and cannot perform the requested operation.",
    },
    {
        .name = "STATUS_NDIS_DOT11_POWER_STATE_INVALID",
        .value = 0xC0232002UL,
        .description = "The wireless LAN interface is power down and does not support the requested operation.",
    },
    {
        .name = "STATUS_NDIS_PM_WOL_PATTERN_LIST_FULL",
        .value = 0xC0232003UL,
        .description = "The list of wake on LAN patterns is full.",
    },
    {
        .name = "STATUS_NDIS_PM_PROTOCOL_OFFLOAD_LIST_FULL",
        .value = 0xC0232004UL,
        .description = "The list of low power protocol offloads is full.",
    },
    {
        .name = "STATUS_IPSEC_BAD_SPI",
        .value = 0xC0360001UL,
        .description = "The SPI in the packet does not match a valid IPsec SA.",
    },
    {
        .name = "STATUS_IPSEC_SA_LIFETIME_EXPIRED",
        .value = 0xC0360002UL,
        .description = "The packet was received on an IPsec SA whose lifetime has expired.",
    },
    {
        .name = "STATUS_IPSEC_WRONG_SA",
        .value = 0xC0360003UL,
        .description = "The packet was received on an IPsec SA that does not match the packet characteristics.",
    },
    {
        .name = "STATUS_IPSEC_REPLAY_CHECK_FAILED",
        .value = 0xC0360004UL,
        .description = "The packet sequence number replay check failed.",
    },
    {
        .name = "STATUS_IPSEC_INVALID_PACKET",
        .value = 0xC0360005UL,
        .description = "The IPsec header and/or trailer in the packet is invalid.",
    },
    {
        .name = "STATUS_IPSEC_INTEGRITY_CHECK_FAILED",
        .value = 0xC0360006UL,
        .description = "The IPsec integrity check failed.",
    },
    {
        .name = "STATUS_IPSEC_CLEAR_TEXT_DROP",
        .value = 0xC0360007UL,
        .description = "IPsec dropped a clear text packet.",
    },
    {
        .name = "STATUS_IPSEC_AUTH_FIREWALL_DROP",
        .value = 0xC0360008UL,
        .description = "IPsec dropped an incoming ESP packet in authenticated firewall mode. This drop is benign.",
    },
    {
        .name = "STATUS_IPSEC_THROTTLE_DROP",
        .value = 0xC0360009UL,
        .description = "IPsec dropped a packet due to DOS throttle.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_BLOCK",
        .value = 0xC0368000UL,
        .description = "IPsec Dos Protection matched an explicit block rule.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_RECEIVED_MULTICAST",
        .value = 0xC0368001UL,
        .description = "IPsec Dos Protection received an IPsec specific multicast packet which is not allowed.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_INVALID_PACKET",
        .value = 0xC0368002UL,
        .description = "IPsec Dos Protection received an incorrectly formatted packet.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_STATE_LOOKUP_FAILED",
        .value = 0xC0368003UL,
        .description = "IPsec Dos Protection failed to lookup state.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_MAX_ENTRIES",
        .value = 0xC0368004UL,
        .description = "IPsec Dos Protection failed to create state because there are already maximum number of entries allowed by policy.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_KEYMOD_NOT_ALLOWED",
        .value = 0xC0368005UL,
        .description = "IPsec Dos Protection received an IPsec negotiation packet for a keying module which is not allowed by policy.",
    },
    {
        .name = "STATUS_IPSEC_DOSP_MAX_PER_IP_RATELIMIT_QUEUES",
        .value = 0xC0368006UL,
        .description = "IPsec Dos Protection failed to create per internal IP ratelimit queue because there is already maximum number of queues allowed by policy.",
    },
    {
        .name = "STATUS_VOLMGR_MIRROR_NOT_SUPPORTED",
        .value = 0xC038005BUL,
        .description = "The system does not support mirrored volumes.",
    },
    {
        .name = "STATUS_VOLMGR_RAID5_NOT_SUPPORTED",
        .value = 0xC038005CUL,
        .description = "The system does not support RAID-5 volumes.",
    },
    {
        .name = "STATUS_VIRTDISK_PROVIDER_NOT_FOUND",
        .value = 0xC03A0014UL,
        .description = "A virtual disk support provider for the specified file was not found.",
    },
    {
        .name = "STATUS_VIRTDISK_NOT_VIRTUAL_DISK",
        .value = 0xC03A0015UL,
        .description = "The specified disk is not a virtual disk.",
    },
    {
        .name = "STATUS_VHD_PARENT_VHD_ACCESS_DENIED",
        .value = 0xC03A0016UL,
        .description = "The chain of virtual hard disks is inaccessible. The process has not been granted access rights to the parent virtual hard disk for the differencing disk.",
    },
    {
        .name = "STATUS_VHD_CHILD_PARENT_SIZE_MISMATCH",
        .value = 0xC03A0017UL,
        .description = "The chain of virtual hard disks is corrupted. There is a mismatch in the virtual sizes of the parent virtual hard disk and differencing disk.",
    },
    {
        .name = "STATUS_VHD_DIFFERENCING_CHAIN_CYCLE_DETECTED",
        .value = 0xC03A0018UL,
        .description = "The chain of virtual hard disks is corrupted. A differencing disk is indicated in its own parent chain.",
    },
    {
        .name = "STATUS_VHD_DIFFERENCING_CHAIN_ERROR_IN_PARENT",
        .value = 0xC03A0019UL,
        .description = "The chain of virtual hard disks is inaccessible. There was an error opening a virtual hard disk further up the chain.",
    },
    {
        .name = "STATUS_SMB_NO_PREAUTH_INTEGRITY_HASH_OVERLAP",
        .value = 0xC05D0000UL,
        .description = "Returned in response to a client negotiate request when the server does not support any of the hash algorithms in the request.",
    },
    {
        .name = "STATUS_SMB_BAD_CLUSTER_DIALECT",
        .value = 0xC05D0001UL,
        .description = "The current cluster functional level does not support this SMB dialect. Additional resources Last updated on 2021-11-16 In this article en-us Your Privacy Choices Theme Light Dark High contrast AI Disclaimer Previous Versions Blog Contribute Privacy Consumer Health Privacy Terms of Use Trademarks © Microsoft 2026",
    },
};

const size_t ntstatus_table_count = 
    sizeof(ntstatus_table) / sizeof(ntstatus_table[0]);
