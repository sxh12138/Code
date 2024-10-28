// 简单计算器
#include <stdio.h>
int main(void){
    int a,b,c;
    char ch;
    scanf("%d%c",&a,&ch);
    c = a;
    while(ch != '='){
        scanf("%d",&b);
        if(ch == '+'){
            c += b;
        }
        else if(ch == '-'){
            c -= b;
        }
        else if(ch == '*'){
            c *= b;
        }
        else if(ch == '/'){
            if(b != 0){
                c /= b;
            }
            else{
                printf("ERROR\n");
                return 0;
            }
        }
        else{
                printf("ERROR\n");
                return 0;
            }
        scanf("%c",&ch);
    }
    printf("%d\n",c);
    return 0;
}