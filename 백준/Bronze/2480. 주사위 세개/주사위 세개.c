#include<stdio.h>
int main(){
    int a,b,c,money,top;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        money =10000 +a*1000;
        printf("%d", money);
    }else if(a==b || a==c || b==c){
        if(a==b|| a==c){
            money = 1000 + a* 100;
        }else if(b==c ||b==a){
            money = 1000 + b* 100;
        }else {
            money = 1000 + c* 100;
        }
        printf("%d", money);
    }else{
        if(a>=b){
            top= a;
            if(a<c){
                top =c;
            }
        }else if(b>=a){
            top = b;
            if(b<c){
                top=c;
            }
        }
        money = top *100;
        printf("%d", money);
    }
    return 0;
}