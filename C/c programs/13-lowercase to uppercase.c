#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to convert               ************/         
/*************      the lowercase to uppercase 	     	  ************/ 
/*********************************************************************/
/*********************************************************************/
int main()
{
	/*integer variable to store the number*/
	char x;
	
	/*getting the letter from the user*/
	printf("enter a letter : ");
	scanf("%c",&x);
	
	
	/*getting the uppercase letter*/
	x= x-('a'-'A');
	
	/*printing the uppercase letter*/
	printf("%c",x);
	
	
}