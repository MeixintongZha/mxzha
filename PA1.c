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


int leap(int inyear)
{
  if (inyear%400==0 || (inyear%4==0 && inyear%100!=0))
  {return 1;}
  return 0;
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
 	{
  	return 0;}
  	else return 7-(shift%7);}

  	else {return 0;}
}

void printMonthName(int inyear, int month)
{
 switch(month) {
  case 0:
  printf("\n\n  January %d\n", inyear);
  break;
  case 1:
  printf("\n\n  February %d\n", inyear);
  break;
  case 2:
  printf("\n\n  March %d\n", inyear); 
  break;
  case 3:
  printf("\n\n  April %d\n", inyear);
  break;
  case 4:
  printf("\n\n  May %d\n", inyear);
  break;
  case 5:
  printf("\n\n  June %d\n", inyear);
  break;
  case 6:
  printf("\n\n  July %d\n", inyear);
  break;
  case 7:
  printf("\n\n  August %d\n", inyear);
  break;
  case 8:
  printf("\n\n  September %d\n", inyear);
  break;
  case 9:
  printf("\n\n  October %d\n", inyear);
  break;
  case 10:
  printf("\n\n  November %d\n", inyear);
  break;
  case 11:
  printf("\n\n  December %d\n", inyear);
  break;
}
}

int perMonth(int first, int num_days)
{
  int i, j, currentDay;
  for (j = 0; j < first; j++){
	printf("     ");	
  }
  currentDay=first;
  for(i = 0; i<num_days; i++) {
	    printf("%5d", i+1);
            if(currentDay == 6)
		printf("\n"); 
	    currentDay = (currentDay+1) % 7;
          }
	    return currentDay;
}
 
int printMonth(int inyear, int month)  /*return the next start*/
{ 
  
  printMonthName(inyear, month);
  printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

  switch(month) {
  case 0:        
	return 31;
  case 1: 
	if (leap(inyear))
        {return 29;}
        return 28;
  case 2:
	return 31;
  case 3:
	return 30;
  case 4:
	return 31;
  case 5:
	return 30;
  case 6:
	return 31;
  case 7:
	return 31;
  case 8:
	return 30;
  case 9:
	return 31;
  case 10:
	return 30;
  case 11:
	return 31;
}
}   
 
  
int main()
{
 int inyear, first, i;
 printf("Please enter year for this calendar:\n");
 scanf("%d", &inyear);
 printf("       ***CALENDAR for %d***  ", inyear);
 first = startday(inyear);
	for(i=0; i < 12; i++) {
		first = perMonth(first, printMonth(inyear, i));
	}
 printf("\n");
return 0;
}




 
