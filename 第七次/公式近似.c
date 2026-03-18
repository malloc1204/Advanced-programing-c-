#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    double x;
    scanf("%lf%d",&x,&n);
    double X=1;
    double N=1;
    double e=1;
    for(i=1;i<=n;i++){
        X=X*x;
        N=N*i;
        e=e+X/N;
    }
    printf("%0.6lf",e);
}
