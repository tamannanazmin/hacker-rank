#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    float r,ra;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f",&r);
        ra = 4*sqrt(2)*r;
        printf("%f\n",ra);

    }
    return 0;
}
