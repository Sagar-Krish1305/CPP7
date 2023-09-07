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
    char user[100];
    char hostname[100];
    char command[256];
    char arg1[256];
    char arg2[256];
    getlogin_r(user, sizeof(user)); 
    gethostname(hostname, sizeof(hostname));
    while (1) {
        printf("myshell@%s@%s$", user, hostname);
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = '\0';
        char *token = strtok(command, " "); 
        if (token != NULL) {
            strcpy(arg1, token);
        token = strtok(NULL, " "); 
        if (token != NULL) {
        strcpy(arg2, token); }
        }
        if (strcmp(arg1, "cat") == 0) { 
            cat(arg2);
        }
        else if (strcmp(arg1, "ls") == 0) {
                ls(arg2);
        } 
        else if (strcmp(arg1, "mv") == 0) {
            mv(arg2, arg2);
        } else if (strcmp(arg1, "head") == 0) { 
            head(arg2);
        } else if (strcmp(arg1, "exit") == 0) { 
            break;
        } else {
            printf("Unknown command: %s\n", arg1);
        } 
    }
return 0; }
