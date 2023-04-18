#include<stdio.h>
#include<conio.h>
void main(){
  int a=145,b,c;
  int i,rep=1,sum=0;
  //scanf("enter the number %d",&a);
  int sam=a;
  while(a>0){
    b=a%10;
    a=a/10;
    for(i=b;i>0;i--){
      rep=rep*i;
    }
    sum=sum+rep;
    rep=1;
  }
  if(sum==sam){
    printf("given number is strong number");
  }
  else{
    printf("not strong number");
  }
}
