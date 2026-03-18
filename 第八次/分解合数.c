#include<stdio.h>
#include<math.h>

int PrimeNum(int n){
    int judge=1;
    int i;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            judge=judge*0;
        }
    }
    return judge;
}

int main(){
    int input;
    int i,j=0;
    scanf("%d",&input);
    int prinum[1000];
    for(i=2;i<input;i++){
        if(input%i==0&&PrimeNum(i)==1){
            prinum[j]=i;
            j=j+1;
            while(input%i==0){
                input=input/i;
            }
        }
    }
    for(i=0;i<=j-1;i++){
        printf("%d ",prinum[i]);
    }
    if(input!=1){
        printf("%d",input);
    }
}
