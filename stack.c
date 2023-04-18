// Online C compiler to run C program online
#include <stdio.h>
#define n 5;
int a[10];
int top=-1;
void push(){
    int x;
    printf("enter elements\n");
    scanf("%d",&x);
    top++;
    if(top==-1){
        printf("underflow");
    }
    else{
        a[top]=x;
    }
}
void display(){
    int i=n-1;
    printf("diaplay elements are\n");
    for(i;i>=0;i--){
        printf("%d",a[i]);
    }
}
void pop(){
    if(top==-1){
        printf(" is empty\n");
    }
    else{
        top--;
    }
    printf("%d\n",top );
}
void main(){
    int choice,i=n-1;
    printf("enter u r choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        for(i;i>=0;i--)
           push();
        case 2:
           display();
        case 3:
           for(i;i>=0;i--)
            pop();
            break;

    }
}
