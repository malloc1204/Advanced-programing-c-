#include <stdio.h>
#include <math.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int input[n];
    int number[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&input[i]);
        number[i]=0;
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(input[i]==input[j]){
                number[i]=number[i]+1;
            }
        }
    }
    int nummax=number[0];
    for(i=0;i<=n-1;i++){
        if(number[i]>=nummax){
            nummax=number[i];
        }
    }
    for(i=0;i<=n-1;i++){
        if(number[i]==nummax){
            printf("%d",input[i]);
            break;
        }
    }
}
