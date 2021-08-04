#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to Generate              ************/         
/************* 		   Multiplication table             . ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*integer variable to store the numbers , table*/
	int table, num=0;
	
	
	
	
	/*nested for loop 
	the outer : for the table 
	the inner : for the numbers 
	*/
	for(table=0 ; table<11 ; table++)
	{
		for (num=0; num<13 ; num++)
		{
			
			printf("%d*%d=%d\t",table,num,table*num);
			
		}
		printf("\n------------------------------------------------------------------------------------------------------------------\n");
	}
	
	
	
	
	
	
return 0;	
}
	
	