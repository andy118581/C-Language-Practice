#include<stdio.h>
  int main(){
  int count , N ;
  int total = 0 ;
  printf( "Please enter the maxinum of the range :" ) ;
  scanf( "%d" , &N ) ;
  for( count = 1 ; count <= N ; count++ ){
      total = total + count ;
  }
  printf ( "The total is : %d\n" , total ) ;
  return 0 ;
}
