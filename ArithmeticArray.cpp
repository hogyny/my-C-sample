#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	printf ("This program determine if the element in the array is an arithmetic sequence\n");
 int i, size=10,sorts, des, diff1, diff2=1;
 //int Even, Odd,zeros=0;
 
 
 printf ("This size of the array is 10 ");    
  //scanf ("%d", &size);
  
 printf ("\n\n");
 
 int winner[size];
  
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
	 
	 //sorting from min to max
	 
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
		 
		 /* //printing in deescending order
		 
	 	printf("\n Arrange in Decending order of elements\n");
	 	for(i=0; i< size; i++)
	 	{
	 		printf("winner Element[%d]=%d\n", i+1, winner[i]);
		 }
	 
	 
	 */
	
	 
	 // this check if the is arithemetic operation
	 
	 diff1 = winner[1] - winner[0];
	 
	 for (i=1; i<size; i++)
	 {
	 	if (winner[i] - winner[i-1] != diff1)
	 	{
	 			
	 			printf("\nThe Elements in the array is NOT an Arithmetic Sequence\n");
	 			return 0;
		 }
		 
	 }
	 
	 printf("\nThe Elements in the array is an Arithmetic Sequence\n");
	
	 
	 
	 
}
