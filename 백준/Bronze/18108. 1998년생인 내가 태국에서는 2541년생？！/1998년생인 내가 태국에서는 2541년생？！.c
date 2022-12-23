#include<stdio.h>
int main(){
    int su, bu;
    while(1){
        scanf("%d", &bu);
        if(bu >= 1000 && bu <=3000){
                su = bu -543;
                break;
        }
    }

    printf("%d", su);

    return 0;
}