#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc , char *argv[])    
{       
        //Traversing to find the last node
	int i,sum=0;    
	// Printing an argument count
	printf("argc = %d\n",argc);      
	printf("\n");
	// Condition to check whether the arg.conut is> 1 or not
	if(argc>1)           
	{ 
		printf("Inside argv[] is:\n"); 
		// Loop to traverse till the last count
		for(i=1;i<argc;i++)             
		{
			printf("Argv[%d]   : %s\n", i,argv[i]);
			// Adding an element value to the sum variable
			sum+= atoi(argv[i]);        
		} 
		printf("\nTotal is  : %d\n", sum);
	}
	// Condition will work if there is no commands passed at the time of execution
	else     
	{ 
		printf("Nothing passed on the command line\n");
	}
	return 0;
}
