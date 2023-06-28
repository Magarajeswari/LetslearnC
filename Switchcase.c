/*Author : R.Magarajeswari*/
/*Date :26-06-2023*/
/*Problem : Program to write a thank you note using function call*/

#include<stdio.h>
void meet();
void friendship();
void date();
void thanks();
int main()
{
printf("This program is to tell you a secret\n");
meet();
friendship();
date();
thanks();
return 0;
}
void meet()
{
    printf("I met a new guy on 8th September,2021 wearing a grey hoodie in 6th block,koramangala\n");
}
void friendship()
{
    printf("I was struggling to do kitting and arranging the inventory. He saw my tired face and told ,come let's go get a coffee\n");
    printf("That's how he changed from a boss to a friend\n");
}
void date()
{
    printf("On February 28,2022 I got a job offer from Mahindra and called him for his suggestion. \nWe went for a want for a walk to discuss and we talk about a lot of stuff.\n");
    printf("When the topic came to relationships , he asked will you come out for date with me?,\nunaware of the fact that he has already taken her out on a perfect date\n");
    printf("What more can she expect than a perfect dinner and a long walk?\n");
    printf("And that's how she had her first date:):):)\n");
}
void thanks()
{

printf("This is just to thank you for making me excited and happy\n");
printf("And also for wearing the t-shirt today(**)\n");
printf("And for giving your book:)\n");
}
