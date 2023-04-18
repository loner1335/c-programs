#include<stdio.h>
int swap(int *,int *);
void main(){
  int a=2,b=4,c;
  c=swap(&a,&b);
  printf("%d  %d",a,b);
}
int swap(int *a,int *b){
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;

}
