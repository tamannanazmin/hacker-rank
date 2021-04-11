#include<stdio.h>

int main()
{
    int i,j,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    /*if(n==1)
    {


        printf("*\n");
    }
    else
    {*/
        for(i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");
        for(i=1;i<=n-2;i++)
        {
            printf("*");

        for(j=1;j<=n-2;j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
        }
        for(i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");



    return 0;
}
