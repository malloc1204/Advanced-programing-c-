#include<stdio.h>

int number(int *monkey,int n){
    int i,num=0;
    for(i=0;i<=n-1;i++){
        if(*(monkey+i)==1){
            num=num+1;
        }
    }
    return num;
}

int f(int i,int n){
    if(i>n-1){
        i=i%n;
    }
    return i;
}

int main(){
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    int monkey[n];
    int i;
    for(i=0;i<=n-1;i++){
        monkey[i]=1;
    }
    int x=0;
    for(i=q-1;i>=0;i++){
        if(monkey[f(i,n)]==1){
            x=x+1;
        }
        if(x==m){
            x=0;
            monkey[f(i,n)]=0;
        }
        if(number(monkey,n)==1){
            break;
        }
    }
    for(i=0;i<=n-1;i++){
        if(monkey[i]==1){
            printf("%d",i+1);
        }
    }
}
