#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int charnum(char *s){
    int judge=0;
    int len=strlen(s);
    char c;
    int num=0;
    int i;
    for(i=0;i<=len-1;i++){
        c=s[i];
        if(c!=' '&&c!='\t'&&c!=':'){
            num++;
            judge=0;
        }
        else if(judge==0&&(c==' '||c=='\t')){
            num++;
            judge=1;
        }
        else if(c==':'){
            if(s[i-1]==' '||s[i-1]=='\t'){
                num++;
                break;
            }
            else{
                num=num+2;
                break;
            }
        }
    }
    return num;
}

int main(){
    int n;
    char N[100];
    gets(N);
    n=atoi(N);
    char a[100][100];
    char str[100];
    int NUM[100];
    int line;
    int i,j;
    for(i=0;i>=0;i++){
        if(gets(str)==NULL){
            line=i-1;
            break;
        }
        strcpy(a[i],str);
    }
    for(i=0;i<=line;i++){
        NUM[i]=charnum(a[i]);
        if(a[i][0]!=' '&&a[i][0]!='\t'){
            NUM[i]++;
        }
    }
    int len;
    for(i=0;i<=line;i++){
        for(j=1;j<=n-NUM[i];j++){
            printf(" ");
        }
        len=strlen(a[i]);
        if(a[i][0]!=' '&&a[i][0]!='\t'){
            printf(" %c",a[i][0]);
        }
        for(j=1;j<=len-1;j++){
            if(a[i][j]!=' '&&a[i][j]!='\t'&&a[i][j]!=':'&&(a[i][j-1]==' '||a[i][j-1]=='\t'||a[i][j-1]==':')){
                printf(" %c",a[i][j]);
            }
            else if(a[i][j]==':'){
                printf(" :");
            }
            else if(a[i][j]!=' '&&a[i][j]!='\t'&&a[i][j-1]!=' '&&a[i][j-1]!='\t'){
                printf("%c",a[i][j]);
            }
        }
        printf("\n");
    }
}
