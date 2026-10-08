//#include<stdio.h>
//int main(){
//  int side1,side2,side3;
//
//  printf( "Please set three side of the triangle:" );
//  scanf( "%d %d %d" , &side1 , &side2 , &side3 );
//
//  if( side1 > side2 ){
//      side1 = side1 + side2;
//      side2 = side1 - side2;
//      side1 = side1 - side2;
//  }
//  if( side2 > side3 ){
//      side2 = side2 + side3;
//      side3 = side2 - side3;
//      side2 = side2 - side3;
//  }
//  if( side1 > side2 ){
//      side1 = side1 + side2;
//      side2 = side1 - side2;
//      side1 = side1 - side2;
//  }
//
//  if( (side1 + side2) > side3 ){
//      if( side1 == side2 && side2 == side3 ){
//          printf( "This triangle is a Regule triangle.\n" );
//      }else{
//          printf( "Not a Regular triangle.\n" );
//      }
//  }else{
//      printf( "Three side can not be a triangle.\n" );
//  }
//  return 0;
//}
