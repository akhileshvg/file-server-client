CLFALGS=-lnsl

all:UDPClient FileServer

UDPClient: file_server.h file_server_xdr.o
	gcc UDPClient.c file_server_clnt.c file_server_xdr.o -o UDPClient $(CFLAGS)

FileServer: file_server.h file_server_xdr.o
	gcc  fileServerProcedures.c file_server_svc.c file_server_xdr.o -o FileServer $(CFLAGS)

file_server.h:
	rpcgen -N file_server.x

file_server_xdr.o:
	gcc -c file_server_xdr.c

clean:
	rm  file_server.h file_server_clnt.c file_server_svc.c file_server_xdr.c file_server_xdr.o UDPClient FileServer
