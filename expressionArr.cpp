#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>

int main() {
printf ("print base on n condition in Mathematic expression \n");
 int i, size;
 int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
   printf ("\n\n");
   
   int winner[size];
   
   
  if(size > 0)// to check for empty set
  {
  	for (i=0;i<size;i++) // to insert element in array
  {
  	printf ("Please Enter %d element table\t", i+1);    //
  	scanf ("%d", &winner[i]); 
  }
  
   printf("\nElementy table:\n"); // to print element in array 
	 for (i=0; i<size; i++)
	 {
	 
	 	printf("winner Element[%d]=%d\n", i+1, winner[i]);
	 	
	 }
	 
	 
	 printf("\n \n");
	 printf("\nManipulated table base on conditins:\n"); // to print manipulated elements
	 printf("when n-Array is 0 or less than zero the output is O \n");
	 printf("when n-Array is 1  the output is 1 \n");
	 printf("when n-Array is Greater than 1  then output is   n + (n-1) \n");
	 printf("\n");
	 for (i=0; i<size; i++)
	 {
	 	
	 	if (winner[i] == 0 || winner[i] < 0  )//if it is zero or less than zero
	 	{
		 
	 		
	 		printf("winner Element[%d]= %d\n", i+1, zeros);
		 }
	 	
	 	else if (winner[i] == 1)//if is is equal 1 print as just 1  
	 	{
	 		winner[i]= 1;
	 		printf("winner Element[%d]= %d\n", i+1, winner[i]);
	 		
		 }
		 
		 else if (winner[i] >1 )
	 	{
	 		winner[i]= winner[i] + winner[i-1];
	 		printf("winner Element[%d]= %d\n", i+1, winner[i]);
	 		
		 }
	 }
  }
  else
  printf("This is an empty Set");
  
	return 0;
}
