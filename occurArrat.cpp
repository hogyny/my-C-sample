#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
printf ("This program determine how many times a value occur in the array\n");
 int i, size, sorts, scanner;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array: ");    
  scanf ("%d", &size);
   printf ("\n\n");
   
   int winner[size];
 int counter[size];
   
   if (size > 0)// to check for empty set
   {
   	
   	for (i=0;i<size;i++) // to insert element in array
  {
  	printf ("Please Enter %d element table\t", i+1);    //
  	scanf ("%d", &winner[i]); 
  	counter[i] = -1;
  }
  
   printf("\nElementy table:\n"); // to print element in array 
	 for (i=0; i<size; i++)
	 {
	 
	 	printf("winner Element[%d]=%d\n", i+1, winner[i]);
}


// to check how many times the value shows
for (i=0; i<size; i++)
{
	scanner =1;
	for (sorts = i+1; sorts< size; sorts++)
	{
		if(winner[i]== winner[sorts])
		{
			scanner++;
			counter[sorts] = 0;
		}
		
	}
	if (counter[i] != 0)
	{
		counter[i] = scanner;
	}
	
}


//display
printf ("\nPrint the Number of Times   the element in the Array Occur\n\n");
for(i=0; i<size; i++)
{
	if(counter[i] !=0)
	{
	printf ("Number %d occur %d times\n",winner[i], counter[i]);	
	}
	
}

   	
   }
  
  
else
  printf("This is an empty Set");

return 0;
}
