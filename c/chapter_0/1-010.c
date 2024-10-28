// 后天
#include <stdio.h>
int main(void){
    int d;
    scanf("%d",&d);
    d += 2;
    if(d > 7){
        d -= 7;
    }
    printf("%d\n",d);
    return 0;
}