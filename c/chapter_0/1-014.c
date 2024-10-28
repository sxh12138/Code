// 成绩转换
#include <stdio.h>
int main(void){
    int score;
    char ch;
    scanf("%d",&score);
    if(score < 60){
        ch = 'E';
    }
    else if(score < 70){
        ch = 'D';
    }
    else if(score < 80){
        ch = 'C';
    }
    else if(score < 90){
        ch = 'B';
    }
    else{
        ch = 'A';
    }
    printf("%c\n",ch);
    return 0;
}