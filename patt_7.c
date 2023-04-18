#include <stdio.h>
int main() {
    int n;
    int i=1,j=1,x=i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
      if(i<(n/2)) {
        for(j=1;j<=i;j++) {
            if(j<=x) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
         printf("\n");
         x++;
      }
      else if(i>(n/2)) {
          for(j=1;j<=i;j++) {
            if(j<=x) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
         printf("\n");
         x--;
      }


    }
}
