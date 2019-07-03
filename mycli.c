#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
    
    char command_buf[20];
    printf("user@mypc$ ");
    scanf("%s",command_buf);

    pid_t pid;
    pid = fork();

    if(pid == 0) //Process child
    {
       execl(command_buf, command_buf, NULL);
    } else       //Process father
    {
      wait(NULL);
    }

    return 0;
}
