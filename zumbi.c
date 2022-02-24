#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	
	pid_t pid;
	pid = fork();
	printf("Process Id: %d\n", pid);

	if (pid == 0) {//children process
		printf("Process children!");
		exit(0);
	} else {//parent process
		sleep(10);
	}
	return 0;
}
