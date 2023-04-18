// Swaping after space.
#include <stdio.h>

int main() {
  char a[]="my name is madhu";
  int i=0;
  while(a[i]!='\0') {
      i++;
  }
  int n=i-1;
  i=0;
  while(i<n) {
      if(a[i]==' ') {
          i++;
      }
      else if(a[n]==' ') {
          n--;
      }
      else {
          a[i]^=a[n]^=a[i]^=a[n];
          i++;
          n--;
      }
  }
  puts(a);

    return 0;
}
