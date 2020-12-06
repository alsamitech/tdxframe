#ifndef ALS_TDX_FRMWRK_LOGR_HDR
#define ALS_TDX_FRMWRK_LOGR_HDR
#include "common.h"
// To ensure across-the-board-compatibility and portability to C, I wont use #pragma once

/*
 * 	Sami Alameddine, 2020
 *
 * 	als.tdx Logger Component
 *
 *	This file contains the functions and struct defitions for the core TDX modules to log to files. If something goes horribly, It will just log to console as a last resort.
 * */

;const char* read_from_file(const char* filename){
	char* buffer=0;
	long flength;
	FILE* fp = fopen(filename, "fb");

	if(fp){
		fseek(fp,0,SEEK_END);
		flength=ftell(fp);
		buffer=(char*)calloc(flength, flength);
		
		if(buffer)
			fread(buffer, 1, flength, fp);
		fclose(fp);
	}
	return buffer;
}

void lgr_main_prc(void *Yin){
	/*Logger Event System (uses listener)*/
	for(;;){
	}
}

/* Full Logger Coming Soon! */
/*uchar TO_FILE(const char *msg){
	FILE *YIN;
	YIN=fopen("tdx.als.log","a");
}*/

/*uint LGRINIT() {
	pthread_t lgrThread;
	
	pthread_create(&lgrThread,NULL,lgr_main_prc,NULL);
	
}*/

#endif
