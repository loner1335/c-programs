#include <stdio.h>
int main() {
    int a[20]={1,2,3,4,1,2};
    int i=0,j=1,k;
    for(i=0;a[i]!='\0';i++){
            if(a[i]==a[j]){
                for(k=j;a[k]!='\0';k++){
                    a[k]=a[k+1];
                }
            }
            j++;

    }
    i=0;
    while(i<6){
        printf("%d",a[i]);
        i++;
    }
    return 0;
}
