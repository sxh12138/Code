// 分段计算居民水费
#include <stdio.h>
int main(void){
    double x,y;
    scanf("%lf",&x);
    if(x <= 15){
        y = (4 * x) / 3;
    }
    else{
        y = 2.5 * x - 17.5;
    }
    printf("%.2f\n",y);
    return 0;
}