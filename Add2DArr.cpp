#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>
 
int main() {
	
 printf ("This program print Addition sqaure matrix (N X M) \n");
 int i, j, size,size2, sorts, des ;
//float a,b, z ,sum=0;
 //int min=1, max =100;
 //int Even, Odd,zeros=0;
 
 
 printf ("Enter size of the array for the rows N: ");    
  scanf ("%d", &size);
  
 printf ("Enter size of the array for the columns M: ");    
 scanf ("%d", &size2);
  
  printf("\nThis matrix is %d x %d \n",size,size2);
  
  int winner[size] [size2], winner2[size][size2], Adder[size][size];
  
  
   printf ("\n\n");
   
  
   if(size > 0 && size2>0) //to check for empty set
   {
   	
   	 //to enter elelment for first matrix
   printf("Please enter the  Elements for the first Matrix\n");
   	
   	for (i=0;i<size;i++) // to insert N element in array
   	{
   		for (j=0; j<size2; j++) //to insert M element array
   		{
   				printf ("Please Enter N x M for [%d] [%d]= ", i+1,j+1);    
  				scanf ("%d", &winner[i][j]); 
		   }
		  // printf("\n"); to separate each collum for printing
	   }
   		
printf("\n");

 	 //to enter elelment for second matrix
   printf("Please enter the  Elements for the second Matrix\n");
   	for (i=0;i<size;i++) // to insert N element in array
   	{
   		for (j=0; j<size2; j++) //to insert M element array
   		{
   				printf ("Please Enter N x M for [%d] [%d]= ", i+1,j+1);    
  				scanf ("%d", &winner2[i][j]); 
		   }
		  // printf("\n"); to separate each collum for printing
	   }
  
  
  //print first matrix
   printf("\nElementy table of first matrix:\n"); // to print first matrix element in array 
   	for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			printf("%d\t", winner[i][j]);
		   }
		   
		   printf("\n");
	   }
	 
	 //print second matrix
	 printf("\nElementy table of second matrix:\n"); // to print second matrix element in array 
   	for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			printf("%d\t", winner2[i][j]);
		   }
		   
		   printf("\n");
	   }
	   
	//Addition of matrix
   	for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			Adder[i][j] = winner[i][j] + winner2[i][j]; //sum of matrixs
		   }
		   
		   //printf("\n");
	   }
	 

	 //To print result Addition of the matrixes
printf("\nSum of first Matrix + Second Matrix \n");

for (i=0;i<size;i++) // to print N element in array
   	{
   		for (j=0; j<size2; j++) //to print M element array
   		{
   			
			   	printf("%d\t", Adder[i][j]); // print total sum of the matrix
			   }
   		 printf("\n");
	}
		   
		  
	   


}
	
	else
  printf("This is an empty Set");
	
		
	return 0;
	 } 	
