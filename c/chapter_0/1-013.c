// 计算符号函数的值
#include <stdio.h>
int main(void){
    int n,sign;
    scanf("%d",&n);
    if(n > 0){
        sign = 1;
    }
    else if(n < 0){
        sign = -1;
    }
    else{
        sign = 0;
    }
    printf("sign(%d) = %d\n",n,sign);
    return 0;
}