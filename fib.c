#include <stdio.h>
int main() {
   int i=0,j=1,k,l,x;
   scanf("%d",&l);
   printf("%d\t%d",i,j);
   k=i+j;
   for(x=3;x<l;x++){
   i=j;
   j=k;
   k=i+j;
   printf("\t%d",k);
   }
    return 0;
}
