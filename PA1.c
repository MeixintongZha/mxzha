/*PA1.c -- Meixintong Zha*/

#include<stdio.h>

int daychange(int yearv)
{ 

int daydifference; /*how may to shift foward or behind for each year*/
if (yearv%400==0 || (yearv%4==0 && yearv%100!=0))
 {daydifference=2;}
else {daydifference=1;}
return daydifference;
}

int startday(int inyear)
{
 int yeargap, shift, iniday, i;
 yeargap=0; /*how may to shift foward or behind for each year*/
 iniday=0; /*2006's first day is a Sunday*/

shift=0;
if(inyear>2006)
{
for(i=2006; i<inyear; i++) 
{
  shift= shift+daychange(i);}
 return shift%7;}
else if (2006>inyear)
{
for(i=2005; i>inyear-1;i--)
{
 shift=shift+daychange(i);}
 if (shift%7==0)
 {return 0;}
else return 7-(shift%7);
}
else {return 0;}
}

void printMonthName(int inyear)
{
 int month;
 month=0;
 switch(month) {
 
   

int main()
{
 int inyear, days, first, last;
 printf("Please enter year for this calendar:\n");
 scanf("%d", &inyear);

 
printf("Start day is %d\n", startday(inyear));
}



 
