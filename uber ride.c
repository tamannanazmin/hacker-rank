#include<stdio.h>

int main()
{
    int y;
    float x,r,pi=3.1416;
    scanf("%f%d",&x,&y);
    r = x/(1000*pi*2*y);
    printf("Case k: %0.3f",r);
    return 0;
}
