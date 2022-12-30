#include<stdio.h>
int main(){
    int a,b,s1,s2,s3;
    while(1){
        scanf("%d %d", &a,&b );
        if(a>=100 &&a<10000 && b>=100 && b< 10000){
            break;
        }
    }
    s1 = a * (b%10);
    s2 = a * (b%100/10);
    s3 = a * (b/100);

    printf("%d\n%d\n%d\n%d", s1, s2,s3, a*b);

    return 0;
}