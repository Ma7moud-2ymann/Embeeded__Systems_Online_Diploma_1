/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex7
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX7>> C Program to find factorial of number

 ================== ====================================================================================================
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum_M=1;
    int i=1;
    printf("enter your number:");
    scanf("%d",&number);
    while(i<=number)
    {
        sum_M *= i;
        i++;
    }
    printf("factorial of number:%d is equal to :%d",number,sum_M);

    return 0;
}
