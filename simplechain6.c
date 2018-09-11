/* replace final fprintf statement with a loop that reads nchars charactors from a standard input, one charactor at a time and puts them in an 
array called mybuf. The values of n and nchars should be passed as command line arguments. After the loop put a '\0' 
charactor in entry nchars of the array so that it contains a string. Output to standard error in a single fpintf the process ID followed 
by the string in mybuff. Run the program for several values of n and nchars. Observe results. Presss the return key often and continuing typing 
at the keyboard until all the processes have exited */ 

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>


int main (int argc, char *argv[]){

pid_t childpid = 0;
char charactor;
int i, n, argument;

	if (argc != 2){
		fprintf(stderr, "Usage: %s processes\n", argv[0]);
	return 1;
    }

n = atoi(argv[1]);
argument = atoi(argv[2]);
char *mybuf = (char*)malloc(sizeof(char)*(argument+1));

	for(i = 1; i < n; i++)
	if (childpid = fork())
		break;
	
	//char loop
	for(i = 0; i < argument; i++){
		scanf(" %c", &charactor);
		mybuf[i] = charactor;
			if(i == argument-1)
				mybuf[i+1] = '\0';
	}


fprintf(stderr, "%ld process ID: %s\n", (long)getpid(),mybuf);
return 0;

}


