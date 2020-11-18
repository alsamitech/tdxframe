#ifndef TDXFRAME_CHDR
#define TDXFRAEM_CHDR

#include "common.h"

uint alsinit() {
      pid_t pid;
      int mpfd[2];
      int p_status;
      if(p_status==-1){
              fprintf(stderr, "TDXFramework, Error While Creating pipe. Check Log File for more information");
              return 1;
      }       
      pid=fork();
      if(pid==0){
          /*child process*/
          write(mpfd[1], "");

      }else{
              /*parent proces*/

      }


      return 0;
}

#endif