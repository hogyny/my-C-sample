#include <time.h>
#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	srand(time(0));
 printf ("This program print the array in increasing order and only array 3 is Change with Random number\n");
 int i, size, sorts, des , z;
 int min=1, max =100;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
  
  int winner[size];
  
   printf ("\n\n");
   
   
   if(size > 0) //to check for empty set
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
	 
	 
	  //To alter the element 3 alone.
		 
	for(int scanner =1; scanner <= 100; scanner++)
	{
		
		z= rand() %100 +1;	
		
		
	}
	
	//printf("winner Element[3]= %d\n", z);
	
	
	
	//Sorting by increasing
	
	for (i=0; i<size; i++)
	 {
	 	for (sorts=i+1; sorts<size; sorts++)
	 	{
	 		if (winner[i]  >winner[sorts])
	 		{
	 		 	des= winner[i];
				winner[i] = winner[sorts];
				 winner[sorts] = des;
			 }
			 }
		 }
		 printf("\nAlternate element in index[3]  with random number\n");
	 	printf("Arrange in Ascending order of elements\n");
	 	printf("\n");
	 
	// the below commentted  code can also be use for the alternating element in index 3 
	 /*
	 	winner[2]=z; //index 3
	 	
	 	for(i=0; i< size; i++)
	 	{
	 		if (winner[i] ==z)
	 		{
 			printf("winner Element[3]= %d\n", z);
	 			continue;
			 }
			printf("winner Element[%d]= %d\n", i+1, winner[i]);
	 	
	 }
		 */
	 

for(i=0; i< size; i++)
 	{
	 		if ( i+1 ==3)
	 		{
	 			printf("winner Element[3]= %d\n", z);
	 			continue;
			 }
			printf("winner Element[%d]= %d\n", i+1, winner[i]);
	 	
		 }

   }
  
  	else
  printf("This is an empty Set");
	
		
	return 0;
	 } 	
	

	 	
