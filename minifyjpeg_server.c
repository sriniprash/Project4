/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "minifyjpeg.h"

bool_t
minify_proc_1_svc(input arg1, output *result,  struct svc_req *rqstp)
{
	bool_t retval;

	/*
	 * insert server code here
	 */

	return retval;
}

int
minify_prog_1_freeresult (SVCXPRT *transp, xdrproc_t xdr_result, caddr_t result)
{
	xdr_free (xdr_result, result);

	/*
	 * Insert additional freeing code here, if needed
	 */

	return 1;
}
