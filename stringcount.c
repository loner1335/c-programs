#include<stdio.h>
void main(){
  char a[]="helloworld";
  int i=0;
  while(a[i]!='\0'){
    i++;
  }
  printf("count %d",i);
}
