/*
    Input : iRow = 5 iCol = 5

    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10

*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          20/11/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)                   //Function Definition
{
    int i = 0, j= 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        int even = 2;
        int odd = 1;

        for(j = 1; j <= iCol; j++)
        {
           if(i % 2 == 0)
           {
                printf("%d\t",odd);
                odd += 2;
           }
           else
           {
            printf("%d\t",even);
            even += 2;
           }
        }
        printf("\n");
    }

}

//////////////////////////////////////////////////////////////////////////////
//
//      Entry Point function for the Application
//
//////////////////////////////////////////////////////////////////////////////

int main()                                      //Main Function
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);                  //Method Call

    return 0; 
}