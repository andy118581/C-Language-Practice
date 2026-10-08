#include<stdio.h>
  int main(){
  int guess ;
  int number = 4 ;
  do{
        printf( "Please enter your guess :" ) ;
        scanf( "%d" , &guess ) ;
        if ( guess > number ){
            printf( "Too large!\n" ) ;
        }else if( guess < number ){
            printf( "Too small!\n" ) ;
        }else{
            printf( "Correct!\n" ) ;
        }
      }
  while( guess != number ) ;
  return 0 ;
}
