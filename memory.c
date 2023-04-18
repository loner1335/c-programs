#include <stdio.h>
#include<stdlib.h>
int main() {
    int *a;
    int n,i=0,k,j=0;
    printf("enter no.of elements  ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("enter extended size");
    scanf("%d",&k);
    a=realloc(a,k*sizeof(int));
    for(i=0;i<k;i++){
      j++;
    }
    printf(" size of a :\n %d",j);
    return 0;
}
