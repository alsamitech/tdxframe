#ifndef TDXFRAME_CHDR
#define TDXFRAEM_CHDR

ssize_t twrite(int fd, const char* content){
	return write(fd, content, sizeof(content));}

#include "common.h"

uint alsinit() {
      pid_t pid;
      int mpfd[2];
      int p_status;
      if(p_status==-1){
              fprintf(stderr, "\033[1;31mTDXFramework, Error While Creating pipe. Check Log File for more information\033[0m\n");
              return 1;
      }       
      pid=fork();
      if(pid==0){
          /*child process*/
	  char* content=(char*)malloc(sizeof(char)*100);
	  if(read(mpfd[0], content,sizeof(content))==-1){
	  	// TODO: Log Error
	  }
      }else{
              /*parent proces*/
          twrite(mpfd[1], "TDX START");
      }


      return 0;
}

#endif
