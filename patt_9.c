#include <stdio.h>

int main() {
    int n;
    int i=1,j=1,x,y;
    scanf("%d",&n);
    x=y=n;
    for(i=1;i<=n*2;i++) {
        if(i<=n) {
            for(j=1;j<=n*2;j++) {
                if(j>=x && j<=y) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            x--;
            y++;
        }
        else if(i>n) {
            for(j=1;j<=n*2;j++) {
                if(j==n || (j<=n+4 && j>=n-4)) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
