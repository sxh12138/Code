// 出租车计价
#include <stdio.h>
int main(void){
    double mileage,fare;
    int time;
    scanf("%lf%d",&mileage,&time);
    if(time < 5){
        if(mileage <= 3){
            fare = 10;
        }
        else if(mileage <= 10){
            fare = 10 + (mileage - 3) * 2;
        }
        else{
            fare = 10 + (10 - 3) * 2 + (mileage - 10) * 3;
        }
    }
    else{
        if(mileage <= 3){
            fare = 10 + (time / 5) * 2;
        }
        else if(mileage <= 10){
            fare = 10 + (mileage - 3) * 2 + (time / 5) * 2;
        }
        else{
            fare = 10 + (10 - 3) * 2 + (mileage - 10) * 3 + (time / 5) * 2;
        }
    }
    printf("%.0f\n",fare);
    return 0;
}