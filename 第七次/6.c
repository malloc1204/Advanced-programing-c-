#include<stdio.h>

int main(){
    int num,i,j,n=0,a=0,b=0;
    scanf("%d",&num);
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            int x=10*i+j;
            int y=10*j+i;
            if(x*y==num){
                n=1;
                a=i;
                b=j;
            }
        }
    }
    if(n==0 || a==b){
        printf("No Answer");
    }
    else{
        if(a<b){
            printf("%d%d",a,b);
        }
        else{
            printf("%d%d",b,a);
        }
    }
}
