#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>

int main(int argc, char const *argv[])
{
    int l = link(argv[1], argv[2]); 
    if(l==0){
    printf("Hard link created successfully\n"); 
    }
    return 0;
}
