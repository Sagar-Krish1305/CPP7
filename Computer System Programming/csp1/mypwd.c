#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>
#include<stdlib.h>
#include<string.h>
ino_t getInode(const char* path){
    struct stat statDataOfCurrentFile;
    stat(path,&statDataOfCurrentFile);
    return statDataOfCurrentFile.st_ino;
}
char* getNameFromInode(ino_t number){
    DIR* parentDirectory;
    parentDirectory = opendir("..");
    struct dirent* directories;
    while((directories = readdir(parentDirectory))!=NULL){
        if(directories->d_ino == number){
            return directories->d_name;
        }
    }

    return "";
}

void pwd(){

    if(getInode(".") == getInode("..")) return ;
    char* name = getNameFromInode(getInode("."));
    chdir("..");
    pwd();
    printf("/%s",name);
}
int main(int argc, char const *argv[])
{
    
    // printf("%s",getNameFromInode(getInode(".")));
    pwd();

    return 0;
}
