#include <stdio.h>
char assin(char a[],int l) {
    int i=0,j;
    for(i=0;i<l;i++) {
        for(j=i+1;j<l;j++) {
            if(a[i]>a[j]) {
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
}

char camp(char a[],char b[],int n) {
    int i=0;
    while(i<n) {
        if(a[i]==b[i]) {
            i++;
        }
        else {
            break;
        }
    }
    return i;
}
void main() {
    char a[100];
    char b[100];
    printf("enter string:");
    scanf("%s\t%s",a,b);
    int j,l=strlen(a),n=strlen(b);
    if(l!=n) {
        printf("not anagram");
    }
    else {
        assin(a,l);
        assin(b,n);
        puts(a);
        puts(b);
    }
    j=camp(a,b,n);
    printf("\n%d\n",j);
    if(j==n && j==l) {
        printf("anagram");
    }
    else {
        printf("not anagram");
    }
}
