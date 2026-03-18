#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    gets(s);
    double n;
    scanf("%lf",&n);
    int i,j,u=0;
    for(i=1;i<=n;i++){
        u=0;
        for(j=0;j<=strlen(s)-2;j++){
            if(s[j]>s[j+1]){
                memmove(s+j,s+j+1,strlen(s)-j);
                u=1;
                break;
            }
        }
        if(u==0){
            memmove(s+strlen(s)-1,s+strlen(s),1);
        }
    }
    printf("%s",s);
}
