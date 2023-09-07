#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <unistd.h> 
#include <fcntl.h>
#include <dirent.h>

void cat(const char* filename){
    FILE* f = fopen(filename,"r");
    if(f == NULL){
        printf("The file does not exist.\n");
        return;
    }
    char c;
    while ((c = getc(f)) != EOF){
        putchar(c);
    }
    fclose(f);
}

void head(const char* filename){
    FILE* f = fopen(filename,"r");
    if(f == NULL){
        printf("The file does not exist.\n");
        return;
    }
    char* buff = (char*)malloc(256 * sizeof(char));
    for(int i = 0 ; i < 10 ; i++){
        if(fgets(buff,255,f) != NULL){
            printf("%s",buff);
        }else{
            break;
        }
    }
    fclose(f);
    return;
}
void ls(const char* dirname){
    DIR* dir = opendir(dirname);
    if(dir == NULL){
        printf("Directory is not available.\n");
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0){
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dir);
}


void mv(const char* source,const char* destination){
    int fd = open(source, O_RDONLY);
    if(fd == -1){
        printf("there is some error\n");
        return;
    }
    char newpath[1024];
    snprintf(newpath, sizeof(newpath), "%s/%s", destination, strrchr(source, '/') + 1);

    int newfd = open(newpath, O_WRONLY | O_CREAT | O_TRUNC, 0644); 
    if (newfd < 0) {
        printf("There is some error.\n");
        close(fd); 
    }

}
int main(int argc, char const *argv[]){
    if (argc < 2) {
        printf("Please Enter the required command line parameter.\n");
        return 1; 
    }
    if(strcmp(argv[1], "cat") == 0){
        if(argc != 3){
            printf("Please enter the filename.\n");
            return 3;
        }
        cat(argv[2]);
    }else if(strcmp(argv[1], "head") == 0){
        if (argc != 3) {
            printf("Please enter the filename.\n");
            return 4;
        }   
        head(argv[2]);
    }else if(strcmp(argv[1], "ls") == 0){
        if (argc != 3) {
            printf("Please enter the filename.\n");
            return 5;
        }   
        ls(argv[2]);
    }else if(strcmp(argv[1], "mv") == 0){
        if (argc != 4) {
            printf("Please enter the filenames.\n");
            return 6;
        }   
        mv(argv[2],argv[3]);
    }else{
        printf("Unknown Command\n");
        return 7;
    }
    return 0;
}
