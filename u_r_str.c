#include <stdio.h>
int main() {
   char a[200];
   int i=0,count_u=0,count_l=0;
   int up[20],j=0,lo[20],k=0;
   printf("enter string:");
   gets(a);
   while(a[i]!='\0'){
       if(a[i]>=65 && a[i]<=90){
           count_u++;
           up[j]=i;
           j++;

       }
       else if(a[i]>=97 && a[i]<=122){
           count_l++;
           lo[k]=i;
           k++;
       }
       i++;
   }
   printf("Upper case count:%d\n",count_u);
   printf("Lower case count:%d\n",count_l);
   i=0;
   printf("Upper case indexs:");
   while(i<j){
       printf("%d ",up[i]);
       i++;
   }
   i=0;
   printf("\nLower case indexs:");
   while(i<k){
       printf("%d ",lo[i]);
       i++;
   }
    return 0;
}
