#include <stdio.h>

int main() {
 char a[]="my     name     is     god";
 int i=0,k,j;
// scanf("%s",a);
 for(i=0;i<a[i]!='\0';i++){
     for(j=1;a[j]!='\0';j++){
         if(a[i]==' ' && a[j]==' '){
         for(k=j;a[k]!='\0';k++){
             a[k]=a[k+1];
         }
     }
     }
 }
 i=0;
 printf("%s\n",a);
    return 0;
}
