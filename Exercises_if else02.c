#include<stdio.h>
int main(){
  int side1,side2,side3;

  printf( "Please enter the length of three side for the triangle:" );
  scanf( "%d %d %d" , &side1 , &side2 , &side3 );

  if( side1 > side2 ){
      side1 = side1 + side2;
      side2 = side1 - side2;
      side1 = side1 - side2;
  }
  if( side2 > side3 ){
      side3 = side2 + side3;
      side2 = side3 - side2;
      side3 = side3 - side2;
  }
  if( side1 > side2 ){
      side2 = side1 + side2;
      side1 = side2 - side1;
      side2 = side2 - side1;
  }

  if( side1 + side2 > side3 ){
      if( side1 * side1 + side2 * side2 == side3 * side3 ){
          printf( "This triangle is a Rectangular triangle.\n" );
      }else{
          printf( "This triangle is not a Rectangular triangle.\n" );
      }
  }else{
      printf( "This three side can not be a triangle.\n" );
  }

  return 0;
}
