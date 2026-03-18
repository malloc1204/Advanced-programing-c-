#include<stdio.h>
#include<math.h>

int main(){
    int n,x=0,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=x+i;
        sum=sum+x;
    }
    printf("%d",sum);
}
