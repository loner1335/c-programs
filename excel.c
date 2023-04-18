#include <stdio.h>
int main() {
    int i=1,n=25,j,k,l=0;
    char a[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int s=strlen(a);
    for(i=0;i<=25;i++) {
            printf("%d-%c\n",i+1,a[i]);
    }
    printf("\n");
    for(k=0;k<s;k++) {
        for(j=0;j<s;j++) {
            printf("%d-%c%c\n",i,a[k],a[j]);
            i++;
        }
    }
    printf("\n");
    for(k=0;k<s;k++) {
        for(j=0;j<s;j++) {
            for(l=0;l<s;l++){
                 printf("%d-%c%c%c\n",i,a[k],a[j],a[l]);
                 i++;
            }
        }
    }
}
