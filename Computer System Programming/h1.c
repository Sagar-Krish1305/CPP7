#include<time.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>

int main(int argc, char const *argv[])
{
    int fd = open("ans.txt",O_RDONLY,0);
    int pid = fork();
    char c;
    if(pid!=0){
        read(fd,&c,1);
        printf("%c",c);
        return 0;
    }else{
        wait(NULL);
        read(fd,&c,1);
        printf("%c",c);
        return 0;
    }
    

    /*
        The File Descriptor Table used in Parent and Child process are same. So, No Copy of Table is made during fork() => so if the pointer in child increases by 1 then it will start from 2 in the parent process
    */
    return 0;
}
