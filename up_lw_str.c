#include <stdio.h>
int main() {
   char a[200];
   int i=0;
   printf("enter string:");
   gets(a);
   while(a[i]!='\0'){
       if(a[i]>=65 && a[i]<=90){
           a[i]=a[i]+32;
       }
       else if(a[i]>=97 && a[i]<=122){
           a[i]=a[i]-32;
       }
       i++;
   }
   printf("after string:");
   puts(a);
    return 0;
}
