#include<stdio.h>
int main(){
    int hour, min, time_limit, plus_h, plus_m;

    scanf("%d %d", &hour, &min);
    scanf("%d", &time_limit);

    plus_h = time_limit / 60;
    plus_m = time_limit % 60;

    hour += plus_h;
    min += plus_m;

    if(min >=60){
        min -= 60;
        hour++;
    }
    if(hour >= 24){
        hour -=24;
    }
    
    printf("%d %d", hour, min);

    return 0;
}