#include <stdio.h>
#include <math.h>

int KillZero(double k)

int main(){
    double input;
    scanf("%lf",&input);
    int i;
    double k;
    if(input>=1){
        for(i=0;i>=0;i++){
            k=input/pow(10,i);
            if(k>=1&&k<10){
                printf("%lfe%d",k,i);
                break;
            }
        }
    }
    else{
        for(i=0;i>=0;i++){
            k=input*pow(10,i);
            if(k>=1&&k<10){
                printf("%lfe%d",k,-i);
                break;
            }
        }
    }
}
