#include<stdio.h>
void main(){
  int a=153,b,i;
  int pow=1,sum=0;
  int same=a,count=0;
  while(a>0){
    count++;
    a=a/10;
  }
  a=same;
  while(a>0){
    b=a%10;
    a=a/10;
    for ( i = 0; i < count; i++) {
       pow=pow*b;
    }
    sum=sum+pow;
    pow=1;
  }
  if(sum==same)
     printf("armstrong number");
  else
     printf("not armstrong");
}
