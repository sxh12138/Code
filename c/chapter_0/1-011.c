// 然后是几点
#include <stdio.h>
int main(void){
    int time1,time2,time3,hour,minute;
    scanf("%d%d",&time1,&time2);
    if(time1 < 60){
        hour = 0;
        minute = time1;
    }
    else{
        hour = time1 / 100;
        minute = time1 % 100;
    }
    time3 = hour * 60 + minute + time2;
    if(time3 < 60){
        if(time3 < 10){
            printf("00%d\n",time3);
        }
        else{
            printf("0%d\n",time3);
        }
    }
    else{
        hour = time3 / 60;
        minute = time3 % 60;
        if(minute < 10){
            printf("%d0%d\n",hour,minute);
        }
        else{
            printf("%d%d\n",hour,minute);
        }
    }
    return 0;
}