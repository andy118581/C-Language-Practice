#include<stdio.h>
int main(){
  double a,b,ans;
  char op;
  printf( "Please set two number and operation: " );
  scanf( "%lf %c %lf",&a,&op,&b );
  switch (op){
      case '+':
          ans = a + b;
          break;
      case '-':
          ans = a - b;
          break;
      case '*':
          ans = a * b;
          break;
      case '/':
          if( b!=0 ){
            ans = a / b;
            break;
          }else{
            printf( "Diverge\n" );
            return 0;
          }
  }
  printf( "%lf %c %lf = %lf\n",a,op,b,ans );
  do{
    scanf( " %c %lf",&op,&b );
    if( op == '=' ){
        return 0;
    }else{
        switch (op){
            case '+':
                ans = ans + b;
                break;
            case '-':
                ans = ans - b;
                break;
            case '*':
                ans = ans * b;
                break;
            case '/':
                if( b!=0 ){
                    ans = ans / b;
                }else{
                    printf( "Diverge\n" );
                    return 0;
                }
        }
    }
    printf( "%lf\n",ans );
  }while( op != '=' );
  return 0;
}
