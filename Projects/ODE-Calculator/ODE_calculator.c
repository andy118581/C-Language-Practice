#include<stdio.h>
#include<math.h>
void input(int *,int *,int *);
void print_ode(FILE *,int,int,int);
void print_term1(FILE *,int);
void print_term2(FILE *,int,int);
void print_term3(FILE *,int,int,int);
void solve_first_order(FILE *,int,int);
void solve_second_order(FILE *,int,int,int);
void distinct_real_roots(FILE *,double,int,int,int);
void complex_conjugate_roots(FILE *,double,int,int,int);
void repeated_root(FILE *,int,int);

int main(){
  FILE *fp;
  fp = fopen("ODE_calculator.txt", "w");
  if (fp == NULL) {
      printf("無法建立或開啟檔案！\n");
      return 1;//                                                             結束程式
  }
  int a,b,c;
  input(&a,&b,&c);//                                                          呼叫輸入a,b,c之函式
  print_ode(fp,a,b,c);//                                                      呼叫印出ODE之函式
  if(a==0){
    solve_first_order(fp,b,c);//                                              呼叫求解1階ODE之函式
  }else{
    solve_second_order(fp,a,b,c);//                                           呼叫求解2階ODE之函式
  }
  fclose(fp);
  return 0;
}

void input(int *a,int *b,int *c){//-------------------------------------------輸入係數之函式定義
  printf( "Please set the value of a,b and c:" );
  scanf( "%d%d%d",a,b,c );
  while((*a)==0&&(*b)==0&&(*c)==0){
      printf("Please set the value of a,b,c again: ");
      scanf( "%d%d%d",a,b,c );
  }
}

void print_ode(FILE *fp,int a,int b,int c){//---------------------------------印出ODE之函式定義
  printf( "The ODE is :" );
  fprintf( fp, "The ODE is :" );
  print_term1(fp,a);
  print_term2(fp,a,b);
  print_term3(fp,a,b,c);
  printf( "=0\n" );
  fprintf( fp, "=0\n" );
}

void print_term1(FILE *fp,int a){//-------------------------------------------印出2次微分項之函式定義
  if((a>0&&a!=1)||(a<0&&a!=-1)){
      printf( "%dy''",a );
      fprintf( fp,"%dy''",a );
  }else if(a==1){
      printf( "y''" );
      fprintf( fp,"y''" );
  }else if(a==-1){
      printf( "-y''" );
      fprintf( fp,"-y''" );
  }
}

void print_term2(FILE *fp,int a,int b){//-------------------------------------印出1次微分項之函式定義
  if(b>0&&b!=1&&a!=0){
      printf( "+%dy'",b );
      fprintf( fp,"+%dy'",b );
  }else if(b<0&&b!=-1){
      printf( "-%dy'",-b );
      fprintf( fp,"-%dy'",-b );
  }else if(b==1&&a!=0){
      printf( "+y'" );
      fprintf( fp,"+y'" );
  }else if(b==-1){
      printf( "-y'" );
      fprintf( fp,"-y'" );
  }else if(b>0&&b!=1&&a==0){
      printf( "%dy'",b );
      fprintf( fp,"%dy'",b );
  }else if(b==1&&a==0){
      printf( "y'" );
      fprintf( fp,"y'" );
  }
}

void print_term3(FILE *fp,int a,int b,int c){//-------------------------------印出y項之函式定義
  if(c>0&&c!=1&&(a!=0||b!=0)){
      printf( "+%dy",c );
      fprintf( fp,"+%dy",c );
  }else if(c<0&&c!=-1){
      printf( "-%dy",-c );
      fprintf( fp,"-%dy",-c );
  }else if(c==1&&(a!=0||b!=0)){
      printf( "+y" );
      fprintf( fp,"+y" );
  }else if(c==-1){
      printf( "-y" );
      fprintf( fp,"-y" );
  }else if(c>0&&c!=1&&a==0&&b==0){
      printf( "%dy",c );
      fprintf( fp,"%dy",c );
  }else if(c==1&&a==0&&b==0){
      printf( "y" );
      fprintf( fp,"y" );
  }else{
      return;
  }
}

void solve_first_order(FILE *fp,int b,int c){//-------------------------------求解1階ODE之函式定義
    if(b!=0){
    printf( "It's a first-order differential equation.\n" );
    fprintf( fp, "It's a first-order differential equation.\n" );
    }
    printf( "Solution:\n" );
    fprintf( fp, "Solution:\n" );
    if(b==0){
      printf( "y=0" );
      fprintf( fp, "y=0" );
    }else if(c==0){
      printf( "y=C" );
      fprintf( fp, "y=C" );
    }else{
      double k=-(double)c/(double)b;
      if((k>0&&k!=1)||(k<0&&k!=-1)){
          printf( "y=Ce^(%lfx)",k );
          fprintf( fp, "y=Ce^(%lfx)",k );
      }else if(k==1){
          printf( "y=Ce^(x)" );
          fprintf( fp, "y=Ce^(x)" );
      }else if(k==-1){
          printf( "y=Ce^(-x)" );
          fprintf( fp, "y=Ce^(-x)" );
      }
    }
}

void solve_second_order(FILE *fp,int a,int b,int c){//------------------------求解2階ODE之函式定義
    printf( "It's a second-order differential equation\n" );
    double delta=((double)b*b)-(4.0*(double)a*c);                             //2階ODE解的判斷式
    printf( "Solution:\n" );
    fprintf( fp, "Solution:\n" );
    if(delta>0){//------------------------------------------------------------判定有兩相異實根
      distinct_real_roots(fp,delta,a,b,c);                                    //呼叫相異實根求解函式
    }else if(delta<0){//------------------------------------------------------判定為共軛複數根
      complex_conjugate_roots(fp,delta,a,b,c);                                //呼叫共軛複數根求解函式
    }else if(delta==0){//-----------------------------------------------------判定為重根
      repeated_root(fp,a,b);                                                  //呼叫重根求解函式
    }
}

void distinct_real_roots(FILE *fp,double delta,int a,int b,int c){//----------2階ODE相異實根齊性解之函式定義
      double k1=((-(double)b)+sqrt((double)delta))/(2*(double)a);
      double k2=((-(double)b)-sqrt((double)delta))/(2*(double)a);
      if((k1>0&&k1!=1)||(k1<0&&k1!=-1)){
          printf( "y=C1e^(%lfx)+",k1 );
          fprintf( fp,"y=C1e^(%lfx)+",k1 );
      }else if(k1==1){
          printf( "y=C1e^(x)+" );
          fprintf( fp,"y=C1e^(x)+" );
      }else if(k1==-1){
          printf( "y=C1e^(-x)+" );
          fprintf( fp,"y=C1e^(-x)+" );
      }else if(k1==0){
          printf( "y=C1+" );
          fprintf( fp,"y=C1+" );
      }
      if((k2>0&&k2!=1)||(k2<0&&k2!=-1)){
          printf( "C2e^(%lfx)",k2 );
          fprintf( fp,"C2e^(%lfx)",k2 );
      }else if(k2==1){
          printf( "C2e^(x)" );
          fprintf( fp,"C2e^(x)" );
      }else if(k2==-1){
          printf( "C2e^(-x)" );
          fprintf( fp,"C2e^(-x)" );
      }else if(k2==0){
          printf( "C2" );
          fprintf( fp,"C2" );
      }
}

void complex_conjugate_roots(FILE *fp,double delta,int a,int b,int c){//------2階ODE共軛複數根齊性解之函式定義
      double alpha=(-(double)b)/(2*(double)a);
      double beta=sqrt((double)(-delta))/(2*fabs(a));
      if(alpha>0&&alpha!=1){
          if(beta>0&&beta!=1){
              printf( "y=(e^(%lfx))(C1cos(%lfx)+C2sin(%lfx))",alpha,beta,beta );
              fprintf( fp,"y=(e^(%lfx))(C1cos(%lfx)+C2sin(%lfx))",alpha,beta,beta );
          }else if(beta==1){
              printf( "y=(e^(%lfx))(C1cos(x)+C2sin(x))",alpha );
              fprintf( fp,"y=(e^(%lfx))(C1cos(x)+C2sin(x))",alpha );
          }
      }else if(alpha<0&&alpha!=-1){
          if(beta>0&&beta!=1){
              printf( "y=(e^(-%lfx))(C1cos(%lfx)+C2sin(%lfx))",-alpha,beta,beta );
              fprintf( fp,"y=(e^(-%lfx))(C1cos(%lfx)+C2sin(%lfx))",-alpha,beta,beta );
          }else if(beta==1){
              printf( "y=(e^(-%lfx))(C1cos(x)+C2sin(x))",-alpha );
              fprintf( fp,"y=(e^(-%lfx))(C1cos(x)+C2sin(x))",-alpha );
          }
      }else if(alpha==1){
          if(beta>0&&beta!=1){
              printf( "y=(e^(x))(C1cos(%lfx)+C2sin(%lfx))",beta,beta );
              fprintf( fp,"y=(e^(x))(C1cos(%lfx)+C2sin(%lfx))",beta,beta );
          }else if(beta==1){
              printf( "y=(e^(x))(C1cos(x)+C2sin(x))" );
              fprintf( fp,"y=(e^(x))(C1cos(x)+C2sin(x))" );
          }
      }else if(alpha==-1){
          if(beta>0&&beta!=1){
              printf( "y=(e^(-x))(C1cos(%lfx)+C2sin(%lfx))",beta,beta );
              fprintf( fp,"y=(e^(-x))(C1cos(%lfx)+C2sin(%lfx))",beta,beta );
          }else if(beta==1){
              printf( "y=(e^(-x))(C1cos(x)+C2sin(x))" );
              fprintf( fp,"y=(e^(-x))(C1cos(x)+C2sin(x))" );
          }
      }else if(alpha==0){
          if(beta>0&&beta!=1){
              printf( "y=C1cos(%lfx)+C2sin(%lfx)",beta,beta );
              fprintf( fp,"y=C1cos(%lfx)+C2sin(%lfx)",beta,beta );
          }else if(beta==1){
              printf( "y=C1cos(x)+C2sin(x)" );
              fprintf( fp,"y=C1cos(x)+C2sin(x)" );
          }
      }
}


void repeated_root(FILE *fp,int a,int b){//-----------------------------------2階ODE重根齊性解之函式定義
      double k=-(double)b/(2*(double)a);
      if((k>0&&k!=1)||(k<0&&k!=-1)){
          printf( "y=C1e^(%lfx)+C2xe^(%lfx)",k,k );
          fprintf( fp,"y=C1e^(%lfx)+C2xe^(%lfx)",k,k );
      }else if(k==1){
          printf( "y=C1e^(x)+C2xe^(x)" );
          fprintf( fp,"y=C1e^(x)+C2xe^(x)" );
      }else if(k==-1){
          printf( "y=C1e^(-x)+C2xe^(-x)" );
          fprintf( fp,"y=C1e^(-x)+C2xe^(-x)" );
      }else if(k==0){
          printf( "y=C1x+C2" );
          fprintf( fp,"y=C1x+C2" );
      }
}
