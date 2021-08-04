#include <stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************ A program to count number of holes in a give************/         
/*************             number  		using functions	  ************/ 
/*********************************************************************/
/*********************************************************************/


int count_holes(int num);

int main ()
{
		
	/* variables to store the number*/
	int num, result;
	

	
	/*taking number1 from user*/
	printf("Enter num : ");
	scanf("%d",&num);
	
	result = count_holes(num);
	
	printf("the number of holes is : %d",result);
	
	
	return 0;
}


int count_holes(int num)
{
	int  rem , holes=0;
	
	
	while (num!=0)
	{
		rem = num%10;
		num= num/10;	
		
		if( rem == 8)
		{
			holes=holes+2;
		}
		else if ( (rem == 4 ) ||(rem == 0 ) || (rem == 6 ) || (rem == 9 ) )	
		{
			
			holes++;
			
		}			
	}
	
	return holes;
}