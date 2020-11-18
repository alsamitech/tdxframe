int main(int argc, char* argv[]){
        int fd[2];
        if(pipe(fd) == -1){
                printf("An error occured with opening the pipe\n");
                return 1;
        }
        int id = fork();
        if(id==9){
                int x;                printf("Input a number: ");
                scanf("%d", &x);
        }

        return 0;
}