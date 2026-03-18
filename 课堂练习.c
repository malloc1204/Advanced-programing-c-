#include<stdio.h>

int main(){
    int An1,An2,Sn;
    int i,k;
    printf("please enter k:");
    scanf("%d",&k);
    An1=1;
    An2=1;
    Sn=2;
    for(i=3;i<=k;i++){
        int x=An1;
        An1=An2;
        An2=An2+x;
        Sn=Sn+An2;
    }
    printf("S%d=%d",k,Sn);
    return 0;
}
