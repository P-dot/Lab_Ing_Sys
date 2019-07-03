#include <syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(void) {
    long ID1, ID2;
    //SYS_getpid (func no. is 20)
    //Direct system call con el ID del proceso
    ID1 = syscall(SYS_getpid);
    printf("syscall(SYS_getpid) = %ld\n", ID1);
    //Llamamos al sistema mediante la librería libc
    //SYS_getpid ( Func No. is 20)
    ID2 = getpid();
    printf("getpid() = %ld\n", ID2);

    return 0;
}
