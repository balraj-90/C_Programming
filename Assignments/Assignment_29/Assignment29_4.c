/*
    Input : iRow = 5 iCol = 5

    Output :     1   2   3   4   5   
                -1  -2  -3  -4  -5
                 1   2   3   4   5
                -1  -2  -3  -4  -5
                 1   2   3   4   5

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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 ==0 )
            {
                printf("%d\t", -j);
            }
            else
            {
                printf("%d\t", j);
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