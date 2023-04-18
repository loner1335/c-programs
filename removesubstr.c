#include <stdio.h>
int main() {
    char a[20];
    char b[10];
    scanf("%s",a);
    scanf("%s",b);
    int i=0,j=0,k;
    for(j=0;b[j]!='\0';j++){
        for(i=0;a[i]!='\0';i++){
        if(a[i]==b[j]){
            for(k=i;a[k]!='\0';k++){
                a[k]=a[k+1];
            }
        }
    }
    }
    puts(a);
    return 0;
}
