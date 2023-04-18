#include <stdio.h>

int main() {
    int a;
    int count=0,x,val;
    scanf("%d",&a);
    val=a;
    while(a>0){
        x=a%2;
        a=a/2;
        if(x==0){
            count ++;
        }
    }
    if((val>>count==1)&1){
        printf("its power of 2\n");
        printf("its power is %d",count);
    }
    else{
        printf("not 2 power");
    }
    return 0;
}
