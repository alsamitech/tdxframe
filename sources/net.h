#ifndef ALSAMI_TDXFRAME_NETHEADER
#define ALSAMI_TDXFRAME_NETHEADER

/*
 *	Sami Alameddine, 2020
 *
 * 	THIS HEADER FILE:
 * 		ID: ALSAMI_TDXFRAME_NETHEADER
 * 		This header file is meant to make setting up socets way easier.
 *
 * */


/*
 *	NOTE:
 *		Have you ever wondered why most C IS_WRIITN_LIKE_THIS? This is because tradionally, C code is very cryptic. This is to save time on writing long names like in Java.
 * */
int C_ALS_SOCKET(int port) {
	// Do anything here, if you want to base a protocol library on TDXFRAME, please put a link to your procol doumentation here.
	int CASK;
	// C ALS socKet
	CASK = socket(AF_INET, SOCK_STREAM);

}

#endif
