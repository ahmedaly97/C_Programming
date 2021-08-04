#include <stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************       A program to display prime numbers    ************/         
/*************            between a given interval		  ************/ 
/*********************************************************************/
/*********************************************************************/

int get_prime(int x);


int main ()
{
		
	/* variables to store the numbers*/
	int start ,end, result,i;
	

	
	/*taking start from user*/
	printf("Enter start : ");
	scanf("%d",&start);
	
	/*taking  end from user*/
	printf("Enter end : ");
	scanf("%d",&end);
	
	
	for ( i=start ; i <= end ; i++)
	{
		result = get_prime(i);
		
		if ( result == 1)
		{
			printf("%d\t",i);
		}

	}
	
	return 0;
}


int get_prime(int x)
{
	
	int flag=1,j;
	
	
	for(j=2;j<= x/2 ; j++)
	{
		
		if(x%j ==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
	
	
}