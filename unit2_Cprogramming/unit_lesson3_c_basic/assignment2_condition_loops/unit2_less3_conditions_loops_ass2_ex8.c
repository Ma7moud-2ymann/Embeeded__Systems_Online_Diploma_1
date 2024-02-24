/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex8
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX8>> C Program to make a simple calculator using switch

 ================== ====================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2;
    printf("enter number1 :");
    scanf("%d",&number1);
    printf("enter number2 :");
    scanf("%d",&number2);
    char operand;
    printf("enter your operation  + ,-,* ,/  :");
    scanf(" %c",&operand);
    switch(operand)
    {
    case '+':
        printf("add operation equal to %d + %d = %d ",number1,number2,number1 +number2);
        break;
    case '-':
        printf("substraction operation equal to %d - %d = %d ",number1,number2,number1 - number2);
        break;
    case '*':
        printf("multiplication operation equal to %d * %d = %d ",number1,number2,number1 * number2);
        break;
    case '/':
        printf("substraction operation equal to %d / %d = %d ",number1,number2,number1 / number2);
        break;
    }
    return 0;
}
