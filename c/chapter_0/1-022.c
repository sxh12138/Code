// 最大公约数和最小公倍数
#include <stdio.h>
int main(void){
    int a,b,c,temp;
    scanf("%d%d",&a,&b);
    c = a * b;
    if(a < b){
        temp=a;
        a=b;
        b=temp;
    }
    while(b != 0){
        temp = a%b;
        a = b;
        b = temp;
    }
    c /= a;
    printf("%d %d\n",a,c);
    return 0;
}