#include <stdio.h>
#include <stdlib.h>

int main(){
    int chess[19][19];
    int i,j;
    for(i=0;i<=18;i++){
        for(j=0;j<=18;j++){
            scanf("%d",&chess[i][j]);
        }
    }
    for(i=0;i<=18;i++){
        for(j=0;j<=18;j++){
            printf("%d",chess[i][j]);
        }
    }
}
