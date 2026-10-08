  #include <stdio.h>
  int main () {
      int side1 , side2 , side3 ;
      printf( " Please enter  the lengths of triangle's each side : " ) ;
      scanf ( "%d%d%d" , &side1 , &side2 , &side3 ) ;
      printf( " Please enter  the lengths of triangle's first side : " ) ;
      scanf ( "%d" , &side1 ) ;
      printf( " Please enter  the lengths of triangle's second side : " ) ;
      scanf ( "%d" , &side2 ) ;
      printf( " Please enter  the lengths of triangle's third side : " ) ;
      scanf ( "%d" , &side3 ) ;
       if  ( side1 == side2 && side2 == side3)  {
             printf ( " This triangle is a Regule triangle\n" ) ;
       }
       if  ( side1 != side2 || side2 != side3 || side1 != side3 )  {
             printf ( " This triangle is not a Regule triangle\n" ) ;
       }
       return 0 ;
 }
