/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FILE_SERVER_H_RPCGEN
#define _FILE_SERVER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct request_file_1_argument {
	char *arg1;
	int arg2;
};
typedef struct request_file_1_argument request_file_1_argument;

#define FILESERVER 0x20000001
#define FILESERVERVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define GET_FILE_SIZE 1
extern  int * get_file_size_1(char *, CLIENT *);
extern  int * get_file_size_1_svc(char *, struct svc_req *);
#define REQUEST_FILE 2
extern  char ** request_file_1(char *, int , CLIENT *);
extern  char ** request_file_1_svc(char *, int , struct svc_req *);
extern int fileserver_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GET_FILE_SIZE 1
extern  int * get_file_size_1();
extern  int * get_file_size_1_svc();
#define REQUEST_FILE 2
extern  char ** request_file_1();
extern  char ** request_file_1_svc();
extern int fileserver_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_request_file_1_argument (XDR *, request_file_1_argument*);

#else /* K&R C */
extern bool_t xdr_request_file_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FILE_SERVER_H_RPCGEN */
