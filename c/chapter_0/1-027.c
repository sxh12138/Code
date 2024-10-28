// 掉入陷阱的数字
#include <stdio.h>
int fun(int n);
int fun(int n){
    int num,i=0,sum=0;
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
    sum = sum * 3 + 1;
    return sum;
}
int main(void){
    int n,i = 1;
    scanf("%d",&n);
    if(n != 13){
        int a = fun(n);
        printf("%d:%d\n",i,a);
        i += 1;
        do{
            a = fun(a);
            printf("%d:%d\n",i,a);
            i += 1;
        } while (a != fun(a));
        printf("%d:%d\n",i,a);
    }
    else{
        printf("%d:%d\n",1,13);
    }
    return 0;
}