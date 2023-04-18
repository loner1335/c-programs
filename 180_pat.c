#include <stdio.h>
#include<windows.h>
int main() {
   int i=0,j=0,k=65;
   int x,y,n,l;
   scanf("%d",&n);
   x=y=l=(n*2)/2;
   for(i=0;i<n;i++){
       for(j=0;j<n*2;j++){
           if(j==x||j==y){
               sleep(1);
               printf("A");
           }
           else if(x<j&&y>j){
               sleep(1);
               printf("%c",++k);
           }
           else{
               printf(" ");
           }
       }
       x--;
       y++;
       k=65;
       printf("\n");
   }


    return 0;
}
