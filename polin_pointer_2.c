// string palindrom using pointers.
#include <stdio.h>

int main() {
    char a[]="mam";
    char *p=a;
    int i=strlen(a)-1,j=0;
    while(*p) {
        if(*(p+j)==*(p+i)) {
            j++;
            i--;
        }
        else {
            break;
        }
        *(p+j);
    }
    if(j>i) {
        printf("palindrom");
    }
    else {
        printf("not-palindrom");
    }

    return 0;
}
