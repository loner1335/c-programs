#include <stdio.h>
#include<string.h>
int main() {
   char a[]="madhu";
   int  i=0;
   int j=strlen(a)-1;
    while(i<j){
      a[i]^=a[j]^=a[i]^=a[j];
      i++;
      j--;
     }
   printf("%s\n",a);
    return 0;
}
