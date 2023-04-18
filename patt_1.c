#include <stdio.h>
#include <windows.h>
int main() {
   int i,j,n;
   int x,y;
   scanf("%d",&n);
   x=y=(n*2)/2;
   for(i=1;i<=n;i++){
       for(j=1;j<=n*2;j++){
           if(j==x||j==y){
             sleep(1);
             printf("*");
           }
           else{
             //sleep(1);
              printf(" ");
           }
       }
       x--;
       y++;
       printf("\n");
   }

    return 0;
}
