#include <stdio.h>
int main() {
   int a[]={1,2,3,4,5,7,8,9};
   int i=0,j=1,n=sizeof(a)/sizeof(a[0]),temp;
   while(i<n){
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
       i=i+2;
       j=j+2;
   }
   i=0;
   while(i<n){
       printf("%d",a[i]);
       i++;
   }

    return 0;
}
