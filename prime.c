#include <stdio.h>

int main() {
   int n,i=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
     if(i%2==0){
       if(i>n-10 && i<n){
         printf("%d  ",i);
       }
       //printf("%d   ",i);
     }
   }
 }
