#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************     convert from decimal to binary	  ****************/         
/*********************************************************************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*variable to store the given number*/
	int decimal, binary=0 , reminder,i=1;
	
	/*taking the decimal number from the user*/
	printf("enter the decimal number : ");
	scanf("%d",&decimal);
	
	
	/*loop till the number is not zero*/
	while(decimal!=0)
	{
			/*get the reminder*/
			reminder = decimal%2 ;
			
			
			/*devide the decimal number (condition update)*/
			decimal = decimal/2;
			
			
			/*storing the reminder of each iteration in binary variable 
			    binary of prev.iteration + the new added reminder    */
			binary  =         binary      + reminder * i;
			
			
			
			/*multiply i by 10 each iteration*/
			i = i* 10;
	}
	
	/*printing the binary result*/
	printf("%d", binary);
	
	return 0; 
}	