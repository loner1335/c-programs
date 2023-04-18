#include <stdio.h>
#include <string.h>
int main() {
    char str_1[]="i am good at work";
    char temp;
    int i=0,j=0,k,l=strlen(str_1);
    puts(str_1);
    strrev(str_1);
    puts(str_1);
    for(i=0;i<l;i++) {
        if(str_1[i]==' ' ||str_1[i]=='\0') {
            k=i-1;
            while(j<k) {
                temp=str_1[k];
                str_1[k]=str_1[j];
                str_1[j]=temp;
                j++;
                k--;
            }
            i=i+1;
            j=i;
        }
    }
    puts(str_1);
    return 0;
}
