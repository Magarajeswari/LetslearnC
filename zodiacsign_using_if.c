/*Program to find the zodiac sign based on the birth date using if statement*/
/*Author : Magarajeswari-30-06-2023*/
#include<stdio.h>
int main()
{
int month;
int date;
printf("Enter the birth month:");
scanf("%d",&month);
printf("Enter the birth date:");
scanf("%d",&date);
if(month==1&& date<=19||month==12&&date>=22)
{
printf("Your zodiac sign is Capricorn");
}
else if (month==1&& date>=19||month==2&&date<=17)
{
printf("Your zodiac sign is Aquarius");
}
else if (month==2&&date>=18||month==3&&date<=19)
{
printf("Your zodiac sign is Pisces");
}
else if (month==3&&date>=20||month==4&&date<=19)
{
printf("Your zodiac sign is Aries");
}
else if (month==4&&date>=20||month==5&&date<=20)
{
printf("Your zodiac sign is Taurus");
}
else if (month==5&&date>=20||month==6&&date<=20)
{
printf("Your zodiac sign is Gemini");
}
else if (month==6&&date>=20||month==7&&date<=22)
{
printf("Your zodiac sign is Cancer");
}
else if (month==7&&date>=23||month==8&&date<=22)
{
printf("Your zodiac sign is Leo");
}
else if (month==8&&date>=23||month==9&&date<=22)
{
printf("Your zodiac sign is Virgo");
}
else if (month==9&&date>=23||month==10&&date<=22)
{
printf("Your zodiac sign is Libra");
}
else if (month==10&&date>=23||month==11&&date<=21)
{
printf("Your zodiac sign is Scorpio");
}
else if (month==11&&date>=22||month==12&&date<=21)
{
printf("Your zodiac sign is Saggitarius");
}else
printf("Sorry dumbo , you have entered your date/month of birth wrong");
return 0;
}
