//Include necessary imports
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

//main method
int main()
{
	for(int i=0; i<8; i++) { //8 iterations for 8 children
	int f = fork(); //fork
	if(f == 0) {
		//if the process is the child, print "I am child number: #"
		printf("I am child number: %d\n",(i+1));
		break; //break after print statement
		}
	}
	for(int j=0; j<8; j++){
		wait(NULL); //wait state for the calling parent process
	}
}