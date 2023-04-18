// polindrom of numbers using pointers.
#include <stdio.h>

int main() {
    int a=1,temp,ad=0,k;
    int *p=&a;
    temp=a;
    while(*p>0) {
         k=*p%10;
        *p=*p/10;
         ad=ad*10+k;
    }
    if(ad==temp) {
        printf("palindrom");
    }
    else {
        printf("not-palindrom");
    }
    return 0;
}
