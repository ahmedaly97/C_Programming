#include<stdio.h>
#include"help.h"
/*********************************************************************/
/*********************************************************************/
/************     convert from binary to decimal	  ****************/         
/*********************************************************************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*variable to store the given number*/
	int  binary , i=8 , exp=0 , temp ,result=0 , reminder;
	
	/*taking the binary number from the user*/
	printf("enter the binary number : ");
	scanf("%d",&binary);
	
	while (i > 0)
	{
		/*extract the first binary digit ( can be 0 or 1)*/
		reminder=binary%10;
		
		/*temp is the variable that hold the value of the exponent*/
		temp=power(2,exp);
		
		/*get rid of the first binary digit*/
		binary= binary/10;
		
		
		/*result is updated each iteration by adding the value of exp.
		  multiplied by 0 or 1 (rem)*/
		result=result + temp*reminder;
		
		
		/*increment the exponent*/		
		exp++;
		
		/*decrement the number of bits that can be read (max is 8)*/
		i--;
	}
	printf("%d", result);
	return 0;
}