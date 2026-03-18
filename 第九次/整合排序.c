#include<stdio.h>
#include<string.h>

void str_bin(char* s1,char* s2){
    strcat(s1,s2);
    int len=strlen(s1);
    int i=0;
    int j=0;
    for(i=0;i<=len-1;i++){
        for(j=i+1;j<=len-1;j++){
            if(s1[i]>s1[j]){
                char step=s1[i];
                s1[i]=s1[j];
                s1[j]=step;
            }
        }

    }
}

int main(){
    char s1[1000];
    char s2[1000];
    gets(s1);
    gets(s2);
    str_bin(s1,s2);
    printf("%s",s1);
}
