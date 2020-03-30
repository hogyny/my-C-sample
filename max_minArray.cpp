#include <stdio.h>  
#include <stdlib.h> 

 
int main() {
printf("This program determine the minimux and the Maximum element in array and replace the swap the index\n");
 int i, size, max, min,indexOfMin =0, indexOfMax = 0, temp=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
  int winner[size];
  
   printf ("\n\n");
   
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
	 
 //to print max and min value
 min= max=winner[0]; //assume the first element as minimun and maxmium
 for (i=1;i <size; i++)
 {
 	if (winner[i] > max)
 	{
 		max=winner[i];
 		temp=i;
 		indexOfMax  = temp;
 		
	 }
	 else if (winner[i] < min)
 	{
 		min=winner[i];
 		temp =i;
 		indexOfMin = temp;
	 }
 }
 printf("\nMinimum of the array is : %d\n",min);
 printf("Maximium of the array is: %d\n",max);
 
 //this replace the position of the maximun and minimum index of the array
 
 printf("\nModified Array\n");
 printf("Maximium of the array, %d is now in winner Element[%d]= %d\n",max,indexOfMin+1,max);
 printf("Minimum of the array, %d is now in  winner Element[%d]= %d\n",min,indexOfMax+1,min);


printf("\n \n");
printf("\nModified Full Array of replaced swapped value for min and max index\n");
 for (i=0; i<size; i++)
	 {
	 	if (winner[i]==max)
	 	{
	 //	printf("Minimum of the array, %d is now in  winner Element[%d]= %d\n",min,indexOfMax+1,min);
	 	printf("winner Element[%d]=%d\n", indexOfMax+1, min);
		 continue;	
		 }
		 else if(winner[i] == min)
		 {
	//	 	 printf("Maximium of the array, %d is now in winner Element[%d]= %d\n",max,indexOfMin+1,max);
		 	 printf("winner Element[%d]=%d\n", indexOfMin+1, max);
		 	 continue;
		 }
		 
	 	printf("winner Element[%d]=%d\n", i+1, winner[i]);
	 	
	 }

}
   else
  printf("This is an empty Set");
  
return 0;
}
