// 计算摄氏温度
#include <stdio.h>
int main(void){
    int f,c;
    scanf("%d",&f);
    c = 5 * (f - 32) / 9;
    printf("Celsius = %d\n",c);
    return 0;
}