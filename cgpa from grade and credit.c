#include<stdio.h>

int main()
{
    int n;
    float c,g,sum1,sum2,totalcredit, mul;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%f%f",&c,&g);
        if((c==0.75 || c==3.0 || c==1.5)&&g<=4.00)
        {
        mul = c*g;
        sum1 = mul+(c*g);
        }
        else
                printf("no ans");

    }
        while(n--)
        {
            scanf("%f%f",&c);
            if((c==0.75 || c==3.0 || c==1.5))
            {

            sum2 = c+c;
            totalcredit = sum2+c;
            }
            else
                printf("no ans");
        }
        printf("%.2f",sum1/totalcredit);




}
