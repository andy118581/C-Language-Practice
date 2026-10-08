//有範圍韓信點兵求最大值之練習 (for述句):

//說明:讓使用者輸入搜尋上限 , 並找出上限內所有答案中之最大值

#include<stdio.h>
int main(){
  int i,max;
  int ans=0;
  printf( "Please set the maxinum of the range:" );
  scanf( "%d",&max );

  for(i=max ; i>0 && ans==0 ; i--){
      if( i%3==2 && i%5==3 && i%7==2 ){
        ans=i;
      }
  }

  printf( "%d\n",ans );
  return 0;
}
