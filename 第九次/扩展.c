#include<stdio.h>
#include<string.h>

void clean(char *s){
    int len=strlen(s);
    int i;
    for(i=0;i<=len-1;i++){
        s[i]=0;
    }
}

int ExpandJudge(int i,char* s){
    if(s[i]!='-'&&s[i+1]=='-'&&s[i+2]!='-'&&s[i+2]>=s[i]){
        return 1;
    }
    else{
        return 0;
    }
}

int expand(char *s1,char *s2){
    int i=0;
    int u=0;
    clean(s2);
    int j=0;
    while(s1[i]!=0){
        if(ExpandJudge(i,s1)==1){
            for(u=0;u<s1[i+2]-s1[i];u++){
                s2[j]=s1[i]+u;
                j++;
            }
            i=i+2;
        }
        else{
            s2[j]=s1[i];
            i++;
            j++;
        }
    }
    s2[j]=0;
}

int main(){
    char s1[1000];
    char s2[1000];
    gets(s1);
    expand(s1,s2);
    printf("%s",s2);
}
