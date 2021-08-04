#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************        A program to check wether            ************/         
/************    	 a given number is power of 2 		  ************/ 
/**power of 2 numbers has only one 1 in their binary representation***/											
/*********************************************************************/
/*********************************************************************/
int main ()
{
	
	/*variables to store the given nummber, loop counter, number of ones*/
	int num , i, ones=0, result ; 
	
	/*getting the number from the user */
	printf("Enter the nummber : ");
	scanf("%d",&num);
	
	
	/*loop to check till 32 bits */
	for(i=32 ; i>=0 ; i--)
	{
		/*Get the bit number i*/
		result= get_bit(num,i);
		
		/*check on the received bit value*/
		if(result == 1)
		{
			/*increment number of ones*/
			ones ++;
		}
	}
	
	if(ones > 1)
	{
		/*not power of two*/
		printf("%d is not power of 2",num);
	}
	else
	{
		/*Is power of two*/
		printf("%d is power of 2",num);
	}
	
	return 0;
}
