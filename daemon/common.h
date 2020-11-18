#ifndef DOT_ALS_TDX_FRAMEWORK_COMMON_H
#define DOT_ALS_TDX_FRAMEWORK_COMMON_H

/*
 *	als.tdx Rewrite
 *
 *	This is the common.h header. This header file contains all the headers that the als.tdx daemon relies on (aka depencies aka standard library header files)
 *
 *
 * */

// For the sake of sanity
typedef unsigned int unit;

// The guy at the cpp help discord told me not to use this
//#define uint unsigned int

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

char event_buffer[512]

#include "logger.h"

/*Local Header files*/
#endif
