// 念数字
#include <stdio.h>
#include <math.h>
int fun(int n);
int fun(int n){
    if(n == 0){
        printf("ling");
    }
    else if(n == 1){
        printf("yi");
    }
    else if(n == 2){
        printf("er");
    }
    else if(n == 3){
        printf("san");
    }
    else if(n == 4){
        printf("si");
    }
    else if(n == 5){
        printf("wu");
    }
    else if(n == 6){
        printf("liu");
    }
    else if(n == 7){
        printf("qi");
    }
    else if(n == 8){
        printf("ba");
    }
    else{
        printf("jiu");
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    if(n < 0){
        printf("fu ");
        n = -n;
    }
    if(n < 10){
        fun(n);
    }
    else{
        int count = 0,num = n;
        while(n > 0){
            n /= 10;
            count++;
        }
        while(count > 1){
            fun(num / pow(10,count-1));
            printf(" ");
            num %= (int)pow(10,count-1);
            count -= 1;
        }
        fun(num / pow(10,count-1));
        printf("\n");
    }
    return 0;
}