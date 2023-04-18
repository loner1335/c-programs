// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a[]="i am good";
   int i=0,j=strlen(a)-1,k;
   while(i<j){
       a[i]^=a[j]^=a[i]^=a[j];
       i++;
       j--;
   }
   puts(a);
   i=j=0;
   for(i=0;a[i]!='\0';i++){
       if(a[i]==' '){
           k=i-1;
           while(j<k){
               if(a[j]==a[k])
                   continue;
               a[j]^=a[k]^=a[j]^=a[k];
               j++;
               if(k>j)
                 break;
           }
       }
   }
   puts(a);

    return 0;
}
