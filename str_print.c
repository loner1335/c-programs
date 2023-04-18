#include <stdio.h>
char rev(char *s) {
    if(*s) {
        rev(s+1);
        printf("%c",*s);
    }
}
int main() {
   char a[]="hello";
   rev(a);
    return 0;
}
