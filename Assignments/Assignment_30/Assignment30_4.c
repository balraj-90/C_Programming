/*
    Input : iRow = 6 iCol = 5

    Output :    *   *   *   *   *
                *   @   @   @   *
                *   @   @   @   *
                *   @   @   @   *
                *   @   @   @   *
                *   *   *   *   *
*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          24/11/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)                   //Function Definition
{
    int i = 0, j= 0;                               //Variable Declaration       

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( i == 1 || i == iRow || j == 1 || j == iCol  )
            {
                printf("*\t");
            }
            else 
            {
                printf("@\t");
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
    int iValue1 = 0;                            //Variable Declaration
    int iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);                  //Method Call

    return 0; 
}