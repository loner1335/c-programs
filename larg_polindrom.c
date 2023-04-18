#include <stdio.h>
int main() {
    int a[]={12321,1131,1234,44334,121,111};
    int i=0,j=0,temp=0,k=0,lar=0;
    int n=sizeof(a)/sizeof(a[0]);
    while(i<n) {
        temp=a[i];
        while(a[i]>0) {
            j=a[i]%10;
            a[i]=a[i]/10;
            k=k*10+j;
        }
        printf("after:%d\t:",k);
        printf("temp:%d\t:",temp);
        if(k==temp) {
            printf("palindrom\n");
            if(temp>lar) {
                lar=temp;
            }
        }
        else{
            printf("Not polindrom");
        }
        printf("\n");
        k=0;
        i++;
    }
    printf("\n");
    printf("<-------RESULT----------->\n");
    printf("largest palindron:");
    printf("\t<-------%d------>",lar);

    return 0;
}
