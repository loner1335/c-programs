#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
   char a[10],b[10];
   int i,j,count=0,k=0,m=0,y;
   scanf("%s",a);
   scanf("%s",b);
   int n=strlen(a);
   int l=strlen(b);
   if(n==l){
      for(i=0;a[i]!='\0';i++){
       for(j=0;b[j]!='\0';j++){
           if(a[i]==b[j]){
              count++;
              k++;
           }
           if(k>1){
               m++;
           }

        }
        k=0;
      }
      /*if(count>n){
        y=count-m;
        count=y+(sqrt(m));
      }*/
      if(count==l){
       printf("anagram");
     }
      else{
        printf("not anagram");
      }
   }
  else{
      printf("not equal");
  }

    return 0;
}
