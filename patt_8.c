#include<stdio.h>

int main() {
    int n,i=1,j=1;
    int x,y,k,l;
    scanf("%d",&n);
    x=y=(n*2)/2;
    k=x-1;
    l=y+1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n*2;j++) {
            if(j>=x && j<=y) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        if(i<=n){
            x--;
            y++;
        }

    }
}
