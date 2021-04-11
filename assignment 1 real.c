#include<stdio.h>

int main()
{
    int n,i,x,sum;
    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        x = (i+1)*(i+2);
        sum = sum+x;
    }
    printf("the sum of first %d terms using for loop is %d\n",n,sum);

    i=1,sum = 0;
    while(i<=n)
    {
        x = (i+1)*(i+2);
        sum = sum+x;
        i++;
    }
    printf("the sum of first %d terms using while  loop is %d\n",n,sum);
    return 0;

}
