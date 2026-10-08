#include<stdio.h>
int main(){
  int num;
  int sum=0;
  int count=1;
  float aver;

  printf( "Please enter the number:" );
  scanf( "%d",&num );
  while( count==1 || num!=0 ){
      sum=sum+num;
      printf( "Please enter the number:" );
      scanf( "%d",&num );
      count=count+1;
  }
  aver=sum/count;
  printf( "Sum is : %f",aver );
  return 0;
}
