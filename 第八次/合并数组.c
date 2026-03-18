#include<stdio.h>

int main(){
    int i,j;
    int n1;
    scanf("%d",&n1);
    int N1[n1];
    for(i=0;i<=n1-1;i++){
        scanf("%d",&N1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int N2[n2];
    for(i=0;i<=n2-1;i++){
        scanf("%d",&N2[i]);
    }
    int N[n1+n2];
    for(i=0;i<=n1-1;i++){
        N[i]=N1[i];
    }
    for(i=n1;i<=n1+n2-1;i++){
        N[i]=N2[i-n1];
    }
    int Ntrue[n1+n2];
    int n=0;
    for(i=0;i<=n1+n2-1;i++){
        int number=0;
        for(j=0;j<=n1+n2-1;j++){
            if(N[i]==N[j]){
                number=number+1;
            }
        }
        if(number==1){
            Ntrue[n]=N[i];
            n=n+1;
        }
    }
    int Nnozero[n];
    for(i=0;i<=n-1;i++){
        Nnozero[i]=Ntrue[i];
    }
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<=n-1;j++){
            if(Nnozero[i]<Nnozero[j]){
                int a=Nnozero[i];
                Nnozero[i]=Nnozero[j];
                Nnozero[j]=a;
            }
        }
    }
    for(i=0;i<=n-1;i++){
        printf("%d ",Nnozero[i]);
    }
}
