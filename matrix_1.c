#include <stdio.h>
int main() {
   int a[]={1,2,3,4};
    int arr[4][4];
    int i=1,j=1;
    for(i=1;i<=4;i++) {
        for(j=1;j<=4;j++) {
            if((i==1 && j==1) || (i==2 && j==3) || (i==3 && j==2) || (i==4 && j==4) ) {
                arr[i][j]=a[0];
            }
            else if((i==1 && j==2) || (i==2 && j==1) || (i==3 && j==4) || (i==4 && j==3)) {
                arr[i][j]=a[1];
            }
            else if((i==1 && j==3) || (i==2 && j==4) || (i==3 && j==1) || (i==4 && j==2)) {
                arr[i][j]=a[2];
            }
            else if((i==1 && j==4) || (i==2 && j==2) || (i==3 && j==3) || (i==4 && j==1)) {
                arr[i][j]=a[3];
            }
        }
    }
    for(i=1;i<=4;i++) {
        for(j=1;j<=4;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
