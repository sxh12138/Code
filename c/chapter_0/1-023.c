// 兔子繁衍问题
#include <stdio.h>
int fab(int x);
int fab(int x){
    int y = 1;
    if(x > 2){
        y = fab(x - 1) + fab(x - 2);
    }
    return y;
}
int main(void){
    int n,month;
    int i = 1;
    scanf("%d",&n);
    while(fab(i) < n){
        i++;
    }
    printf("%d\n",i--);
    return 0;
}