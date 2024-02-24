/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex4
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX4>> C Program to check whether the integer is
                                                                            positive or negayive.


 ================== ====================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter your number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("x :%d is the positive number",x);
    }
    else if (x<0)
    {
        printf("x :%d is the negative number",x);
    }
    else
    {
        printf("x is must equal to zero  >> x=%d",x);
    }
    return 0;
}
