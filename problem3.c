/* Modify to take several command line arguments through getopt. Program should take three options, either -n x, -h, or -p. 
The -h option should display a help message indicating the type of input it expects and then the program should terminate
If it takes -n x, it should store the x into a variable for use for the rest of the program. If it recieves -p as an option
it should use perror to generate a test error message as described in next task. 
Generate error messages by my_prog: Error: Detailed error message using perror. Where my_prog is the name of the executable 
(argv[0] that you are trying to execute. This should not be hardcoded. */ 

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
} 




