#include<stdio.h>
int main(){
  int num,min,max;
  printf( "Please set the maxinum of the range:" );
  scanf( "%d",&max );
  printf( "Please set the mininum of the range:" );
  scanf( "%d",&min );
  if( min>max ){
    max=min+max;
    min=max-min;
    max=max-min;
  }

  for( num=min ; num<=max ; num++ ){
      if( num%3==2 && num%5==3 && num%7==2 ){
        printf( "%d\n",num );
      }
  }
