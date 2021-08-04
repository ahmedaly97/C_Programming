<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int star , line , req ,num ;
   printf("enter number of lines you want \n ");
   scanf("%d",&req);

   for ( line =1 ; line <=req ; line ++  )
   {
       for ( star =1 ; star <=line ; star ++)
       {
           printf("*");
       }
       printf("\n");
   }

   printf("______________________________________________________________________\n");

   for ( line =req ; line >= 1 ; line --)
   {
       for ( star =line ; star >=1 ; star --)
       {
           printf("*");
       }
       printf("\n");
   }
    printf("______________________________________________________________________\n");

    for (line =1 ; line<=req ; line++)
    {
        for ( num =1 ; num <= line ; num ++)
        {
            printf("%d",num );
        }
        printf("\n");
    }
    printf("______________________________________________________________________\n");

     for ( line = 1 ; line <= req ; line ++)
     {
         for ( num =1 ; num <= line ; num ++)
         {
             printf("%d", line );
         }
         printf("\n");
     }

  printf("______________________________________________________________________\n");

  int x = 1 ;
  for ( line =1 ; line <=req ; line ++)
  {
      for ( num =1 ; num <= line ; num ++)
      {
          printf("%d", x++);
      }
      printf("\n");
  }
   printf("______________________________________________________________________\n");

   int space ,y=1 ;

   for ( line =1 ; line <= req ; line ++ )
   {
       for ( space = req - line ; space >= 1 ; space --)
       {
               printf(" ");

       }
       for ( num =1 ; num <= line ; num++)
       {
               printf("%d  ",y++);
       }

       printf("\n");
    }

  printf("______________________________________________________________________\n");

for ( line =1 ; line <= req ; line ++ )
{
    for ( space = req - line  ; space >=0 ; space --)
    {
        printf(" ");
    }
    for (star =1 ; star <= line ; star ++ )
    {
        printf("* ");
    }
    printf("\n");
}
 printf("______________________________________________________________________\n");


  for (line =1 ; line <= req ; line ++)
  {
      for (space = req - line ; space >=0 ; space --)
      {
          printf(" ");
      }
      for ( num =1 ; num <= line ; num ++)
      {
           printf ( "%d ", line);
      }
      printf("\n");
  }
 printf("______________________________________________________________________\n");
 for (line =1 ; line <= req ; line ++)
 {
     for ( num =1 ; num >=0 ; num --)
     {
         printf("%d", num);
     }
 }

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int star , line , req ,num ;
   printf("enter number of lines you want \n ");
   scanf("%d",&req);

   for ( line =1 ; line <=req ; line ++  )
   {
       for ( star =1 ; star <=line ; star ++)
       {
           printf("*");
       }
       printf("\n");
   }

   printf("______________________________________________________________________\n");

   for ( line =req ; line >= 1 ; line --)
   {
       for ( star =line ; star >=1 ; star --)
       {
           printf("*");
       }
       printf("\n");
   }
    printf("______________________________________________________________________\n");

    for (line =1 ; line<=req ; line++)
    {
        for ( num =1 ; num <= line ; num ++)
        {
            printf("%d",num );
        }
        printf("\n");
    }
    printf("______________________________________________________________________\n");

     for ( line = 1 ; line <= req ; line ++)
     {
         for ( num =1 ; num <= line ; num ++)
         {
             printf("%d", line );
         }
         printf("\n");
     }

  printf("______________________________________________________________________\n");

  int x = 1 ;
  for ( line =1 ; line <=req ; line ++)
  {
      for ( num =1 ; num <= line ; num ++)
      {
          printf("%d", x++);
      }
      printf("\n");
  }
   printf("______________________________________________________________________\n");

   int space ,y=1 ;

   for ( line =1 ; line <= req ; line ++ )
   {
       for ( space = req - line ; space >= 1 ; space --)
       {
               printf(" ");

       }
       for ( num =1 ; num <= line ; num++)
       {
               printf("%d  ",y++);
       }

       printf("\n");
    }

  printf("______________________________________________________________________\n");

for ( line =1 ; line <= req ; line ++ )
{
    for ( space = req - line  ; space >=0 ; space --)
    {
        printf(" ");
    }
    for (star =1 ; star <= line ; star ++ )
    {
        printf("* ");
    }
    printf("\n");
}
 printf("______________________________________________________________________\n");


  for (line =1 ; line <= req ; line ++)
  {
      for (space = req - line ; space >=0 ; space --)
      {
          printf(" ");
      }
      for ( num =1 ; num <= line ; num ++)
      {
           printf ( "%d ", line);
      }
      printf("\n");
  }
 printf("______________________________________________________________________\n");
 for (line =1 ; line <= req ; line ++)
 {
     for ( num =1 ; num >=0 ; num --)
     {
         printf("%d", num);
     }
 }

    return 0;
}
>>>>>>> 22521c1 (I commit)
