#include<stdio.h>
int main (){
  int side1,side2,side3;
  printf( "Please set the length for the triangle:" );
  scanf( "%d %d %d" , &side1 , &side2 , &side3 );

  if( side1 > side2 ){
      side2 = side1 + side2;
      side1 = side2 - side1;
      side2 = side2 - side1;
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
      if( side1 == side2 && side1 != side3 || side2 == side3 && side1 != side3 ){
          printf( "This triangle is a isosceles triangle.\n" );
      }else{
          if( side1 == side2 && side2 == side3 ){
              printf( "This triangle is a isosceles triangle ,also a Regule triangle.\n" );
          }else{
              printf( "Not a isosceles triangle.\n" );
              }
      }
  }else{
      printf( "This three side can not be a triangle.\n" );
  }

  return 0;
}
