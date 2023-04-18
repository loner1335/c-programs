#include<stdio.h>
int odd(int);
void main(){
  int a;
  scanf("%d",&a);
  int c=odd(a);
}
int odd(int a){
  if(a%2!=0){
    printf("odd");
  }
  else{
    printf("not odd");
  }
}
