#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	
 printf ("This program print the array & positive values (m> 1) and prints according to the following formula\n");
 int i, size, sorts, des ;
float a,b, z ,sum=0;
 int min=1, max =100;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
  
  int winner[size];
  
   printf ("\n\n");
   
   
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


//to print only element greater than 1
printf("\nTo print only element greater than zero |(n^(1/m)| \n");

	 for (i=1;i<=size;i++) // to insert element in array
	 {
	 	if(winner[i] > 1 )
	 	{
	 		a=i+0;
	 		b= winner[i]+0;
	 		z = pow(a,1/b);
	 		//z=abs(z) check for absolute
	 		if (z < 0)
	 		{
	 			z= (-1)*z;
				 printf("winner Element[%d]= %.3lf\n", i, z);
				 continue;	
			 }
	 		
	 		
	 		printf("winner Element[%d]= %.3lf\n", i, z);
		 }
	 	
	 }
	 //Add all index that contains element greater than 1
	  printf("\nTo show adding and sum of index of element greater than 1\n");
	  printf("\n");
	 for (i=1;i<=size;i++) // to insert element in array
	 {
	 	if(winner[i] > 1 )
	 	{
	 		a=i+0;
	 		b= winner[i] +0;
	 		z = pow(a,1/b);
	 		
	 		//z=abs(z) check for absolute
	 	if (z < 0)
	 		{
	 			z= (-1)*z;
				 printf("winner Element[%d]= %.3lf\n", i, z);
				 continue;	
			 }
	 		
	 		if (i != size){
	      	printf("|(%d^(1/%.3lf)| + ",i,z);
		  }
		  
		  else{
		  	printf("|(%d^(1/%.3lf)| =",i,z);
		  }
	 		
		 }
	 	
	 }
	 for (i=1;i<=size;i++)
	   
		if(winner[i] > 1 )
	 	{
	 		a=i+0;
	 		b= winner[i]+0;
	 		z = pow(a,1/b);
	 		sum +=z;
	 		
			 //z=abs(z) check for absolute
	 		if (z < 0)
	 		{
	 			z= (-1)*z;
	 			sum +=z;
				 printf("winner Element[%d]= %.3lf\n", i, z);
				 continue;	
			 }
	 	  
			
			
		
}
	     printf(" %.3lf"  , sum);
}
	
	else
  printf("This is an empty Set");
	
		
	return 0;
	 } 	
	 
