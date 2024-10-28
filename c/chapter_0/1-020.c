// 猜数字游戏
#include <stdio.h>
int main(void){
    int random,n,num,i=1;
    scanf("%d%d",&random,&n);
    scanf("%d",&num);
    while((num >= 0) && (i <= n)){
        if(num > random){
            printf("Too big\n");
            i++;
        }
        else if(num < random){
            printf("Too small\n");
            i++;
        }
        else{
            if(i == 1){
                printf("Bingo!\n");
                return 0;
            }
            else{
                break;
            }
        }
        scanf("%d",&num);
    }
    if(num < 0){
        printf("Game Over\n");
    }
    else{
        if(i <= 3){
            printf("Lucky You!\n");
        }
        else if(i <= n){
            printf("Good Guess!\n");
        }
        else{
            printf("Game Over\n");
        }
    }
    return 0;
}