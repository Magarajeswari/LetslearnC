/*Program to find if a given number is an deficient number or not*/
/*Author : Magarajeswari 01-07-2023*/
/*if the sum of divisor of a number is less than twice of the number then it is a deficient number*/
#include <stdio.h>
int main ()
{
  int i, num,sum=0;
  printf("Input a number (integer value):\n");
  scanf("%d", &num);
  printf("\nAll positive divisors of %d \n",num);
  for (i = 1; i <= num; i++)
  {

    if (num % i == 0)
    {

      printf("%d\n", i);
      sum=sum+i;
    }

  }
printf("The sum of divisors of the number is %d\n",sum);
if(sum<2*num)
{
    printf("The given number %d is a deficient number",num);
}else
{
    printf("The given number %d is not a deficient number",num);
}
return 0;
}
