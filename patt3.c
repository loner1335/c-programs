#include <stdio.h>
int main() {
    int i=0,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==0) {
                printf("*");
            }
            else if(j==i || j==n) {
                printf("*");
            }
            else if(i==n ) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
