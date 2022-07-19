/* INCLUDES ******************************************************************/

#include <k32.h>

#define NDEBUG
#include <debug.h>

static inline BOOL set_ntstatus( NTSTATUS status )
{
    if (status) SetLastError( RtlNtStatusToDosError( status ));
    return !status;
}

#define FSCTL_PIPE_GET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 11, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 13, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 14, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_FLUSH                    CTL_CODE(FILE_DEVICE_NAMED_PIPE, 16, METHOD_BUFFERED, FILE_WRITE_DATA)



/***********************************************************************
 *           GetNamedPipeClientProcessId  (KERNEL32.@)
 */
BOOL WINAPI GetNamedPipeClientProcessId( HANDLE pipe, ULONG *id )
{
    IO_STATUS_BLOCK iosb;

    return set_ntstatus( NtFsControlFile( pipe, NULL, NULL, NULL, &iosb,
                                          FSCTL_PIPE_GET_CONNECTION_ATTRIBUTE, (void *)"ClientProcessId",
                                          sizeof("ClientProcessId"), id, sizeof(*id) ));
}

/***********************************************************************
 *           GetNamedPipeServerProcessId  (KERNEL32.@)
 */
BOOL WINAPI GetNamedPipeServerProcessId( HANDLE pipe, ULONG *id )
{
    IO_STATUS_BLOCK iosb;

    return set_ntstatus( NtFsControlFile( pipe, NULL, NULL, NULL, &iosb,
                                          FSCTL_PIPE_GET_CONNECTION_ATTRIBUTE, (void *)"ServerProcessId",
                                          sizeof("ServerProcessId"), id, sizeof(*id) ));
}

/***********************************************************************
 *           GetNamedPipeClientSessionId  (KERNEL32.@)
 */
BOOL WINAPI GetNamedPipeClientSessionId( HANDLE pipe, ULONG *id )
{

    if (!id) return FALSE;
    *id = NtCurrentTeb()->ProcessEnvironmentBlock->SessionId;
    return TRUE;
}

/***********************************************************************
 *           GetNamedPipeServerSessionId  (KERNEL32.@)
 */
BOOL WINAPI GetNamedPipeServerSessionId( HANDLE pipe, ULONG *id )
{

    if (!id) return FALSE;
    *id = NtCurrentTeb()->ProcessEnvironmentBlock->SessionId;
    return TRUE;
}

