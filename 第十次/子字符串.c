#include<stdio.h>
#include<string.h>

int main(){
    char str[11];
    gets(str);
    int len=strlen(str);
    int i,j,k;
    for(i=1;i<=len;i++){
        for(j=0;j<=len-i;j++){
            for(k=0;k<=i-1;k++){
                printf("%c",str[j+k]);
            }
            printf("\n");
        }
    }
}
