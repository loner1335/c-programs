#include<stdio.h>
#include<string.h>
int main() {
  char a[]="helloworld";
  int i=0,n=strlen(a);
  for(i=0;i<n;i++){
     if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
       printf("%c",a[i]);
     }
  }
  return 0;
}
