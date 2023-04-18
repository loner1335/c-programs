#include <stdio.h>

int main() {
   int a=2,b=3,c=5;
   int count=0,n;
   printf("enter no.of jumps:\n");
   scanf("%d",&n);
   if(n%3==0){
       count=(a+b+c)*(n/3);
       printf("%d",count);
   }
   else if(n%3==1){
       count=(a+b+c)*(n/3)+(a);
        printf("%d",count);
   }
   else if(n%3==2){
       count=(a+b+c)*(n/3)+(a+b);
        printf("%d",count);
   }

    return 0;
}
