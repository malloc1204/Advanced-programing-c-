#include<stdio.h>
#include<string.h>

int main(){
    int num[26];
    int i;
    for(i=0;i<=25;i++){
        num[i]=0;
    }
    char charc[27]="abcdefghijklmnopqrstuvwxyz";
    char c;
    while((c=getchar())!=EOF){
        for(i=0;i<=25;i++){
            if(c==charc[i]){
                num[i]++;
            }
        }
    }
    int j;
    for(i=0;i<=25;i++){
        for(j=i+1;j<=25;j++){
            if(num[i]<num[j]){
                int step=num[i];
                num[i]=num[j];
                num[j]=step;
            }
        }
    }
    int linenum=num[0];
    int line[linenum];
    for(i=0;i<=linenum-1;i++){
        line[i]=0;
    }
    for(i=1;i<=linenum;i++){
        for(j=0;j<=25;j++){
            if(num[j]>=linenum+1-i){
                line[i-1]++;
            }
        }
    }
    for(i=0;i<=linenum-1;i++){
        for(j=1;j<=line[i];j++){
            printf("#");
        }
        printf("\n");
    }


}
