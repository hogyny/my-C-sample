#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
 printf ("This program shows the  element the array shoud increase as factorial\n");
 int i, size;
 double fact =1;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
  
   printf ("\n\n");
   
   int winner[size];
   
  
/*  for (i=0;i<1;i++) // to insert element in array
  {
  	printf ("Please Enter %d element table\t", i+1);    
/  	scanf ("%d", &winner[i]); 
  
}
*/

if (size > 0)// to check for empty set
{
	

winner[1]= 1;
printf("\nElementy table:\n"); // to insert and print element factorial in array 
	 for (i=1; i<=size; i++)
	 {
	 	
	 	
	 	printf("Winner Element[%d]= %d\n", i, winner[i]);
	 	winner[i+1]= winner[i]+1;	
		 
	
	// printf("winner Element[%d]=%d\n", i+1, winner[i);
}
	 	//print the factorial
printf("\nPrint the Factorial of the number\n");	 	
	for (i=1; i<=size; i++)
	{
		fact *=  i;
	printf("Winner Element[%d!] = %.lf\n", i, fact);
	
	 }	 

}
else
  printf("This is an empty Set");
  
return 0;
}
