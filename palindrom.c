#include<stdio.h>
#include<conio.h>
void main(){
  int a,b,c,r=0;
  printf("enter number\n");
  scanf("%d",&a);
  c=a;
  while(a>0){
    b=a%10;
    a=a/10;
    r=r*10+b;
  }
  if(r==c){
    printf("palindrom");
  }
  else{
    printf("not palindrom");
  }
}
