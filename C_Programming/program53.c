#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency1 = 0;
    int iFrequency2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency2++;
        }
        else
        { 
            iFrequency1++;
        }
    }

    printf("Number of factors are:%d\n",iFrequency1);
    printf("Number of non factors are:%d",iFrequency2);
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}