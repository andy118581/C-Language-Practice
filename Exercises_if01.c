  #include <stdio.h>
  int main () {
      int number ;
      printf( " Please enter  the number of customers : " ) ;
      scanf ( "%d" , &number ) ;
      int Total = number*300 ;
       if  ( Total >= 3000 )  {
            double newTotal = Total * 0.8 ;
            printf (" The Total is : %lf. \n" , newTotal ) ;
       }
       if  ( Total < 3000 )  {
            printf (" The Total is : %d. \n" , Total) ;
       }
       return 0 ;
}
