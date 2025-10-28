/*
    Algorithm

    START
        Accept number and store it in No
        Divide No by 2
        If the remainder is 0 then
          display as Even
        Otherwise 
          display as Odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is Odd number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}