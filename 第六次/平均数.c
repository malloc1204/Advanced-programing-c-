#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    double avrg=(double)sum/3;
    printf("%d\n%0.2f",sum,avrg);
}
