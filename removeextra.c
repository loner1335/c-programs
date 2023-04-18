#include <stdio.h>
int main() {
   char a[20];
   int i=0,j,k,count=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++){
       for(j=0;a[j]!='\0';j++){
           if(a[i]==a[j] && i!=j){
               for(k=j;a[k]!='\0';k++){
                   a[k]=a[k+1];
               }
           }
       }
   }
   puts(a);

    return 0;
}
