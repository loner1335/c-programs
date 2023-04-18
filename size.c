#include<stdio.h>
/*finding sizes and no.of memory occupyed*/
void main(){
  int a[]={1,2,3,4,5};
  int b,c,d,e,f,g;
  b=sizeof(a);//memory occupyed by array
  c=sizeof(a)/sizeof(a[0]);//no.of elements occuoy by array
  int x[3][3];
  d=sizeof(x);//memory occupyed by 2d array
  e=sizeof(x)/sizeof(x[0][0]);//no.of elements occuoy by  2d array
  f=sizeof(x)/sizeof(x[0]);//no.of  rows occuoy by  2d array
  g=sizeof(x[0])/sizeof(x[0][0]);//no.of  columns occuoy by  2d array
  printf("memory occupyed by 'a' array %d\n",b);
  printf("no.of elements occuoy by array %d\n",c);
  printf("memory occupyed by 2d array %d\n",d);
  printf("no.of elements occuoy by  2d array %d\n",e);
  printf("no.of  rows occuoy by  2d array %d\n",f);
  printf("no.of  columns occuoy by  2d array\n",g);

}
