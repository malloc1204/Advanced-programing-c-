#include<stdio.h>

int main(){
    int number,i;
    int x[3]={0,0,0};
    scanf("%d",&number);
    if(number<100 || number>999){
        printf("-1");
    }
    else{
        x[0]=number/100;
        x[1]=(number-100*x[0])/10;
        x[2]=(number-100*x[0]-10*x[1]);
        for(i=2;i>=0;i--){
            if(x[i]!=0){
                printf("%d",x[i]);
            }
        }
    }
}
