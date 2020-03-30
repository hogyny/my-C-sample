#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	
 printf ("This program  prime number from 0 to n-term using Eratostanes sieve method \n");
 int i, j, size, sorts=1, msize ;

 
 
 printf ("Enter N-term max size if the array: ");    
  scanf ("%d", &size);
  
  msize= size +1; //to for true if 1 is added to size
  
  int winner[size+1];
  
  
  
   printf ("\n\n");
   
   
   if(size > 0 ) //to check for empty set
   {
   	for (i=2;i<=size;i++) // to insert N element in array
   	{
   		winner[i]=i; //equating the first element in the array to be 2
   }
   		
   		for(i=2; (i*i) <=size; i++)//making an array of all numbers from 2 to n
   		{
   			for(j=2;j<size; j++)
   			{
   				if (winner[i]*j > size) //check if the condition for prime is meet
   				{
   					break;
				   }
				else
				{
				// to make all non prime equall to 0
				winner[winner[i]*j]=0;	
				}
			   }
		   }
   				 
		   printf("\nElementy table of prime number alone from 0 to N\n"); // to print element in array 
   	for (i=2;i<=size;i++) // to print N element in array
   	{
   		if(winner[i] !=0) //if not equall to zero then is prime
   		{
   			printf("Element [%d]= [%d]\n",sorts ,winner[i]);
		   sorts++;
		   }
   			
   	}
		 
	   }
   		
   	


	else
	{
	printf("This is an empty Set");	
	}
  
	
		
	return 0;
	
 } 	
