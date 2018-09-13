/*Replace the final fprintf statement with four fprintf statements, one for each four integers displayed. 
Onely the last one should output a newline. What happens when you run this? Can you tell which process geneartes each part of the 
output? Run the pogram several times and see if there is a difference in output */ 

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
	fprintf(stderr, "%d", i); 
	fprintf(stderr, "%d",  (long)getpid()); 
	fprintf(stderr, "%d",  (long)getppid()); 
	fprintf(stderr, "%d\n",  (long)childpid); 
	
	 return 0; 
} 
