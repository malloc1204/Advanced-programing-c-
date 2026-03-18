#include<stdio.h>
#include<math.h>

double down(double n){
    double i;
    double x=1;
    for(i=1;i<=2*n-1;i++){
        x=x*i;
    }
    return x;
}
int main(){
    double x,sin,upx,sign=1;
    double n,i;
    scanf("%lf%lf",&x,&n);
    sin = x;
    upx = x;
    for(i=2;i<=n;i++){
        sign=sign*(-1);
        upx=upx*x*x;
        sin=sin+sign*upx/down(i);
    }
    printf("%0.8lf",sin);
}
