#include<stdio.h>
int main(){
  int id;
  while(1){
    printf( "Please enter the ID:" );
    scanf( "%d",&id );
    if(id == 0){
        return 0;
    }
    switch(id){
        case 1 :
            printf( "Andy\n" );
            break;
        case 2 :
            printf( "Jack\n" );
            break;
        case 3 :
            printf( "Amy\n" );
            break;
        default :
            printf( "Not founf\n" );
    }
  }
  return 0;
}
