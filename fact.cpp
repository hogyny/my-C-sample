#include<stdio.h>
#include<stdlib.h>
int main(){
	//this program is to calculate n term of a inverse factoria
	int num, counter , multiplier , nTerm , result2=0;
	float results = 0;
	printf("enter only postive interger\n");
	scanf("%d", &num);
	
	for( counter =0 ;counter <=num;  counter++){
		 
	      if (counter != num){
	      	printf("1/%d! + ",counter);
		  }
		  
		  else{
		  	printf("1/%d! =",counter);
		  }
		  
		  	  multiplier =1;
		  	for ( nTerm  =0 ;nTerm <= counter;  nTerm++){
		  		nTerm++;
		  		multiplier = multiplier * nTerm;
			  }
			
		  	results = results + (1.0)/multiplier;
		  	
			}
			
			printf(" %lf"  , results);
		return 0;	
	}
				
			
				
				
	
				
			

	
	
		
	
	

