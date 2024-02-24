/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex6
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX6>> C Program to clculate sum of natural numbers

 ================== ====================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    int i,counter;
    printf("enter your counter:");
    scanf("%d",&counter);
    for (i=0;i<=counter;i++)
    {
        sum += i;
    }
    printf("sum = %d",sum);
    return 0;
}
