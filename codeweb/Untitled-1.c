#include <math.h>
int main()
{
    float s,a,b,c;
    printf("please enter 1st number\n");
    scanf("%f", &a);
    printf("plase enter 2nd number\n");
    scanf("%f", &b);
    printf("Please enter the 3rd number\n");
    scanf("%f", &c);
    s=(a+b+c)/2;
    printf("area of triangle is ", sqrt(s*(s-a)(s-b)(s-c)));
    return 0;
}   