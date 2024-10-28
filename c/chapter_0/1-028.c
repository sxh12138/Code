// 求交错序列前 N 项和
#include <stdio.h>
#include <math.h>
int main(void){
    int n,i;
    double y = 0;
    scanf("%d",&n);
    for(i = 1;i <= n;i += 1){
        y += pow(-1,i-1) * i / (2 * i - 1);
    }
    printf("%.3f\n",y);
    return 0;
}