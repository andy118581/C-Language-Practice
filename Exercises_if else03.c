#include <stdio.h>
int main(){
    double side1 , side2 , side3 ;
    printf( "Please enter the lengths of each side for the triangle :" ) ;
    scanf( "%lf %lf %lf", &side1 , &side2 , &side3 ) ;
    if( side1 > side2 ){
        side1 = side1 + side2 ;
        side2 = side1 - side2 ;
        side1 = side1 - side2 ;
        }
    if( side2 > side3 ){
        side3 = side2 + side3 ;
        side2 = side3 - side2 ;
        side3 = side3 - side2 ;
        }
    if( side1 > side2 ){
        side1 = side1 + side2 ;
        side2 = side1 - side2 ;
        side1 = side1 - side2 ;
        }
    if( side1 + side2 > side3){
      if( ( side1 == side2 && side1 != side3 ) || ( side2 == side3 && side1 != side2 ) ){
          printf("This is an Isosceles triangle. ") ;
      }else{
          if( side1 == side2 && side2 == side3 ){
              printf( "This triangle is a Regular also an Isosceles triangle." ) ;
          } else{
              if( side1 * side1 + side2 * side2 == side3 * side3 ){
                  printf( "This is a Rectangular triangle." ) ;
              } else{
                  printf( "It's just a Normal triangle." ) ;
              }
          }
      }
    } else{
      printf( "This combination can not be a triangle." ) ;
    }
    return 0 ;
    }
