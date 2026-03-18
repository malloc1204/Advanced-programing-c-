#include<stdio.h>
#include<math.h>

double down(double n){
    double i;
    double x=1;
    for(i=1;i<=2*n;i++){
        x=x*i;
    }
    return x;
}
int main(){
    double x,cos=1,upx=1,sign=1;
    double n,i;
    scanf("%lf%lf",&x,&n);
    for(i=1;i<=n;i++){
        sign=sign*(-1);
        upx=upx*x*x;
        cos=cos+sign*upx/down(i);
    }
    printf("%0.8lf",cos);
}
