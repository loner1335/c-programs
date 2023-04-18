#include<stdio.h>
void main(){
  extern int a,b;
  printf("%d %d",a,b);
}
int a=5;
int b=4;
