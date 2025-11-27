/*
    Input : iRow = 5 iCol = 5

    Output :    a    b   c   d   e
                1    2   3   4   5
                a    b   c   d   e
                1    2   3   4   5
                a    b   c   d   e

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
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
           if(i % 2 == 0)
           {
                printf("%d\t",j);
           }
           else
           {
            printf("%c\t",ch);
            
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