#include<stdio.h>

int main()
{
    int base,i,power,mul=1;
    scanf("%d%d",&base,&power);
    for(i=1;i<=power;i++)
    {
        mul=mul*base;
    }
    printf("the %d power of base %d is %d",power,base,mul);
    return 0;
}
