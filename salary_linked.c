#include <stdio.h>
#include <stdlib.h>
struct node {
    int id;
    char name[20];
    int sal;
    int *link;
};
struct node *root = NULL;

int create() {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(root == NULL) {
        root = temp;
    }
    else {
        printf("enter data:\n");
        printf("enter id:");
        scanf("%d",&temp->id);
        printf("enter name:");
        scanf("%s",temp->name);
        printf("enter salary:");
        scanf("%d",&temp->sal);
        temp->link = root;
        root = temp;
    }
}

void displa() {
    struct node *p = root;
    while(p->link != '\0'){
        printf("%d\t",p->id);
        printf("%s\t",p->name);
        printf("%d\t",p->sal);
        p=p->link;
        printf("\n");
    }
}

int main() {
    int n;
    printf("enter no.of elements:");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        create();
    }
    displa();

    return 0;
}
