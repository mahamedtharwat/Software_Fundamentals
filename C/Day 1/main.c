#include <stdio.h>
#include <stdlib.h>

int main()
{


     int x =  5 , y  ;

   // printf ("y = %i \n" , y ) ;
   // printf ("x = %i\n" , x++ ) ;
   // printf ("x = %i\n" , x ) ;



    /*
    printf ("x = %i\n" , ++x ) ;
     printf ("x = %i\n" , x ) ;
     x ++ ;    // x  =   6
    y = x++ ; //  y =  6    x = ??  7
    printf ("y = %i , x = %i " , y , x) ;
    */

     //x++ ;       // x =  6
     printf ("x = %i\n" , x++ ) ;
     y= ++x ;     // y = 7       x = 7
     printf ("y = %i , x = %i " , y , x) ;

    //char ch = 'm' ;
   // printf (" ch  %c \n " ,  ch );
   // printf (" the value in ascii   %i \n " ,  ch );
    return 0;
}
