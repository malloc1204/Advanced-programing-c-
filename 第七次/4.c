#include<stdio.h>
#include<math.h>

int main(){
    int num,i,n=1;
    int x[5]={0,0,0,0,0};
    scanf("%d",&num);
    int num1=num;
    for(i=4;i>=0;i--){
        int y=pow(10,i);
        x[i]=num/y;
        num = num-y*x[i];
        if(x[i]!=0 && i+1>n){
            n=i+1;
        }
    }
    printf("%d\n",n);
    printf("%d\n",num1);
    for(i=0;i<=n-1;i++){
        printf("%d",x[i]);
    }
}
