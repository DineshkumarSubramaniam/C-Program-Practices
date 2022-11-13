#include <stdio.h>
int main()
{
 //Declaration of variable's
 int iteration1, iteration2, Number, isPrime;  
   
 printf("\nPlease Enter any number to Find Factors :   ");
 scanf("%d", &Number); 
 printf("The primefactor of an given number '%d' is :",Number);
 for (iteration1 = 2; iteration1 <= Number; iteration1++)
  { 
  //Condition check to find the prime factor
   if(Number % iteration1 == 0) 
    {
   	isPrime = 1;     
  for (iteration2 = 2; iteration2<= iteration1/2; iteration2++)
   {
     // If there is no remaninder means it will break 
     if(iteration1 % iteration2 == 0)    
      {
	isPrime = 0;
	break;
       }
    } 
if(isPrime == 1)
       {			
           //Printing the prime factor numbers
           printf("%d  ", iteration1); 
       }	          	
     }
   }
   printf("\n");
return 0;
}
