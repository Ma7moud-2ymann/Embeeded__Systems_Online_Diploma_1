/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex5
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX5>> C Program to check whether the char is alphabet or not

 ================== ====================================================================================================


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter your char:");
    scanf("%c",&c);

    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("char is alphabet");
    }
    else
        printf("char is not alphabet");
}
