#include<stdio.h>
int main(){
    int yun;

    scanf("%d", &yun);

    if((yun % 4==0 && yun % 100 != 0) || yun % 400 ==0 )
        printf("1");
    else
        printf("0");

    return 0;
}