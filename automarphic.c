#include <stdio.h>
#include<math.h>
int main() {
    int n,i=0,j=0,count=0,temp,k;
    printf("input      :");
    scanf("%d",&n);
    i=n*n;
    printf("after squar:%d\n",i);
    temp=n;
    while(n>0){
        n=n/10;
        count++;
    }
    printf("count digit:%d\n",count);
    k=pow(10,count);
    printf("divide     :%d\n",i);
    j=i%k;
    printf("output     :%d\n",j);
    printf("type       :");
    if(j==temp){
        printf("automorphic");
    }
    else{
        printf("not-automorphic");
    }


    return 0;
}
