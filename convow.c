#include <stdio.h>

int main() {
   char a[]="aeiou",b[100];
   int i=0,j=0,n,l,x[100],count=0;
   scanf("%s",b);
   n=strlen(b);
   l=strlen(a);
   for(i=0;i<n;i++){
     for(j=0;j<l;j++){
       if(b[i]==a[j]){
         printf("vow:%c\n",b[i]);
         x[count]=i;
         count++;
         break;
       }
     }
   }
   i=j=0;
  while(i<n){
    if(i!=x[j]){
      printf("cons:%c\n",b[i]);
    }
    else{
      j++;
    }
    i++;
  }
    return 0;
}
