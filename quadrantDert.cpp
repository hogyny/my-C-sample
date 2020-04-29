#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	
 printf ("This program print y = ax + b is given For points A (x, y) to determine the quadrant\n");
 int i, size, sorts, des ;
//float a,b, z ,sum=0;
 //int min=1, max =100;
 //int Even, Odd,zeros=0;
 printf ("where x and y is greater than 0(0 is the origin of the slope)\n");
 
 printf ("Enter the value for X: \n ");    
  scanf ("%d", &size);
  
printf ("Enter the value for Y: \n ");    
  scanf ("%d", &sorts); 
  
  printf("\n");
   if(size==0 || sorts==0) // to check if the value of the origin is equal to zero
   {
   	printf("Either of the point X,Y cannot have the value of 0\n");
   	printf("Run program again to enter value of X,Y greater than 0\n");
   }
   
   else
   {
   	
   	if (size> 0 && sorts> 0)
   {
   	printf("The point (%d, %d) on the slope is located in the first Quadrant",size,sorts); //point for first quadrant
   	
   }
   
   else if (size< 0 && sorts> 0)
   {
   	printf("The point (%d, %d) on the slope is located in the Second Quadrant",size,sorts);//point for second quadrant
   	
   }
   
   else if (size< 0 && sorts< 0)
   {
   	printf("The point (%d, %d) on the slope is located in the Third Quadrant",size,sorts);//point for third quadrant
   	
   }
   
   else
   {
   	printf("The point (%d, %d) on the slope is located in the Forth Quadrant",size,sorts);//point for forth quadrant
   }
   	
   }
   
   /*
  int winner[size];
  
  / printf ("\n\n");
   
   
   if(size > 0) //to check for empty set
   {
   	for (i=1;i<=size;i++) // to insert element in array
  {
  	printf ("Please Enter %d element table\t", i);    
  	scanf ("%d", &winner[i]); 
  }
  
   printf("\nElementy table:\n"); // to print element in array 
	 for (i=1; i<=size; i++)
	 {
	 
	 	printf("winner Element[%d]=%d\n", i, winner[i]);
	 }

}
	
	else
  printf("This is an empty Set");
*/	
		
	return 0;
	 } 	
	 
