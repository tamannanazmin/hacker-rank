#include<stdio.h>

int main()
{
    int t,x,valx,y,valy,a1,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x,&valx,&y,&valy);


        a1=x-((valx-1)*(x-y));

        printf("Case %d: %d",i,a1);
    }
    return 0;
}
