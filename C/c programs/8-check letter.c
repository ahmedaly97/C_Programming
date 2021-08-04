#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check wether          ************/         
/*************      the letter  is vowel or constant      ************/ 
/*********************************************************************/
/*********************************************************************/

int main ()
{
	/*char variable to store the letter*/
	char x;
	
	/*getting the character from user*/
	printf("enter a letter : ");
	scanf("%c",&x);
	
	/*checking if the given character is a letter or not */
	if ((x>='A') && (x<='Z') || (x>='a') && (x<='z'))
	{
		/*switch on the givin letter*/
		switch(x)
		{
			case 'a':
			case 'A':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
				printf("\nthe given letter is vowel\n");
				break;
			default :
				printf("\nthe given letter is constant\n");
				
		}
		
	}
	else
	{
		printf("the given input is not a letter\n");
	}
	
	
	
	return 0; 
}




