#include <stdio.h>
#include <string.h>
int main() {
   char a[ ]="i am student at radar";
   char temp;
   int i=0,j=0,n,k=0;
   n=strlen(a)-1;
  i=j=0;
  puts(a);
  strrev(a);
  puts(a);
  while(i<n){
    //printf("1");
    if(a[i]==' ' || a[i]=='\0'){
      k=i+1;
      i=i-1;
      while(j<i){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j++;
        i--;
      }
      j=k;
      i=k;
    }
    i++;
  }
  puts(a);


    return 0;
}
