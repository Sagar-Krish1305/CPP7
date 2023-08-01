#include<stdio.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
    //fork() => creates a copy of parent process to a new Child // Clone
    int pid = fork();
    if(pid!=0){
        printf("The Parent Id is %d\n The Parent of Parent Id is %d\n",getpid(),getppid());
    }else{
        printf("The Parent Id is %d\n The Parent of Parent Id is %d\n",getpid(),getppid());
    }
    return 0;
}
