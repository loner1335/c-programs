#include <stdio.h>
int main() {
   int a[3][3]={1,2,3,4,10,6,7,8,9};
   int i=0,j=0,n=sizeof(a)/sizeof(a[0]);
   int x=0,y=0,k;
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
           if(i==j) {
               x=x+a[i][j];
               printf("%d\t",a[i][j]);
           }
           else if((i+j)==n-1) {
               y=y+a[i][j];
                printf("%d\t",a[i][j]);
           }
           else{
               printf("0\t");
           }
       }
       printf("\n\n");
   }
   k=x-y;
   y=y+k;
   printf("%d\t%d",x,y);
    return 0;
}
