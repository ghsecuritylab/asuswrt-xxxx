/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "librpc/gen_ndr/srv_perfcount.h"


/* Tables */
static struct api_struct api_perfcount_cmds[] = 
{
};

void perfcount_get_pipe_fns(struct api_struct **fns, int *n_fns)
{
	*fns = api_perfcount_cmds;
	*n_fns = sizeof(api_perfcount_cmds) / sizeof(struct api_struct);
}

NTSTATUS rpc_perfcount_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "perfcount", "perfcount", &ndr_table_perfcount, api_perfcount_cmds, sizeof(api_perfcount_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_perfcount_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_perfcount);
}
