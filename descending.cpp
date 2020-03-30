#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
 printf ("This program print the array in descending order\n");
 int i, size, sorts, des;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
   printf ("\n\n");
   
   int winner[size];
   
   if (size > 0)// to check for empty set
   
   {
   	for (i=0;i<size;i++) // to insert element in array
  {
  	printf ("Please Enter %d element table\t", i+1);    
  	scanf ("%d", &winner[i]); 
  }
  
   printf("\nElementy table:\n"); // to print element in array 
	 for (i=0; i<size; i++)
	 {
	 
	 	printf("winner Element[%d]=%d\n", i+1, winner[i]);
	 }
	//Sorting by Decending
	
	for (i=0; i<size; i++)
	 {
	 	for (sorts=i+1; sorts<size; sorts++)
	 	{
	 		if (winner[i] < winner[sorts])
	 		{
	 		 	des= winner[i];
				winner[i] = winner[sorts];
				 winner[sorts] = des;
			 }
			 }
		 }
	 	printf("\n Arrange in Decending order of elements\n");
	 	for(i=0; i< size; i++)
	 	{
	 		printf("winner Element[%d]=%d\n", i+1, winner[i]);
		 }
   	
   }
  else
  printf("This is an empty Set");
  
	return 0;
	 } 	
	

	 	
