/*Modify program 3.1 by putting a wait function call before the final fprintf statement. Does this affect the output of the program?*/
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <sys/wait.h> 

int main (int argc, char *argv[]) { 
	pid_t childpid = 0; 
	int i, n; 
  
	if (argc != 2) { /* check for valid number of command-line arguments */ 
	   fprintf(stderr, "Usage: %s processes \n", argv[0]); 
	   return 1; 
     }
	n = atoi(argv[1]); 
	for (i = 1; i < n; i++) 
		if (childpid = fork()) 
			break; 
	while(r_wait(NULL) > 0); //Wait for all the children
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", 
		i, (long)getpid(), (long)getppid(), (long)childpid); 
	return 0; 
} 
