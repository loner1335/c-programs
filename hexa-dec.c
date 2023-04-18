#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
    char a[10];
    scanf("%s",a);
    int i=0,j=0,l=strlen(a),deci=0;
    for(i=l-1;i>=0;i--){
        if(a[i]>=48 && a[i]<=57){
             deci=deci+((a[i]-48)*(pow(16,j)));
             j++;
        }
        else if(a[i]>=65 && a[i]<=70){
            deci=deci+((a[i]-55)*(pow(16,j)));
            j++;
        }
    }
    printf("%d",deci);
    return 0;
}
