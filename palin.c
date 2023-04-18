#include <stdio.h>
#include <string.h>
int main() {
    char str[]="mam";
    char str_1[20];
    int i=0,j=0,n=strlen(str);
    strcpy(str_1,strrev(str));
    strrev(str);
    while(str[i]!='\0' && str_1[j]!='\0') {
             if(str[i]!=str_1[j]) {
               break;
             }
             else {
               i++;
               j++;
             }
    }
    if(i==n) {
      printf("palindrom");
    }
    else {
      printf("not polindrom");
    }
    return 0;
}
