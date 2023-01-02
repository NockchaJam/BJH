#include<stdio.h>
int main(){
    int hour, min;
    scanf("%d %d", &hour, &min);

    min -= 45;
    if(min < 0){
        min += 60;
        if(hour ==0){
            hour=23;
            printf("%d %d", hour, min);
        }else{
            hour--;
            printf("%d %d", hour ,min);
        }
    }else
        printf("%d %d", hour, min);
    
    return 0;
}