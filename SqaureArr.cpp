#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	
 printf ("This program print sqaure matrix (N X M) in a defined pattern\n");
 int i, j, size,size2, sorts, des ;
//float a,b, z ,sum=0;
 //int min=1, max =100;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array for the rows N: ");    
  scanf ("%d", &size);
  
 printf ("Enter size of the array for the columns M: ");    
 scanf ("%d", &size2);
  
  printf("\nThis matrix is %d x %d \n",size,size2);
  
  int winner[size] [size2];
  
  
   printf ("\n\n");
   
   
   if(size > 0 && size2>0) //to check for empty set
   {
   	for (i=0;i<size;i++) // to insert N element in array
   	{
   		for (j=0; j<size2; j++) //to insert M element array
   		{
   				printf ("Please Enter N x M for [%d] [%d]= ", i+1,j+1);    
  				scanf ("%d", &winner[i][j]); 
		   }
		  // printf("\n"); to separate each collum for printing
	   }
   		
   	
  
  
  
  
   printf("\nElementy table:\n"); // to print element in array 
   	for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			printf("%d\t", winner[i][j]);
		   }
		   
		   printf("\n");
	   }
	 
	 
	 //To print result base on condition
printf("\nchange all element on the diagonal to 0 \n");
printf("Add - to Elements on the index below the diagonal\n");
printf("Keep constant all Elements in index above the diagonal\n");
printf("\n");

for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			if (i==j)
   			{
   				winner[i][j]=0; //equate to zero
   				printf("%d\t", winner[i][j]);
   				continue;
   				
			   }
			  else if(i>j)
			  {
			  	winner[i][j]=(-1)* winner[i][j]; //negate all element by multiply by -1
			  	printf("%d\t", winner[i][j]);
			  	continue;
			  	
			  
			   } 
			   
			   else 
			   {
			   	printf("%d\t", winner[i][j]);
			   }
   			
	}
		   
		   printf("\n");
	   }


}
	
	else
  printf("This is an empty Set");
	
		
	return 0;
	 } 	
