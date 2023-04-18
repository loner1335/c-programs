#include <stdio.h>
int main() {
   int i=0,j=0,n=7;
   for(i=0;i<n*2;i++) {
       for(j=0;j<n*2;j++) {
           if(i==j || j==(n*2-i)) {
               printf("*");
           }
           else {
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}
