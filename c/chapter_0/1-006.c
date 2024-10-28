// 求整数均值
#include <stdio.h>
int main(void){
    int a1,a2,a3,a4,sum;
    double average;
    scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
    sum = a1+a2+a3+a4;
    average = sum / 4.0;
    printf("Sum = %d; Average = %.1f\n",sum,average);
    return 0;
}