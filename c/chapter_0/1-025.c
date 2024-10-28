// 二分法求解
#include <stdio.h>
double fun(double a0,double a1,double a2,double a3,double x);
double fun(double a0,double a1,double a2,double a3,double x){
    double f = a0 + a1 * x + a2 * x *x + a3 * x * x * x;
    return f;
}
int main(void){
    double a0,a1,a2,a3,a,b,f;
    scanf("%lf%lf%lf%lf",&a3,&a2,&a1,&a0);
    scanf("%lf%lf",&a,&b);
    f = (a + b) / 2;
    double thresholdValue = 0.001;
    double fa = fun(a0,a1,a2,a3,a);
    double fb = fun(a0,a1,a2,a3,b);
    double fc = fun(a0,a1,a2,a3,f);
    if((b - a) > thresholdValue){
        while(fc != 0){
            if(fc * fa > 0){
                a = f;
            }
            else{
                b = f;
            }
            f = (a + b) / 2;
            fc = fun(a0,a1,a2,a3,f);
        }
    }
    printf("%.2f\n",f);
    return 0;
}