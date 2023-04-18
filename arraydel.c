#include <stdio.h>

void main(){
    int a[]={1,2,1,1,2,3,4,6};
    int i=0,k=0;
    int rep;
    int n=sizeof(a)/sizeof(a[0]);
    scanf("%d",&rep);
    for(i=0;i<n;i++){
        if(i==rep){
          k=i;
          while(i<=n){
            a[i-1]=a[i];
            i++;
          }
          i=k;
        }
    }
    n--;
    i=0;
    while(i<n){
      printf("%d",a[i]);
      i++;
    }
  }
