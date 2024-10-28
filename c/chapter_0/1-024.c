// 求整数的位数及各位数字之和
#include <stdio.h>
int main(void){
    int n,num,i=0,sum=0;
    scanf("%d",&n);
    num = n;
    while(n > 0){
        n /= 10;
        i++;
    }
    for(int j = 0; j < i; j++){
        sum += num%10;
        num -= num%10;
        num /= 10;
    }
    printf("%d %d\n",i,sum);
    return 0;
}