// accending or decending order of arraay elements.
#include <stdio.h>
int display(int x[],int n) {
    int i=0;
    for(i=0;i<n;i++) {
        printf("%d ",x[i]);
    }
}
int assen(int a[],int n) {
    int i=0,j=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]<a[j]) {
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
    display(a,n);
}
int diss(int a[],int n) {
    int i=0,j=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]>a[j]) {
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
    display(a,n);
}
int main() {
   int a[]={12,2,3,43,5,0,7};
   int n=sizeof(a)/sizeof(a[0]);
   char c;
   scanf("%c",&c);
   if(c=='a') {
       assen(a,n);
   }
   else if(c=='d') {
       diss(a,n);
   }
    return 0;
}
