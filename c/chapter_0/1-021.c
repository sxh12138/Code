// 求奇数和
#include <stdio.h>
int main(void){
    int n,sum = 0;
    scanf("%d",&n);
    while(n > 0){
        if(n % 2 != 0){
            sum += n;
        }
        scanf("%d",&n);
    }
    printf("%d\n",sum);
    return 0;
}