#include <stdio.h>
int rec(int n){
  if(n!=0){
    return(n%10+rec(n/10));
  }
}
 void main(){
     int s;
     scanf("%d",&s);
     printf("%d",rec(s));
 }
