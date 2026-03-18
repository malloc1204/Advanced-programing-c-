#include<stdio.h>
#include<math.h>

double length(double x1,double y1,double x2,double y2){
    double len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return len;
}

double area(double l1,double l2,double l3){
    double p=(l1+l2+l3)/2;
    double s=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    return s;
}

int main(){
    int n,i;
    scanf("%d",&n);
    double x[n];
    double y[n];
    for(i=0;i<n;i++){
        scanf("%lf%lf",&x[i],&y[i]);
    }
    double S=0;
    for(i=1;i<n-1;i++){
        double l1=length(x[0],y[0],x[i],y[i]);
        double l2=length(x[0],y[0],x[i+1],y[i+1]);
        double l3=length(x[i],y[i],x[i+1],y[i+1]);
        double s=area(l1,l2,l3);
        S=S+s;
    }
    printf("%0.2lf",S);
}
