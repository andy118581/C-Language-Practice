//有範圍之韓信點兵練習 (for述句):

#include<stdio.h>
  int main(){
  int number , N ;
  printf ( "Please set the range :" ) ;
  scanf( "%d" , &N ) ;
  for( number = 1 ; number <= N ; number++ ){
      if( number % 3 == 2 && number % 5 == 3 && number % 7 == 2 ){
          printf( "%d\n" , number ) ;
      }
  }
  return 0 ;
}
