#include <stdio.h>
int main() {
 int n;
 scanf("%d",&n);
 int i=1,j=1;
 int x=1,y;
 y=n*2;
 for(i=1;i<=n;i++) {
     for(j=1;j<=n*2;j++) {
         if(j==x || j==y || i==1 || i==n) {
             printf("*");
         }
         else {
             printf(" ");
         }
     }
     x++;
     y--;
     printf("\n");
 }

    return 0;
}
