#include<stdio.h>
  int main(){
  int count ;
  int total = 0 ;
  for( count = 1 ; count <= 100 ; count++ ){
      total = total + count ;
  }
  printf ( "The total is : %d\n" , total ) ;
  return 0 ;
}
