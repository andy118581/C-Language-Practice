#include<stdio.h>
  int main(){
      int count ;
      for( count = 1 ; count <= 5 ; count++ ){
          int number = 1 + ( count - 1 ) * 2 ;
          printf( "%d\n" , number ) ;
      }
      return 0 ;
}
