#ifndef DOT_ALS_TDX_FRAMEWORK_COMMON_H
#define DOT_ALS_TDX_FRAMEWORK_COMMON_H

/*
 *	als.tdx Rewrite
 *
 *	This is the common.h header. This header file contains all the headers that the als.tdx daemon relies on (aka depencies aka standard library header files)
 *
 *
 * */

// Standard input and output
#include <stdio.h>
// Standard fucntions (basically required to do anything meaningful in C.)
#include <stdlib.h>

// pthread.h POSIX Multithreading header.
#include <pthread.h>
#include <unistd.h>

#include <sys/types.h>
// Socket header file
#include <sys/socket.h>

#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <fcntl.h>


/*Local Header files*/
#endif
