#include <stdio.h>
#include<string.h>
int main() {
   char a[20],b[10];
   int l,i,j=0,count=0,rep=0;
   scanf("%s",a);
   scanf("%s",b);
   l=strlen(b);
   for(i=0;a[i]!='\0';i++){
       if(a[i]==b[j]){
           count++;
           j++;
       }
       if(count==l){
           rep++;
           count=0;
           j=0;
       }
   }
   if(rep>0){
       printf("subsring %s present in string is %d",b,rep);
   }
   else{
       printf("substring not present");
   }

    return 0;
}
