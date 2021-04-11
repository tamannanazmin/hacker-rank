#include<stdio.h>
int main (void)
{
    float num;
    scanf("%f",&num);

    if(80<=num && num<=100)
        printf("Grade: A+");
        else if(75<=num && num<=79)
            printf("A");
            else if(70<=num && num<=74)
                printf("Grade: A-");
                else if(65<=num && num<=69)
                    printf("Grade: B+");
                    else if(60<=num && num<=64)
                        printf("Grade: B");
                        else if(55<=num && num<=59)
                            printf("Grade: B-");
                            else if(50<=num && num<=54)
                                printf("Grade: C+");
                                else if(45<=num && num<=49)
                                    printf("Grade: C" );
                                    else if(40<=num && num<=44)
                                        printf("Grade: D");
                                        else if(0<=num && num<=39)
                                        printf("Grade: F");
     return 0 ;

     }
