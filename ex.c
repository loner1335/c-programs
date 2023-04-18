#include <stdio.h>
int main() {
    int n=20;
    int i=0,j=0;
    for(i=n;i>0;i--) {
        for(j=i;j>0;j--) {
            printf("%d\t",j);
        }
        printf("\n");
    }
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
