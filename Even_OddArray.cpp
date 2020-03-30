#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
printf("To print  even index and odd index seprately\n");
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
	 printf("\nTo print Only Even  Index with Element\n");
	 printf("Even index table:\n"); // to print element in array 
	 for (i=0; i<size; i++)
	 {
	         if ((i+1) % 2 !=0)// to check for even roll according to my printing
        {
            continue;
        }
        printf("Winner Element for Even Index Alone[%d]= %d\n",i+1,winner[i]);
    }
	
	printf("\n\n");
	
	printf("\nTo print Only Odd  Index with Element\n");
	 printf("Even index table:\n"); // to print element in array 
	 for (i=0; i<size; i++)
	 {
	         if ((i+1) % 2 ==0)// to check for odd roll according to my printing
        {
            continue;
        }
        printf("Winner Element for Odd Index Alone[%d]= %d\n",i+1,winner[i]);
    }
		
	}
  
  else
  printf("This is an empty Set");
	 
return 0;
 }
	 
