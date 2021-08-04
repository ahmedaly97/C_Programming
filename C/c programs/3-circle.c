/*********************************************************************/
/*********************************************************************/
/************ A program to get the circumference of *******************/         
/************ and the area of a circle given its radius ***************/ 
/*********************************************************************/
/*********************************************************************/
#include <stdio.h>
#include "help.h"

#define pi  3.14

/* macro to get the power of 2 of the radius */	
/*#define pow2(x) x*x 	*/

								
int main ()
{ 


    /*float variables to store radius ,circum. , area */
    float radius , circum , area;
    
    /*taking the radius from the user*/
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);
    
    /* calculating the circumference*/
    circum = 2*pi* radius;
    
    /*calculating the area*/
	
    /* area= 3.14* pow2(radius);*/
	area= pi* power(radius,2); 	

	
    /* printing the output  two numbers after .*/
    printf("The circumference = %.2f\nThe area =%.2f\n",circum, area);

return 0;

}