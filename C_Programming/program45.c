#include<stdio.h>

void DisplayFactors()
{
    if(6 % 1 == 0)
    {
        printf("1\n");
    }
    if(6 % 2 == 0)
    {
        printf("2\n");
    }
    if(6 % 3 == 0)
    {
        printf("3\n");
    }
    if(6 % 4 == 0)
    {
        printf("4\n");
    }
    if(6 % 5 == 0)
    {
        printf("5\n");
    }
    
}

int main()
{
    int iValue = 0;

    //printf("Enter Number:");
    //scanf("%d",&iValue);

    DisplayFactors(6);


    return 0;
}