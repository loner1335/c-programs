#include <stdio.h>
int main() {
  int choice,i=0;
  int x,y;
  do{
  printf("enter u r choice\n");
  scanf("%d",&choice);
  switch(choice){
      case 1:
         printf("addition\n");
         scanf("%d %d",&x,&y);
         printf("%d",x+y);
         break;
      case 2:
         printf("sub\n");
         scanf("%d %d",&x,&y);
          printf("%d",x-y);
         break;
       case 3:
         printf("mul\n");
         scanf("%d %d",&x,&y);
          printf("%d",x*y);
         break;
      case 4:
         printf("power\n");
         scanf("%d",&x);
         printf("%d",x*x);
         break;
      case 5:
         printf("root\n");
          scanf("%d",&y);
         break;
      case 6:
          printf("thanks for using");
          break;
  }
  i++;
  }while(i>6);

    return 0;
}
