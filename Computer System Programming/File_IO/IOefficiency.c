#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
/*
	int bufsize = 1024*1024*5;
	char buf[bufsize];
	while(fgets(buf,bufsize,stdin) != NULL)
		fputs(buf, stdout);
*/
/*	int ch;
	while((ch = fgetc(stdin)) != EOF)
		fputc(ch, stdout);
*/

	char ch;
	while(read(STDIN_FILENO, &ch, 1) > 0)
		write(STDOUT_FILENO, &ch, 1);

}

