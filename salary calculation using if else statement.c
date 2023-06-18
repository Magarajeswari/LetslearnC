/*Program to calculate the HRA and DA of an employee using the basic salary of that person*/
/*Author : Magarajeswari 15-06-2023*/
#include<stdio.h>
int main()
{
int basic_salary;
int DA;
int HRA;
int gross_salary;
printf("Enter the basic salary:");
scanf("%d",&basic_salary);
if(basic_salary<1500)
{
HRA=basic_salary*0.1;
DA=basic_salary*0.9;
gross_salary=basic_salary+HRA+DA;
printf("The salary of the employee is %d",gross_salary);
}
else if(basic_salary>=1500)
{
HRA=500;
DA=basic_salary*0.98;
gross_salary=basic_salary+HRA+DA;
printf("The salary of the employee is %d",gross_salary);
}
return 0;
}
