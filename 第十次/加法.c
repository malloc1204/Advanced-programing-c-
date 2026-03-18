#include<stdio.h>
#include<string.h>

int main(){
    char a[100]="0";
    char b[100]="0";
    char A[81];
    char B[81];
    gets(A);
    gets(B);
    strcat(a,A);
    strcat(b,B);
    int la=strlen(a);
    int lb=strlen(b);
    int lmin,lmax;
    char *p;
    if(la>lb){
        lmin=lb;
        lmax=la;
        p=&a;
    }
    else{
        lmin=la;
        lmax=lb;
        p=&b;
    }
    int i,j;
    char c;
    for(i=0;i<=lmin-1;i++){
        c=a[la-1-i]-'0'+b[lb-1-i]-'0';
        if(c<10){
            p[lmax-1-i]=c+'0';
        }
        else{
            p[lmax-1-i]=c-10+'0';
            p[lmax-2-i]++;
            for(j=2;j<=lmax-i-1;j++){
                if(p[lmax-j-i]-'0'>=10){
                    p[lmax-j-i]=p[lmax-j-i]-10;
                    p[lmax-j-1-i]++;
                }
            }
        }
    }
    int x;
    for(i=0;i<=lmax-1;i++){
        if(p[i]!='0'){
            x=i;
            break;
        }
    }
    for(i=x;i<=lmax-1;i++){
        printf("%c",p[i]);
    }
}
