#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
void create(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&temp->data);
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }

}
void display(){
    struct node *p;
    p=root;
    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->link;
    }
}
int add(int y){
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     struct node* p=root;
     int count=0;
    printf("enter data:\n");
    scanf("%d",&temp->data);
    while(p!=NULL){
        p=p->link;
        count++;
        if(count==y){
            temp->link=p->link;
            p->link=temp;
        }
    }
}
int main() {
    int n,i=0,l=5,j=0,y;
        while(j<5){
            printf("\nenter____choice:\n");
            scanf("%d",&n);
        switch(n){
        case 1:
          for(i=0;i<l;i++)
             create();
             break;
        case 2:
             display();
             break;
        case 3:
             printf("possition\n");
             scanf("%d",&y);
             add(y);
             break;
        }
        j++;
     }


    return 0;
}
