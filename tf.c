#include <stdio.h>

int main() {
    int a,i=0,x;
    scanf("%d",&a);
        x=a%10;
        a=a/10;
        if(a>x){
         printf("true");
        }
        else{
            printf("false");
        }

    return 0;
}
