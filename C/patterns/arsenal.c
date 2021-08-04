#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************    A program to draw ARSENAL Logo       ****************/
/*********************************************************************/
/*********************************************************************/							



int main ()
{
	
	int line, col , spaces;
		
		for(line=1 ; line<= 18 ; line++)
		{	
			if (line ==1)
			{
				printf("\n");
				for(col= 0; col<30 ; col ++)
				{
					if( col >3 &&  col <27)
					{
						if( col %2 == 0 )
						{
							printf(" ");
						}
						else
						{
							printf("*");
						}
						
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			}
			
			else if (line ==2 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==3 || col ==27)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			}
		
			else if (line ==3 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==1 || col ==29)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			else if (line ==4)
			{
				
				printf("|     A  R  S  E  N  A  L     |");
			
				printf("\n");
			} 

			else if (line ==5 || line ==6  || line == 7)
			{
				for(col= 0; col<=30 ; col ++)
					{
						if( col ==0 || col ==30)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
							
					}
					printf("\n");
			}
			
		    else if (line ==8 )
			{
				for(col= 0; col<=30 ; col ++)
					{
						if( (col ==0)||(col >=3 && col<=8) ||(col >=11&&col <=13)||( col>=15)||( col==30))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
							
					}
					printf("\n");
			}
			
			else if (line == 9 )
			{
				for(col= 0; col<=30 ; col ++)
					{
						if( (col ==0)||(col >=2 && col<=8)||(col ==10)||(col ==12)||(col ==14) ||( col>=17  && col <26)||( col==30))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
							
					}
					
				printf("\n");	
			}
			
			else if (line == 10 )
			{
				for(col= 0; col<=30 ; col ++)
					{
						if((col ==0)|| (col >=3 && col<=8) ||(col >=11&&col <=13)||( col>=16  && col <21)||( col==30))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
							
					}
					
				printf("\n");	
			}
			
		
			
			else if (line ==11 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==1 || col ==29 ||(col>7 && col < 10)  )
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			}
		
			else if (line ==12 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==3 || col ==27||(col>6 && col < 9) )
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			else if (line ==13 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==5 || col ==25||(col>5 && col < 8))
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			else if (line ==14 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==7 || col ==23)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
				else if (line ==15 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==9 || col ==21)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			else if (line ==16 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col ==11|| col ==19)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			else if (line ==17 )
			{
				for(col= 0; col<30 ; col ++)
				{
					if( col>13 && col <16)
					{
						
						printf("* ");
					}
					else
					{
						printf(" ");
					}
						
				}
				printf("\n");
			} 
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		}
	
	
	return 0;	
}