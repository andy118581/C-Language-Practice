//  韓信點兵之練習 (for述句)

//  說明 : 其實就是有 1 數字 , 除以 3 餘 2 , 除以 5 餘 3 , 除以 7 餘 2
//  合格條件 : number % 3 == 2 && number % 5 == 3 && numbrt % 7 == 2
//  可能的候選者 : 正整數 ( 但有無窮多個 )

#include<stdio.h>
int main(){
  int num;

  for(num=1;!(num%3==2&&num%5==3&&num%7==2);num++){
  }
  printf( "%d\n",num );

  return 0;
}
