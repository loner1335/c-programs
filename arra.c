
#include <stdio.h>
#include<string.h>
int main() {
 char a[20];
 char b[20];
 int i=0,j=0,count=0,count1,l1,l2;
 scanf("%s",a);
 scanf("%s",b);
 l1=strlen(a);
 l2=strlen(b);
 for(i=0;i<l1;i++){
     while(a[i]==b[j]){
         count++;

         j++;
         i++;
     }
     if(count==l2){
         count1++;
         j=0;
         count=0;
     }
 }
 printf("%d ",count1);


    return 0;
}
