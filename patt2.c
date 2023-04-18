#include <stdio.h>
int main() {
   int i=1,j=1;
   int n,x=1,y,count=0;
   scanf("%d",&n);
   y=n*2-1;
   for(i=1;i<=n*2-1;i++){
       if(count!=n){
           for(j=1;j<=n*2-1;j++){
               if(j==x||j==y){
                   printf("*");
               }
               else{
                   printf(" ");
               }
           }
           printf("\n");
           count++;
           x++;
           y--;
       }
       else{
           for(j=1;j<=n*2-1;j++){
               if(j==x||j==y){
                   printf("*");
               }
               else{
                   printf(" ");
               }
           }
            printf("\n");
           x--;
           y++;
       }
   }

    return 0;
}
