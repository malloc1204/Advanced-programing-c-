#include<stdio.h>

int main(){
    FILE *fin;
    FILE *fout;
    fin=fopen("fcopy.in","r");
    fout=fopen("fcopy.out","w");
    char c;
    char C;
    while((c=fgetc(fin))!=EOF){
        if(c!=' '&&c!='\t'){
            fprintf(fout,"%c",c);
        }
        else{
            if(C!=' '&&C!='\t'){
                fprintf(fout," ");
            }
        }
        C=c;
    }
    fclose(fin);
    fclose(fout);
}
