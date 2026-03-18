#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int la=strlen(a);
    int lb=strlen(b);
    int i=0,j=0,p;
    while(i<=la-1){
        p=0;
        for(j=0;j<=lb-1;j++){
            if(a[i]==b[j]){
                memmove(a+i,a+i+1,la-i);
                p=1;
                break;
            }
        }
        if(p==0){
            i++;
        }
    }

    int lanew=strlen(a);
    char step;
    for(i=0;i<=lanew-1;i++){
        for(j=i+1;j<=lanew-1;j++){
            if(a[i]>a[j]){
                step=a[i];
                a[i]=a[j];
                a[j]=step;
            }
        }
    }
    if(a[0]==0){
        printf("Empty");
    }
    else{
        for(i=0;i<=lanew-1;i++){
            printf("%c",a[i]);
        }
    }
}
