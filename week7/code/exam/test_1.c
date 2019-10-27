#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

char buff[] = {"write to stdout\n"};

int main(){

	pid_t id;
	if(write(STDOUT_FILENO, buff, sizeof(buff)-1) != sizeof(buff) -1)
	perror("cant't write");
	id = fork();
	if(id < 0)
		perror("fork error");
	exit(0);
}
