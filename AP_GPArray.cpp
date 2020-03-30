#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
printf("This program shows the arithemetic and geometry mean of the element in the array\n");
 int i, size;
 float sum =0,Arith ,Geo, multiple=1, size2;

 
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
	 // to add n-term array
	 for (i=0; i<size; i++)
	 {
	 sum+=winner[i];	
	 }
	 size2= size;
	 Arith=sum / size2;
	 printf("\nResult for Arithemetic mean\n");
	 printf("The Arithmetic Mean of the n-term of Winner[n] is %.lf/%.lf:= %.3lf\n",sum,size2,Arith);
	 
	 
	 // to geometry mean n-term array
	 for (i=0; i<size; i++)
	 {
	 multiple*=winner[i];	
	 }
	 
	 Geo= pow (multiple,1./size2);
	 printf("\nResult for Geometric mean mean\n");
	 printf("The Geometric Mean of the n-term of Winner[n] is (%.3lf^(1/%d)):= %.3lf\n",multiple,size,Geo);
   	
   }
   
   
	 
	  else
  printf("This is an empty Set");
	 
return 0;
}
