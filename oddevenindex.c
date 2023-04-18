#include <stdio.h>
int main() {
    int a[]={1,2,1,2,1,2},n=sizeof(a)/sizeof(a[0]);
    int i=0,j=1,odd=0,even=0;
    for(i=0;i<2;i++){
        for(j=i;j<n;j++){
            if(j%2==0&&(a[i]==a[j])){
                    even++;
            }
            else  if(j%2!=0&&(a[i]==a[j])){
                    odd++;
            }
        }
    }
    if(n%2==0){
    if(n/2==odd && (n/2)==even){
        printf("odd indexs are odd\n");
        printf("even index are even too");
    }
    else if(n/2==odd){
         printf("odd indexs are odd");
    }
    else if((n/2)==even){
        printf("eeven idex element are even");
    }
    else{
        printf("all are uneven");
    }
    }

    return 0;
}
