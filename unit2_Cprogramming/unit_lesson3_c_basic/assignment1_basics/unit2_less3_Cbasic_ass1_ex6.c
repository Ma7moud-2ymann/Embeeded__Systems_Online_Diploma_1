/*
 ======================================================================================================================
Name        :unit2_less3_Cbasic_ass1_ex5
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX6>> Write Source Code to Swap Two Numbers


 ================== ====================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y, temp=0.0;
    printf("enter value of x:");
    scanf("%lf",&x);
    printf("enter value of y:");
    scanf("%lf",&y);
    temp=x;
    x=y;
    y=temp;
    printf(" value of x:%lf\n",x);
    printf(" value of y:%lf",y);
    return 0;
}
