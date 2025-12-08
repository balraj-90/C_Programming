/*
    Input:     iRow = 4 iCol = 4

    output :        *   *   *   #   
                    *   *   #   @   
                    *   #   @   @   
                    #   @   @   @   
*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          30/11/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i + j == iCol - 1)     //  CONDITION
            {
                printf("#\t");
            }
            else if (i + j > iCol - 1)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");  
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

int main()                      
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
