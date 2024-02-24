
/*
 ======================================================================================================================
 Name        : unit2_less3_Cbasic_ass1_ex4
 Author      : Mahmoud Ayman
 Created on	 : 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4 C Program to Multiply two Floating Point Numbers
 ================== ====================================================================================================
 */
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    double x ,y , product;
    printf("enter two floating number: ");
    scanf("%lf %lf",&x,&y);
    product=x*y;
    printf("product:%lf",product);
    return 0;
}
