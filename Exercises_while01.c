#include<stdio.h>
  int main(){
  int guess;
  int num=4;

  printf( "Please enter your guess:" );
  scanf( "%d",&guess );
  if( guess>num ){
      printf( "Too Large!!\n" );
  }else{
      if( guess<num ){
          printf( "Too small!!\n" );
      }else{
          printf( "Correct!!\n" );
      }
  }

  while( guess!=num ){
      printf( "Please enter your guess:" );
      scanf( "%d",&guess );
      if( guess>num ){
          printf( "Too large!!\n" );
      }else{
          if( guess<num ){
              printf( "Too small!!\n" );
          }else{
              printf( "Correct!!\n" );
          }
      }
  }

  return 0;
}
