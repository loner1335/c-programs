#include <stdio.h>

int main() {
    char a[20]={'\0'};
    char b[10]={'\0'};
    int i=0,j=0,n=0;
    printf("enter strings\n");
    scanf("%s",&a);
    scanf("%s",&b);
    while(a[i]!='\0'){
        n++;
        i++;
    }
    for(i=0;a[i]!='\0';i++){
        if(i==n-1){
            for(j=0;b[j]!='\0';j++){
                a[n+1]=a[n-1];
                a[i]=b[j];
                i++;
            }
        }
    }
  printf("%s",a);
    return 0;
}
