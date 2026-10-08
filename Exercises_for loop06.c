#include<stdio.h>
  int main(){
  int N , i ;
  printf( "Please enter the maxinum of the range :" ) ;
  scanf( "%d" , &N ) ;
  for ( i = 1 ; i <= N ; i++ ){
      printf( "*" ) ;
  }
  return 0 ;
}
