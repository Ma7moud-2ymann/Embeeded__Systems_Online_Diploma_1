/*
 ======================================================================================================================
Name        :unit2_less3_conditions_loops_ass2_ex3
Author      : Mahmoud Ayman
Created on	: 24-2-2024
Description : Unit 2 C-Progtamming >> Assignment 2 condition_loops>> EX3>> C Program to to find largest number
                                                                            among three numbers.


 ================== ====================================================================================================
 */

 #include <stdio.h>
 #include<stdlib.h>

 int main()
 {
     float x,y,z;
     printf("enter x: ");
     scanf("%f",&x);
     printf("enter y:");
     scanf("%f",&y);
     printf("enter z:");
     scanf("%f",&z);
     if(x>y)
     {
         if(x>z)
         {
             printf("x:%f is the largest number",x);
         }
     }
     else if (y>z)
     {
         printf("y: %f is the largest number ",y);
     }
     else
     {
         printf("z: %f is the largest number ",z);
     }

     return 0;


 }
