#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>


 
int main() {
printf("This print the element in array according to condition\n");
 int i, size;
 int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
   printf ("\n\n");
   
   int winner[size];
  
  if (size > 0)// to check for empty set
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
	 
	 printf("\nManipulated table:\n"); // to print manipulated elements
	 printf("when n-Array input is Even then the output is square of input \n");
	 printf("when n-Array input is Odd  the output is ---input+1 \n");
	 printf("when n-Array input is zero or less than zero then output is 0 \n");
	 printf("\n");
	 for (i=0; i<size; i++)
	 {
	 	
	 	if (winner[i] > 0 && winner[i] %2==0)//if it is even print square of the elements
	 	{
		 
	 		winner[i]= pow(winner[i],2);
	 		printf("winner Element[%d]=%d\n", i+1, winner[i]);
		 }
	 	
	 	else if (winner[i] > 0 && winner[i] %2!=0)//if old print this sign and add 1 to make it even
	 	{
	 		printf("winner Element[%d]=---%d\n", i+1, winner[i]+1);
	 		
		 }
		 
		 else if (winner[i] <= 0 )
	 	{
	 		printf("winner Element[%d]=%d\n", i+1, zeros);
	 		
		 }
	 }
	 
  }
  else
  printf("This is an empty Set");
  
	return 0;
}
	 
