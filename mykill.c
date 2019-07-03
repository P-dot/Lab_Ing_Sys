#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Error - usage: %s <pid> <signal>", argv[0]);
	exit(1); //return 1;
    }   

    //mykill pid signal
    pid_t pid = atoi(argv[1]);
    int signal = atoi(argv[2]);

    if (kill(pid, signal) == 0) {
        printf("Success \n");
    } else  {
        fprintf(stderr,"Error executing kill function");
        exit(1);
    }
    return 0;
}
