#include<stdio.h>

int maxi(int *l,int K){
    int i;
    int maxi=l[0];
    int maxi_i;
    for(i=1;i<=K;i++){
        if(l[i]>maxi){
            maxi=l[i];
            maxi_i=i;
        }
    }
    return maxi_i;
}

int main(){
    FILE *fpin;
    FILE *fpout;
    fpin=fopen("scpi.in","r");
    fpout=fopen("scpi.out","w");
    int n;
    fscanf(fpin,"%d",&n);
    fprintf(fpin,"%d",n);
    int i,j;
    int ok[n];
    int oklong[n];
    int sum=0;
    int k=0;
    int judge=0;
    for(i=1;i<=n/2;i++){
        j=i;
        sum=0;
        while(sum<n){
           sum=sum+j;
           j++;
        }
        if(sum==n){
            judge=1;
            ok[k]=i;
            oklong[k]=j-i;
            k++;
        }
    }
    int K=k-1;
    if(judge==0){
        fprintf(fpout,"%d:NOANSWER",n);
    }
    else{
        int a=maxi(oklong,K);
        fprintf(fpout,"%d=%d",n,ok[a]);
        for(i=1;i<=oklong[a]-1;i++){
            fprintf(fpout,"+%d",ok[a]+i);
        }
    }
    fclose(fpin);
    fclose(fpout);
}
