#include <stdio.h>
#define n 10
int main() {
    int a[n]={1,2,3,4,5,6};
    int i=0,j=0,l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(i==l){
            for(j=i;j<n;j++){
                printf("enter :\n");
                scanf("%d",a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
