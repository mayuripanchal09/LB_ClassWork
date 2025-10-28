////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>                       // For input output
#include<stdbool.h>                     // For bool datype       

////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd  
//  Description:    It is used to check Even or Odd
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mayuri Shankar Panchal
//  Date:           10/10/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;
    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
    if(bRet == true)
    {   printf("%d is Even number\n",iValue);    }
    else
    {   printf("%d is Odd number\n",iValue);     }

    return 0;
}