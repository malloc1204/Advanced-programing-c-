#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    int j;
    int k=0;
    int num[n];
    int numnew[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&num[i]);
    }

    int judge=1;
    for(i=0;i<=n-1;i++){
        judge=1;
        for(j=i+1;j<=n-1;j++){
            if(num[i]==num[j]){
                judge=judge*0;
            }
        }
        if(judge==1){
            numnew[k]=num[i];
            k++;
        }
    }

    int cishu[100]={0};
    for(i=0;i<=k-1;i++){
        for(j=0;j<=n-1;j++){
            if(numnew[i]==num[j]){
                cishu[i]++;
            }
        }
    }
    int cishunew[k];
    for(i=0;i<=k-1;i++){
        cishunew[i]=cishu[i];
    }
    int gap;
    for(i=0;i<=k-1;i++){
        for(j=i+1;j<=k-1;j++){
            if(cishunew[i]<cishunew[j]){
                gap=cishunew[i];
                cishunew[i]=cishunew[j];
                cishunew[j]=gap;
            }
        }
    }

    int preparenum[100];
    int q=0;
    int a,b;
    for(i=0;i<=k-1;i++){
        if(cishunew[i]==cishunew[i-1]){
            continue;
        }
        int prepare[100]={0};
        for(j=0;j<=k-1;j++){
            if(cishunew[i]==cishu[j]){
                prepare[q]=j;
                q++;
            }
        }
        for(j=0;j<=q-1;j++){
            preparenum[j]=numnew[prepare[j]];
        }
        for(a=0;a<=q-1;a++){
            for(b=a+1;b<=q-1;b++){
                if(preparenum[a]>preparenum[b]){
                    gap=preparenum[a];
                    preparenum[a]=preparenum[b];
                    preparenum[b]=gap;
                }
            }
        }
        for(a=0;a<=q-1;a++){
            for(b=0;b<=q-1;b++){
                if(numnew[prepare[b]]==preparenum[a]){
                    printf("%d %d\n",numnew[prepare[b]],cishu[prepare[b]]);
                }
            }
        }
    }
}
