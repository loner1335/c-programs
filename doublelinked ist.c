#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* llink;
    int data;
    struct node* rlink;
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
        root->llink=temp;
        temp->rlink=root;
        root=temp;

    }

}
int possi(int m){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node *p;
    int count=0;
    p=root;
     while(p!=NULL){
       if(count==m){
          printf("enter data:\n");
          scanf("%d",&temp->data);
          temp->rlink=p->rlink;
          p->rlink=temp;
          temp->llink=p;
       }
       p=p->rlink;
       count++;
    }
    return 0;
}
void display(){
    struct node *p;
    p=root;
    while(p!=NULL){
        printf("%d  ",p->data);
        p=p->rlink;
    }
}
int main() {
    int i=0,y,j,choice;
    while(j>3){
        printf("enter u r choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                for(i=0;i<5;i++)
                    create();
                break;
            case 2:
                   display();
                   break;
            case 3:
                 printf("enter possition\n");
                 scanf("%d",&y);
                 possi(y);
        }
        j--;
    }


    return 0;
}
