#include <stdio.h>

void main(){
    int a[]={2,2,3,3,4,4,3,3,2,2,3,4,4,5,5,6};
    int i=0,j=1,clump=0;
    int n=sizeof(a)/sizeof(a[0]);
    while(i<n){
        if(a[i]==a[j]){
            clump=clump+1;
        }
        i++;
        j++;
    }
     if(clump==n-1){
        clump=1;
        printf("%d",clump);
      }
      else{
    printf("%d\n",clump);
      }
}
