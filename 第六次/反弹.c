#include<stdio.h>
#include<math.h>

int main(){
    int m,n,i;
    scanf("%d%d",&n,&m);
    double l=n;
    double s=n;
    for(i=1;i<m;i++){
        l=(double)l/4;
        s=s+l*2;
    }
    printf("%0.2f\n%0.2f",s,(double)l/4);
}
