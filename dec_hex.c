#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
  char a[20],j;
  int i=0,add=0,n;
  scanf("%s",a);
  n=strlen(a)-1;
  while(n>=0) {
      if(a[n]>='0' && a[n]<='9') {
          add=add+(a[n]-48)*pow(16,i);
      }
      else if(a[n]>='A' && a[n]<='F') {
          add=add+(a[n]-55)*pow(16,i);
      }
      i++;
      n--;
  }
  printf("%d",add);
    return 0;
}

#include <stdio.h>

int main() {
    int n=428,k,j=0;
    char a[20];
    while(n>0) {
        k=n%16;
       if(k>=9 && k<=15) {
           k=k+55;
       }
       else if(k>=0 && k<=9) {
           k=k+48;
       }
       a[j]=k;
       j++;
        n=n/16;
    }
    j=j-1;
    while(j>=0){
        printf("%c",a[j]);
        j--;
    }

    return 0;
}
