//Fill in the actual process ID's of the processes in the diagram of figure 3.2 for a run with command line value of 4
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 

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
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", 
		i, (long)getpid(), (long)getppid(), (long)childpid); 
	return 0; 
	if (argc = 4) { 
		for( i = 0; i < n; i++) {
			fprintf(stderr, "My real ID is %5ld\n", (long)getuid(),argv[i]);
			n++; 
		}
	}
} 
