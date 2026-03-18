#include<stdio.h>

int strend(char*s,char*t){
    int lens=strlen(s);
    int lent=strlen(t);
    int i;
    int j;
    int k=1;
    for(i=lens-1,j=lent-1;i>=0,j>=0;i--,j--){
        if(s[i]!=t[j]){
            k=0;
        }
    }
    return k;
}

int main(){
    char s[1000];
    char t[1000];
    gets(s);
    gets(t);
    if(strend(s,t)==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
