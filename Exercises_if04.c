#include<stdio.h>
int main(){
  int a,b,c;
  printf( "a=" );
  scanf( "%d" , &a );
  printf( "b=" );
  scanf( "%d" , &b );
  printf( "c=" );
  scanf( "%d" , &c );

  if( a > b ){
      a=a+b;
      b=a-b;
      a=a-b;
  }
  if( b > c ){
      c=b+c;
      b=c-b;
      c=c-b;
  }
  printf( "The maxinum is %d" , c );
  return 0;
}
