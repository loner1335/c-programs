// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a[]="happy diwali guys";
   char b[30];
   int i=0,j,k,l=0,count=0;
   int x,y;
   while(a[i]!='\0'){
       if(a[i]==' ' && count==0){
           j=i;
           count++;
       }
       else if(a[i]==' ' && count==1){
           k=i;
       }
       i++;
   }
   x=k,y=j;
   i=0;
   while(a[k]!='\0'){
       b[i]=a[k];
       i++;
       k++;
   }
   k=x;
   while(1){
       b[i]=a[j];
       i++;
       j++;
       if(j==k){
           break;
       }
   }
   j=y;
   while(1){
       b[i]=a[l];
       i++;
       l++;
       if(l==j){
           b[i]='\0';
           break;
       }
   }
   i=0;
   printf("input string is:\n");
   while(a[i]!='\0'){
     printf("%c ",a[i]);
     i++;
   }
   i=0;
   printf("\n\n\n\n\n");
   while(b[i]!='\0'){
       if(i==k){
           printf(" ");
       }
       printf(" %c ",b[i]);
       i++;
   }
    return 0;
}
