/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex2
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX2>> C Program to check vowel or consonant letter.


 ================== ====================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int lower_case, upper_case;
    printf("enter your char:");
    scanf("%c",&c);

    lower_case=(c=='a' || c=='e' || c=='o' || c=='i' || c=='u');
    upper_case=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(lower_case || upper_case)
    {
        printf("vowel alphabet");

    }
    else
    {
        printf("consonant alphapet");
    }
    return 0;
}
