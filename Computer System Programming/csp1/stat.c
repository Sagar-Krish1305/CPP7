#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int incrementer(int n,int k){
    if(k==0) return n;
    n = dup(n);
    return incrementer(n);
}
int main(int argc, char const *argv[])
{
    n+ k 
    return 0;
}
