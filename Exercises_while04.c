#include<stdio.h>
  int main(){
  int max , min ;
  printf( "Please enter the value of maxinum and maninum :" ) ;
  scanf( "%d %d" , &max , &min ) ;
  if ( max < min ){
      max = max + min ;
      min = max - min ;
      max = max - min ;
      }
  while( min <= max ) {
  printf ( "%d\n" , min ) ;
  min = min + 1 ;
  }
  return 0 ;
}
