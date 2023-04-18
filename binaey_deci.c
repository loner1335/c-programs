// convert from binary to decimal.
#include <stdio.h>

int main() {
    int a;
    int k,n=0,l=1;
    scanf("%d",&a);
    while(a>0) {
        k=a%10;
        n=n+k*l;
        a=a/10;
        l=l*2;
    }
    printf("%d",n);

    return 0;
}
