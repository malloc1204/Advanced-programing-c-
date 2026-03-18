#include<stdio.h>
#include<math.h>

int main(){
    double e,pi=2;
    scanf("%lf",&e);
    double i,n=0;
    for(i=1;i>0;i++){
        double x=(2*i/(2*i-1))*(2*i/(2*i+1));
        pi=pi*x;
        if(pi>=e){
            pi=pi/x;
            n=i-1;
            break;
        }
    }
    printf("%0.7lf %.0lf",pi,n);
}
