#include <stdio.h>
#include <windows.h>
int main() {
   int i=0,j=0,n;
   int x,y;
   int k,l;
   scanf("%d",&n);
   x=y=(n*2)/2;
   k=l=(n*4)-x;
   for(i=0;i<n*2;i++){
       for(j=0;j<=n*4;j++){
           if(j==x||j==y){
             sleep(1);
             printf("M");
           }
           else
             printf(" ");
           if(j==k||j==l){
              sleep(1);
              printf("S");
           }
           else
              printf(" ");
       }
       x--;
       y++;
       k--;
       l++;
       printf("\n");
   }

    return 0;
}
