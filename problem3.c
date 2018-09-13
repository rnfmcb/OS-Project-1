/* Modify to take several command line arguments through getopt. Program should take three options, either -n x, -h, or -p. 
The -h option should display a help message indicating the type of input it expects and then the program should terminate
If it takes -n x, it should store the x into a variable for use for the rest of the program. If it recieves -p as an option
it should use perror to generate a test error message as described in next task. 
Generate error messages by my_prog: Error: Detailed error message using perror. Where my_prog is the name of the executable 
(argv[0] that you are trying to execute. This should not be hardcoded. */ 

#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h> 
#include <string.h> 
#include <ctype.h> 

int main (int argc, char *argv[]) { 
	pid_t childpid = 0; 
	int i,c,x;   
       
  
     while ((c = getopt (argc, argv, "hpn:")) != -1)
      switch (c) {
        case 'h':
	  printf("Please enter n and  an integer value (For example n 10)");  
	  break; 
        case 'p':
         fprintf(stderr, "%s  error:", argv[0]);   
          perror( "");
          break; 
        case 'n':
            x = atoi(argv[2]); 
	     for (i = 1; i < x; i++) 
		if (childpid = fork()) 
		break; 
	  fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", 
		i, (long)getpid(), (long)getppid(), (long)childpid); 
         default: 
		abort(); 
      }
    
return 0;  
} 




