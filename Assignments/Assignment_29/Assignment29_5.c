/*
    Input : iRow = 4 iCol = 4

    Output :     1   2   3   4   
                 2   3   4   5   
                 3   4   5   6   
                 4   5   6   7     
*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          22/11/2025
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
            printf("%d\t", i + j - 1);              // Print the sum of row and column indices
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