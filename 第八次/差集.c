#include<stdio.h>

int main(){
    int n1[100];
    int i,j;
    int len1=0,len2=0;
    for(i=0;i<=99;i++){
        scanf("%d",&n1[i]);
        if(n1[i]==-1){
            len1=i;
            break;
        }
    }
    int n2[100];
    for(i=0;i<=99;i++){
        scanf("%d",&n2[i]);
        if(n2[i]==-1){
            len2=i;
            break;
        }
    }
    for(i=0;i<len1;i++){
        int judge=1;
        for(j=0;j<len2;j++){
            if(n1[i]==n2[j]){
                judge=0;
                break;
            }
        }
        if(judge==1){
            printf("%d ",n1[i]);
        }
    }
}
