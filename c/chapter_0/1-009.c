// 日期格式化
#include <stdio.h>
int main(void){
    int year,month,day;
    scanf("%d-%d-%d",&month,&day,&year);
    if(day < 10){
        if(month < 10){
            printf("%d-0%d-0%d\n",year,month,day);
        }
        else{
            printf("%d-%d-0%d\n",year,month,day);
        }
    }
    else{
        if(month < 10){
            printf("%d-0%d-%d\n",year,month,day);
        }
        else{
            printf("%d-%d-%d\n",year,month,day);
        }
    }
    return 0;
}