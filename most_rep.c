#include <stdio.h>

int main() {
    char a[]="helloworld";
    char b;
    int count=0,j=0,i=0,temp=0;
    for(i=0;a[i]!='\0';i++){
        for(j=0;a[j]!='\0';j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>temp){
            temp=count;
            b=a[i];
        }
        count=0;
    }
    printf("%c:%d",b,temp);

    return 0;
}
