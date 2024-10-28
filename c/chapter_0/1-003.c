// 输出倒三角图案
#include <stdio.h>
int main(void){
    char ch = '*';
    int i,j,n = 100;
    int m = n;
    while(n > 0){
        for(i = 0;i < m - n;i += 1){
            printf(" ");
        }
        for(j = 0;j < n - 1;j += 1){
            printf("%c ",ch);
        }
        printf("%c\n",ch);
        n -= 1;
    }
    return 0;
}