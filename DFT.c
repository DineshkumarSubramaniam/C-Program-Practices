// C program to find DFT plot 
#include <stdio.h>
#include <math.h>
#define N 10

float xn[10] = {77,90,45,23,89,86,42,11,77,121};
// Sub-Function
void findDFT(int length)                  
{ 
        // Initializing file pointer
	FILE *fp1 = NULL;               
	FILE *fp2 = NULL;
	//int xn[length];               // Initializing the xn with length
	 // Initialization
	float Xreal[length];             
	float Xima[length];             
	int i, n;
	static int k;
	// Opening a file to write
	fp1 = fopen("Real.txt","w");  
	// Opening a file to write                
	fp2 = fopen("Imaginary.txt","w");            
	/*for (i = 0; i < length; i++)                // Loop to get an input from user
	{

		printf("Enter the input value for the index x[%d]: ",i);
		scanf("%d", &xn[i]);		// User input integer number
		count = count + i+1; 
	}*/


	//printf("Enter the Points in the DFT: ");   
	//scanf("%d", &N);
	
	// Loop will traverse till the Number of points given by user
        for (k = 0; k < N; k++)                       
		{
			Xreal[k] = 0;      
			Xima[k] = 0;
			// Loop to calculate real and imaginary plot
			for (n = 0; n < length; n++)         
			{
                                // Formula to find real value
				Xreal[k] =(Xreal[k] + xn[n]*cos(2 * 3.141592 * k * n / N));   

                                // Formula to find the imaginary value
				Xima[k] =(Xima[k] + xn[n]*sin(2 * 3.141592 * k * n / N));   

			}
                        // Prints real & imaginary equation
			printf("(%f) + j(%f)\n", Xreal[k], Xima[k]);     
			fprintf(fp1,"%lf\t\n",Xreal[k]);
			fprintf(fp2,"%lf\t\n",Xima[k]);
		}

}
// Main function
int main()
{
	int length = 0;
	//printf("Enter the length of the sequence: ");
	//scanf("%d", &length);
	findDFT(10);
	return 0;
}

