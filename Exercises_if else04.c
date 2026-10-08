#include <stdio.h>
  int main() {
  int num1 , num2 ;
  char op ;
  double ans = 0 ;
  printf( "Please enter the value of two number and the operation :" ) ;
  scanf( "%d %c %d" , &num1 , &op , &num2 ) ;
  if ( !(num2 == 0 && op == '/') && !(op != '+' && op != '-' && op !='*' && op != '/' ) ){
    if (op == '+'){
        ans = num1 + num2 ;
        } else {
                if (op == '-'){
                    ans = num1 - num2 ;
                    } else {
                            if (op == '*'){
                                ans = num1 * num2 ;
                                } else {
                                        ans = (float) num1 / num2 ;
                                    }
                        }
            }
    printf( "The answer is : %f\n" , ans ) ;
    }
   if ( (num2 == 0 && op == '/') || !( op == '+' || op == '-' || op == '*' || op == '/' ) ){
    printf( "Can't be caculater!!" ) ;
    }
  return 0 ;
}
