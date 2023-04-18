#include<stdio.h>
int fun_1(int a){
    int m=0,n=0;
    int x=0;
    m=a%10;
    a=a/10;
    n=a%10;
    if(m==5 && n==5){
        n++;
        m++;
    }
    else if(m==5)
       m++;
    else if(n==5)
       n++;
    x=n*10+m;
    return(x);
}
int fun_2(int b){
    int m=0,n=0;
    int x=0;
    m=b%10;
    b=b/10;
    n=b%10;
    if(m==6 && n==6){
        n--;
        m--;
    }
    else if(m==6)
       m--;
    else if(n==6)
       n--;
    x=n*10+m;
    return(x);
}
int main(){
    int a,b;
    printf("enter elements:");
    scanf("%d %d",&a,&b);
    int add_1=0,add_2=0;
          add_1=fun_1(a);
          add_2=fun_1(b);
          printf("sum_change 5-6:%d\n",add_1+add_2);
          add_1=fun_2(a);
          add_2=fun_2(b);
          printf("sum_change 6-5:%d\n",add_1+add_2);
}
