/*
    Input:     iRow = 4 iCol = 4

    output :    1   2   3   4
                    2   3   4
                        3   4
                            4        

*/

//////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description :   Pattern Printing 
//      Input :         Integer, Integer 
//      Output :        Pattern Printed
//      Author :        Balraj Umakant Jagtap
//      Date :          26/11/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)              //Function Definition
{
    int i = 0, j = 0;
    
    for(i = 0; i < iRow; i++)                 //Outer Loop
    {
        for(j = 0; j < iCol; j++)             //Inner Loop
        {
            if(j >= i)
            {
                printf("%d\t", j + 1);
            }
            else
            {
                printf("\t");
            }

        }
        printf("\n");                         //New Line after each row
    }
}

//////////////////////////////////////////////////////////////////////////////
//
//      Entry Point function for the Application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                            //Variable Declaration
    int iValue2 = 0;

    printf("Enter the Number of Rows & Columns : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);                  //Method Call

    return 0;
}