/*Put loop around the final fprintf in program 3.1. Have the loop execute k times. Put sleep(m); inside the loop after the fprintf. 
pass ka nad m on the command line. Run the program for several values of n, k and m and observe the results. */ 
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 

int main (int argc, char *argv[]) { 
    
	pid_t childpid = 0; 
	int i, n, k,m; 
	
	printf("\nEnter value for k: ");
    scanf( "%i", &k);
    printf("\nEnter value for m: ");
     scanf( "%i", &m);
	 
	n = atoi(argv[1]); 
	for (i = 1; i < n; i++) 
		if (childpid = fork()) 
			break; 
	for (i = 0; i < k; i++){
		fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", 
			i, (long)getpid(), (long)getppid(), (long)childpid); 
			sleep (m); 
	}
	return 0; 
} 
