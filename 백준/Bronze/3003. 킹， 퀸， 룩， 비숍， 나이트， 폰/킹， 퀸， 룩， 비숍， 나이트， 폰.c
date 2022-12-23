#include<stdio.h>
int main(){
    int ch=1,ch2;
    int ch3[6], ch4[6];
    int ch5[6] = {1,1,2,2,2,8};
    while(1){
        scanf("%d %d %d %d %d %d", &ch3[0], &ch3[1], &ch3[2], &ch3[3], &ch3[4], &ch3[5]);
        for(int i=0; i<6; i++){
            if(ch3[i]>=0 && ch3[i]<=10){
                ch4[i] = ch5[i] - ch3[i];
            }else{
                ch =0;
                break;
            }
        }
        if(ch ==0) {
            continue;
        }else{
            break;
        }
    }
    printf("%d %d %d %d %d %d", ch4[0], ch4[1], ch4[2],ch4[3], ch4[4], ch4[5]);

    return 0;
}
