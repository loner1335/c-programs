#include <stdio.h>
int main() {
    int a[]={1,4,3};
    char b[]="pnp";
    int i=0,n=sizeof(a)/sizeof(a[0]),l;
    for(i=0;i<n;i++){
        if(b[i]=='p'){
            l=a[i];
        }
        else if(b[i]=='n'){
            l=l-a[i];
        }
        else if(b[i]=='p'){
            l=l+a[i];
        }
    }
    if(l<0){
        l=~l+1;/*here ~ used to compilment and add 1,
                to convert negitive number to positive*/
    }
    l=l*100;
    printf("%d",l);
    return 0;
}
