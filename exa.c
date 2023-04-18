#include <stdio.h>
struct x{
    int a[5][5];
    int i;
    int j;
};
struct x y;
int r=sizeof(y.a)/sizeof(y.a[0]);//to find no.of element row occupy.
int c=sizeof(y.a[0])/sizeof(y.a[0][0]);//to find no.of element column occupy.
int fun();
void main(){
    for(y.i=0;y.i<r;y.i++){
        for(y.j=0;y.j<c;y.j++){
            scanf(" %d " ,&y.a[y.i][y.j]);
        }
        printf("\n");
    }
    fun();

}
int fun(){
     for(y.i=0;y.i<r;y.i++){
        for(y.j=0;y.j<c;y.j++){
            printf("%d    ",y.a[y.i][y.j]);
        }
        printf("\n");
    }
    return 1;
}
