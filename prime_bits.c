// prime number along with bits of number.
#include <stdio.h>
int bit(int n) {
    for(int i=7;i>=0;i--) {
        printf(" %d ",n>>i&1);
    }
}
int main() {
   int n;
   int i=1,count=0,temp;
   printf("enter element:");
   scanf("%d",&n);
   temp=n;
   for(i=1;i<=n;i++) {
       if(n%i==0) {
           count++;
       }
   }
   if(count<=2) {
       printf("prime number:");
       bit(temp);
   }
   else {
       printf("not prime");
   }
    return 0;
}
