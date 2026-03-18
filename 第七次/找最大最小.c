#include <stdio.h>
#include <math.h>

int main(){
    int n,x,mini=0,maxi=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(i==1){
            maxi=x;
            mini=x;
        }
        else{
            if(x>=maxi){
                maxi=x;
            }
            else if(x<=mini){
                mini=x;
            }
        }
    }
    printf("%d %d",maxi,mini);
}
