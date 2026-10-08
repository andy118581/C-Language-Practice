#include<stdio.h>
int main(){
  int i,N;

  printf( "Please set the number:" );
  scanf( "%d",&N );

  printf( "1\n" );
  for(i=2;i<=N-1;i++){
      if(N%i==0){
          printf( "%d\n",i );
      }
  }
  printf( "%d\n",N );

  return 0;
}
