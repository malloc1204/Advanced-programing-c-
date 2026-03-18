#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    char t[1000];
    gets(s);
    gets(t);
    int i,j;
    for(i=0;i<=strlen(s)-1;i++){
        int k=1;
        for(j=0;j<=strlen(t)-1;j++){
            if(s[i+j]==t[j]){
                k=k;
            }
            else{
                k=k*0;
            }
        }
        if(k==1){
            memmove(s+i,s+i+strlen(t),strlen(s)+1-strlen(t)-i);
        }
    }
    printf("%s",s);
}
