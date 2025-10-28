#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;         // Optimization
        }
    }
    if(iCnt > (iNo/2))   // No factors           prime : input=17  iCnt=9
    {
        return true;
    }
    else                  // Atleast one factor
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    
    if(bRet == true)
    { 
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    }

    return 0;
}

/*
    Time Complexity : For Prime = O(N/2)
    Time Complexity : For Non Prime = Either 1 or 2 ( for even 1 and for odd 2)

*/