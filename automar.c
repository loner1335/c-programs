#include <stdio.h>
int main() {
    int i=0,s,k,n=100,j=0;
        s=i*i;
        k=s;
        while(s>0){
            j++;
            s=s/10;
        }
        switch(j){
            case 1:
               k=k%j;
               printf("%d\n",k);
               if(k==i){
                      printf("Automarphic: %d",i);
               }
               break;
            case 2:
               k=k%(10*(j-1));
               printf("%d\n",k);
               if(k==i){
                  printf("Automarphic: %d",i);
               }
               break;
            case 3:
               k=k%(10*(j-1));
               printf("%d\n",k);
               if(k==i){
                   printf("Automarphic: %d",i);
               }
               break;
            case 4:
               k=k%(10*(j-1));
               printf("%d\n",k);
               if(k==i){
                   printf("Automarphic: %d",i);
               }
               break;
        }
    }
    return 0;
}
