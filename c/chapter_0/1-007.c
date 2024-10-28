// 算术入门之加减乘除
#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    if(a % b == 0){
        printf("%d / %d = %d\n",a,b,a/b);
    }
    else{
        double c = a * 1.0 / b;
        printf("%d / %d = %.2f\n",a,b,c);
    }
    return 0;
}