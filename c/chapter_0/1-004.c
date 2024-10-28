// 厘米换算英尺英寸
#include <stdio.h>
int main(void){
    int cm;
    scanf("%d",&cm);
    double meters = cm * 1.0 / 100;
    double feet = meters / 0.3048;
    int feet_int = (int)feet;
    double inches = (feet - feet_int) * 12;
    int inch = (int)inches;
    printf("%d %d\n",feet_int,inch);
    return 0;
}