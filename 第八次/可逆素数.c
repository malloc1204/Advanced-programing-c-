#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int prinum(int n){
    int i;
    int judge=1;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            judge=judge*0;
        }
    }
    return judge;
}

int main(){
    int n;
    int i;
    scanf("%d",&n);
    int x=1;
    for(i=0;i>=0;i++){
        if(n/x==0){
            break;
        }
        x=x*10;
    }
    int len=i;
    int num[len];
    for(i=0;i<=len-1;i++){
        num[i]=n/pow(10,i);
    }
    int revn=0;
    for(i=0;i<=len-1;i++){
        revn=revn+num[len-1-i]*pow(10,i);
    }
    if(prinum(n)==1 && prinum(revn)==1){
        printf("yes");
    }
    else{
        printf("no");
    }
}
