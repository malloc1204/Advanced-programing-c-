#include<stdio.h>
#include<math.h>

int longn(int a){
    int l;
    int b=abs(a);
    int i;
    for(i=0;i<=4;i++){
        if(b>=pow(10,i)&&b<pow(10,i+1)){
            l=i+1;
        }
    }
    if(b==0){
        l=1;
    }
    if(a<0){
        l++;
    }
    return l;
}

int main(){
    int n;
    scanf("%d",&n);
    int A[1000][n][n];
    int x;
    char f;
    char F[1000];
    int i,j,k;
    int num;
    for(i=0;i<=999;i++){
        for(j=0;j<=n-1;j++){
            for(k=0;k<=n-1;k++){
                scanf("%d",&x);
                A[i][j][k]=x;
            }
        }
        getchar();
        scanf("%c",&f);
        if(f=='#'){
            num=i;
            break;
        }
        else{
            F[i]=f;
        }
    }
    for(i=1;i<=num;i++){
        if(F[i-1]=='+'){
            for(j=0;j<=n-1;j++){
                for(k=0;k<=n-1;k++){
                    A[0][j][k]=A[0][j][k]+A[i][j][k];
                }
            }
        }
        else{
            for(j=0;j<=n-1;j++){
                for(k=0;k<=n-1;k++){
                    A[0][j][k]=A[0][j][k]-A[i][j][k];
                }
            }
        }
    }
    for(j=0;j<=n-1;j++){
        for(k=0;k<=n-1;k++){
            int l=longn(A[0][j][k]);
            for(i=1;i<=4-l;i++){
                printf(" ");
            }
            printf("%d ",A[0][j][k]);
        }
        printf("\n");
    }
}

