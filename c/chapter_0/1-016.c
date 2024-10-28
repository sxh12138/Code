// 计算天数
#include <stdio.h>
int main(void){
    int year,month,day,days;
    int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d/%d/%d",&year,&month,&day);
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        months[2] = 29;
    }
    days = day;
    for(int i = 1;i < month; i++){
        days += months[i];
    }
    printf("%d\n",days);
    return 0;
}