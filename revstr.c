#include <stdio.h>
char revse(char *s){
    if(*s){
        revse(s+1);
        printf("%c",*s);
    }
}
int main() {
   char a[100];
   scanf("%s",a);
   revse(a);
    return 0;
}
