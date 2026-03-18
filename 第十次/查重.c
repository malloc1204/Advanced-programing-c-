#include<stdio.h>
#include<string.h>

int main(){
    FILE *fin;
    FILE *fout;
    fin=fopen("input.c","r");
    fout=fopen("output.c","w");
    char str[100];
    char v[100][100];
    int i,judge;
    i=0;
    judge=0;
    while(1){
        fscanf(fin,"%s",str);
        if(strcmp(str,"int")==0){
            judge=1;
            continue;
        }
        if(judge==1){
            if(strcmp(str,",")!=0&&strcmp(str,";")!=0){
                strcpy(v[i],str);
                i++;
            }
        }
        if(strcmp(str,";")==0){
            judge=0;
        }
        if(fgetc(fin)==EOF){
            break;
        }
    }
    int num=i-1;
    rewind(fin);
    while(fscanf(fin,"%s",str)!=EOF){
        judge=1;
        for(i=0;i<=num;i++){
            if(strcmp(str,v[i])==0){
                judge=judge*0;
            }
        }
        if(judge==1){
            fprintf(fout,"%s",str);
        }
    }
    fclose(fin);
    fclose(fout);
}
