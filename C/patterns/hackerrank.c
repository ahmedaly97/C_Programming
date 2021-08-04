#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



#define max(x,y)  ((x)>(y)?(x):(y)) 

int main() 
{

    int n, lines , col;
    scanf("%d", &n);
	
	int end =((2*n)-1) , num , i=1 , start=1 ,flag=0;
  	// Complete the code to print the pattern.
      
    for(lines=0;  lines <end ;lines ++)
    {			
        for(col=0 ; col <end ;col++)
        {
			
		printf("%d ", max(abs(n-lines-1)+1 , abs(n-col-1)+1));			
	
		}
        printf("\n");
        
    }  
      
      
      
      
    return 0;
}