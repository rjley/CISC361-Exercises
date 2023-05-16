#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {
int status;
int pid = fork();
// Write C code here
    if(pid==0){
        int pid1 = fork();
        if(pid1 != 0){
            pid = getpid();
            printf("I am the child %d\n", pid);
        }
        else{
            pid1 = getpid();
            printf("I am the grandchild %d\n", pid1);
        }
    }
    else{
        pid = getpid();
        printf("I am the parent %d\n", pid);
    }
    return 0;

}
