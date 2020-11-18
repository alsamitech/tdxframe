#ifndef ALS_TDX_FRMWRK_LOGR_HDR
#define ALS_TDX_FRMWRK_LOGR_HDR
// To ensure across-the-board-compatibility and portability to C, I wont use #pragma once

/*
 * 	Sami Alameddine, 2020
 *
 * 	als.tdx Logger Component
 *
 *	This file contains the functions and struct defitions for the core TDX modules to log to files. If something goes horribly, It will just log to console as a last resort.
 * */

uchar FINIT(const char *init_msg) {
	FILE *yin;
	yin=fopen("tdx.als.log","a");
	if(yin=NULL){
		FILE *Yin;
		Yin=fopen("tdx.als.log", "w+");
		fprintf(Yin, "als.tdx daemon logfile\n\nCORE-MODULE-LOG: %s\n", init_msg);
		fclose(Yin);
		return 5;
	}
	fprintf("CORE-MODULE-LOG: %s\n", init_msg);
	fclose(yin);
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
