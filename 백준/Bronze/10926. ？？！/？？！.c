#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    int ch1=0;
    while(1){
        scanf("%s", name);
        for(int i =0; i<=strlen(name); i++){
            if(name[i]>=97 && name[i] <=122){
                ch1=1;
                break;
            }else{
                break;
            }
        }
        if(ch1==1){
            break;
        }
        continue;
    }
    printf("%s\?\?!",name);

    return 0;
}
