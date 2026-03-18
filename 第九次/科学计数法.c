#include<stdio.h>
#include<string.h>

int main(){
    char n[1000];
    gets(n);
    int len=strlen(n);
    int i;
    int dot;
    int first;
    for(i=0;i<=len-1;i++){
        if(n[i]!='0'&&n[i]!='.'){
            first=i;
            break;
        }
    }
    for(i=0;i<=len-1;i++){
        if(n[i]=='.'){
            dot=i;
            break;
        }
    }
    int index;
    if(first>dot){
        index=dot-first;
    }
    else{
        index=dot-first-1;
    }
    printf("%c",n[first]);
    if(first<len-1){
        printf(".");
    }
    for(i=first+1;i<=len-1;i++){
        if(n[i]!='.'){
            printf("%c",n[i]);
        }
    }
    printf("e%d",index);
}
