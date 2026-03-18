#include<stdio.h>
#include<math.h>

int main(){
    double e,pi=2,piold;
    scanf("%lf",&e);
    double i,n=0;
    double up=1;
    double downx;
    double down=1;
    for(i=2;i>0;i++){
        up=up*(i-1);
        downx=2*i-1;
        down=down*downx;
        double x=(double)up/down;
        piold=pi;
        pi=pi+2*x;
        if(pi-piold<e){
            n=i;
            break;
        }
    }
    printf("%0.0lf %0.7lf",n,pi);
}
