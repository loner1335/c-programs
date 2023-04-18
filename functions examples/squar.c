#include<stdio.h>
int squr(int ,int);
void main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=squr(a,b);
  printf("%d",c);
}
int squr(int a,int b){
  if(a==b){
    int c=a*b;
    return c;
  }
  else{
    printf("squr is not possile\n");
  }
}
