/*

    Input:     iRow = 4 iCol = 4

    output :        1   2   3   4   5
                    1   2           5
                    1       3       5
                    1           4   5
                    1   2   3   4   5    

*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          05/12/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)                // Function Definition
{
    int i = 0, j = 0;

    for(i = 0; i < iRow; i++)                   // Outer for Loop
    {
        for(j = 0; j < iCol; j++)               // Inner for Loop
        {
            if( j == 0 || j == iCol-1  || i == 0 || i == iRow-1 )
            {
                printf("%d\t", j + 1);
            }
            else if( i + j == iCol - 1)
            {
                printf("%d\t", j + 1);
            }
            else
            {
                printf("\t");  
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

int main()                                      // Entry Point Function
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of Rows and Columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);                  // Function Call

    return 0;
}
