//有範圍韓信點兵求最大值之練習 (for述句):

//說明:讓使用者輸入搜尋上限 , 並找出上限內所有答案中之最大值

#include<stdio.h>
int main(){
  int num;
  printf( "Please set the maxinum of the range:" );
  scanf( "%d",&num );

  while(!(num%3==2 && num%5==3 && num%7==2) && num>0){
      num--;
  }
  if( num>0 ){
    printf( "%d\n",num );
  }else{
    printf( "diverge" );
  }
  return 0;
}
