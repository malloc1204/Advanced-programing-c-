#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    double x,value=1,base=1,powx=1;
    scanf("%lf%d",&x,&n);
    for(i=1;i<=n;i++){
        base=base*i;
        powx=powx*x;
        value=value+powx/base;
    }
    printf("%0.6lf",value);
}
