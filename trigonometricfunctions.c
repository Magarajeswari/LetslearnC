/*Program to find the sine cos and tan of an angle given in degree*/
/*Author : Magarajeswari 12-06-2023*/
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
int angle=30;     /*In C, the default unit of any trigonometric function is in radians. So we multiply the angle by (pi/180) in line 10,13 and 16*/
float b;
b=sin(angle*(PI/180));
printf("sin of %d degree is %f\n",angle,b);
float c;
c=cos(angle*(PI/180));
printf("cos of %d degree is %f\n",angle,c);
float d;
d=tan(angle*(PI/180));
printf("tan of %d degree is %f\n",angle,d);
return 0;
}
