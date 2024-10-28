// BCD 解密
#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d",&a);
    b = (a / 16) * 10 + a % 16;
    printf("%d\n",b);
    return 0;
}