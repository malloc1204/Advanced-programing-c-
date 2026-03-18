#include<stdio.h>

int compare(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int i,j;
    int n;
    int x1,y1;
    scanf("%d%d",&x1,&y1);
    getchar();
    int A[x1][y1];
    for(i=0;i<=x1-1;i++){
        for(j=0;j<=y1-1;j++){
            scanf("%d",&n);
            A[i][j]=n;
        }
    }
    getchar();
    int x2,y2;
    scanf("%d%d",&x2,&y2);
    getchar();
    int B[x2][y2];
    for(i=0;i<=x2-1;i++){
        for(j=0;j<=y2-1;j++){
            scanf("%d",&n);
            B[i][j]=n;
        }
    }
    getchar();
    int x3,y3;
    scanf("%d%d",&x3,&y3);
    for(i=x3-1;i<=x3-1+compare(x1-x3+1,x2)-1;i++){
        for(j=y3-1;j<=y3-1+compare(y1-y3+1,y2)-1;j++){
            A[i][j]=B[i-x3+1][j-y3+1];
        }
    }
    for(i=0;i<=x1-1;i++){
        for(j=0;j<=y1-1;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
