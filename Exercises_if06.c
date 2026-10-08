#include <stdio.h>
  int main() {
  double side1 , side2 , side3 ;
  printf( "Please enter the value of each side :" ) ;
  scanf( "%lf%lf%lf" , &side1 , &side2 , &side3 ) ;
    if ( side1 > side2 ){
    side1 = side1 + side2 ;
    side2 = side1 - side2 ;
    side1 = side1 - side2 ;
    }
    if ( side2 > side3 ){
    side2 = side2 + side3 ;
    side3 = side2 - side3 ;
    side2 = side2 - side3 ;
    }
    if ( side1 > side2 ){
    side1 = side1 + side2 ;
    side2 = side1 - side2 ;
    side1 = side1 - side2 ;
    }
    if ( side1 + side2 > side3 ){
      if ( side1 == side2 && side2 ==side3 ){
          printf( "This triangle is a regular triangle also an isosceles triangle." ) ;
          }
      if ( (side1 == side2 && side1 !=side3) || (side2 == side3 && side1 !=side2) ){
          printf( "This triangle is an isosceles triangle." ) ;
          }
      if ( side1*side1+side2*side2==side3*side3 && side1!=side2 ){
          printf( "This triangle is a rectangular triangle." ) ;
          }
      if ( side1*side1+side2*side2==side3*side3 && side1==side2 ){
          printf( "This triangle is a rectangular triangle also an isosceles triangle." ) ;
          }
      if ( side1 != side2 && side2 !=side3 && side1 * side1 + side2 * side2 != side3 * side3 ){
          printf( "This triangle just a normal triangle." ) ;
          }
      }
    if ( side1 + side2 <= side3 ){
      printf( "Three side can not become a triangle." ) ;
      }
//  printf ( "side1 = %d , side2 = %d , side3 = %d " , side1 , side2 , side3 ) ;
  return 0 ;
}
