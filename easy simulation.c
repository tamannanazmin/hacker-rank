#include<stdio.h>

int main ()
{
    char ch;
    scanf("%c",&ch);
    if(ch==','|| ch==':' || ch=='?' || ch=='.')
    {
        printf("This is a separator\n");
        printf("The ascii code of %c is %d\n",ch,ch);
        if(ch==',')
            printf("Comma\n");
        else if(ch==':')
             printf("colon\n");
        else if(ch=='?')
            printf("Question\n");
        else if(ch=='.')
            printf("Dot\n");

    }
    else if(ch=='+'|| ch=='-' || ch=='*' || ch=='/' || ch=='<'|| ch=='>' || ch=='=' || ch=='&' || ch=='|')
      {
        printf("This is an Operator\n");
        printf("The ascii code of %c is %d\n",ch,ch);
        if(ch=='+'|| ch=='-' || ch=='*' || ch=='/' )
            printf("Arithmetic\n");
        else if (ch=='<'|| ch=='>')
            printf("Relational\n");
        else if(ch=='=' || ch=='&' || ch=='|')
            printf("Logical\n");

      }
    else if(ch>=0 || ch<=9)
        {

        printf("This is a Digit\n");
        printf("The ascii code of %c is %d\n",ch,ch);
        if(ch%2 == 0)
            printf("Even\n");
        else
            printf("odd\n");
    }
    else if (ch=='('|| ch==')'|| ch=='{' || ch=='}' || ch=='['|| ch==']')
         {
         printf("This is a Parenthesis\n");
         printf("The ascii code of %c is %d\n",ch,ch);
         if(ch=='(')
                printf("Opening First Bracket\n");
        else if(ch==')')
                printf("Opening Second  Bracket\n");
        else if(ch=='{')
                printf("Opening Third Bracket\n");
        else if(ch=='}')
                printf("Closing First Bracket\n");
        else if(ch=='[')
                printf("Closing Second Bracket\n");
        else if(ch==']')
                printf("Closing Third  Bracket\n");

         }
    else if(ch>=65 && ch<=90)
    {
        printf("This is an Alphabet\n");
        printf("The ascii code of %c is %d\n",ch,ch);
        if(ch == 65 || ch == 69 || ch==73 || ch==79 || ch==85)

            printf("Uppercase Vowel\n");
        else
            printf("Consonant\n");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("This is an Alphabet\n");
        printf("The ascii code of %c is %d\n",ch,ch);

        if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117)
             printf("Lowercase Vowel\n");
        else
            printf("Consonant\n");
    }


 return 0;



}
