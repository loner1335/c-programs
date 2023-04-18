#include <stdio.h>
#include <windows.h>
int main() {
   int n,i=1,j=1;
   int x=i,y,k;
   scanf("%d",&n);
   y=k=n*2;
   for(i=1;i<=n*2;i++) {
       for(j=1;j<=n*2;j++) {
           if(j==1 || i==1|| j==x || j==y || j==n*2 || i==n*2  || i==(n*2)/2 || j==(n*2)/2) {
               sleep(1);
               printf("*");
           }
           else {
               printf(" ");
           }
       }
       printf("\n");
       x++;
       y--;
   }
    return 0;
}
