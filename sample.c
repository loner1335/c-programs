#include <stdio.h>
int main() {
  int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int n=sizeof(a)/sizeof(a[0]);
  int i,j;
  //printf("%d",n);
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if((i+j)==n-1 || i==j)//The sum of the row and column indexes of a right diagonal element is                      always one less than the size (order) of the matrix
          printf("%d\t",a[i][j]);
          else
          printf("0\t");
      }
      printf("\n");
  }
}
