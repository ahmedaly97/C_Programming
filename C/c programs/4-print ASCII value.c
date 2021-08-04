/*********************************************************************/
/*********************************************************************/
/************ A program to get the ASCII value of  *******************/         
/************         a given input characte           ***************/ 
/*********************************************************************/
/*********************************************************************/
#include<stdio.h>
#include "help.h"
int main ()
{
	/* the char variable to store the input*/
	char x ; 
	
	/* getting the char from  the user */
	printf("enter the character to get its value : ");
	scanf("%c",&x);
	
	/*printing the integer value of the given char */
	printf("the ascii value is %d",x);
	
	
	return 0; 
}