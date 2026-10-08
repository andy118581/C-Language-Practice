#include<stdio.h>
int main(){
  int num1 = 0 ;
  int count = 0 ;
  int num ;
  while( count == 0 || num != 0 ){
      count = count + 1 ;
      num1 = num1 + num ;
      printf( "Please enter the number what you want to do the operation :" ) ;
      scanf( "%d" , &num ) ;
  }
  printf( "The total value is : %d" , num1 ) ;
  return 0 ;
}
