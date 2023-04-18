#include <stdio.h>
#include <windows.h>
int main() {
   int n,i=1,j=1;
   scanf("%d",&n);
   int x=n,y=n;
   for(i=1;i<=n-1;i++) {
       for(j=1;j<=n*2;j++) {
         if((j<=x&& j>=y) || (i==n/2 && j<x) || j==y || (i==(n/2)-1 && j<=y) || (i==(n/2)+1 && j<=y)) {
               //sleep(1);
               printf("*");
           }
           else {
               printf(" ");
           }
       }
       if(i<n/2) {
           x++;
       }
       else if(i>=n/2) {
           x--;
       }
       printf("\n");
   }
    return 0;
}
