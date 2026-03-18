#include<stdio.h>

int main(){
    int money,ten,five,two,one;
    scanf("%d",&money);
    ten=money/10;
    five=(money-10*ten)/5;
    two=(money-10*ten-5*five)/2;
    one=(money-10*ten-5*five-2*two);
    printf("%d %d %d %d",ten,five,two,one);
}
