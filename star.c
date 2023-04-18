#include<stdio.h>
int main(){
  int i=0,j=0;
  int n,x=1,y,k;
  scanf("%d",&n);
  k=n*2-1;
  y=k;
  for(i=1;i<=n;i++){
    for(j=k;j>0;j--){
      if(j==x||j==y){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
    x++;
    y--;
  }
  }
