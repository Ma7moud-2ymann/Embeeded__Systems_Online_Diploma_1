/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex1
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX1>>C Program to check a number is even or odd.


 ================== ====================================================================================================
 */

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the number ");
    scanf("%i",&x);
    if(x%2 ==0)
    {
        printf("the number is even");
    }
    else if(x%2!=0)
    {
        printf("the number is odd");
    }
    return 0;
}
