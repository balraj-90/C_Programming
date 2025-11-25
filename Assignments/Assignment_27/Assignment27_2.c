/*
    input : iRow = 4 iCol = 3

    output :    1 2   3
                1 2   3
                1 2   3
                1 2   3       

*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          09/11/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            printf("\t%d",j);
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
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2 );

    return 0;
}