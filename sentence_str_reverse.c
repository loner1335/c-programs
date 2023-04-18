#include <stdio.h>
#include <string.h>
#include<windows.h>
int main() {
   char a[200]="my name is madhu ";
   char temp;
   int i=0,j=0,n,k=0;
   n=strlen(a)-1;
  i=j=0;
  sleep(1);
  puts(a);
  strrev(a);
  sleep(1);
  puts(a);
  while(i<n){
    if(a[i]==' '){
      k=i+1;
      i=i-1;
      while(j<i){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j++;
        i--;
      }
      i=j=k;
    }
    i++;
  }
  sleep(1);
  puts(a);


    return 0;
}
