#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void BLKdelete(char* str){
    int i=0;
    while(i<=strlen(str)-1){
        if(str[i]==' '){
            memmove(str+i,str+i+1,strlen(str)-i);
        }
        else{
            i++;
        }
    }
}

int Divide(char *input,int *number,char *symbol){
    int i,j=0,k=0,l=0;
    char s[100]={};
    for(i=0;i<=strlen(input)-1;i++){
        if(input[i]>='0'&&input[i]<='9'){
            s[j]=input[i];
            j++;
        }
        else{
            number[k]=atoi(s);
            k++;
            strcpy(s,"");
            j=0;
            symbol[l]=input[i];
            l++;
        }
    }
    return k;
}

int main(){
    char input[100]={};
    gets(input);
    BLKdelete(input);
    int number[100]={};
    char symbol[100]={};
    int IndexofNum=Divide(input,number,symbol);
    int i=0,j;
    int part;
    int result=0;
    while(i<=IndexofNum-1){
        if(symbol[i]=='+'||symbol[i]=='-'||symbol[i]=='='){
            if(i==0){
                result=result+number[i];
            }
            else{
                if(symbol[i-1]=='+'){
                    result=result+number[i];
                }
                else{
                    result=result-number[i];
                }
            }
            i++;
        }
        else{
            part=number[i];
            for(j=1;j>=0;j++){
                if(symbol[i+j-1]=='*'){
                    part=part*number[i+j];
                }
                else{
                    part=part/number[i+j];
                }
                if(symbol[i+j]=='+'||symbol[i+j]=='-'||symbol[i+j]=='='){
                    break;
                }
            }
            if(i==0){
                result=result+part;
            }
            else{
                if(symbol[i-1]=='+'){
                    result=result+part;
                }
                else{
                    result=result-part;
                }
            }
            i=i+j+1;
        }
    }
    printf("%d",result);
}


