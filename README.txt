//README.txt - Meixintong Zha

Direction:
To run this calendar, use control-alt-t to open the terminal and use gcc -Wall PA1.c to compile it first. Run the program with ./a.out to start.  The program will ask you which year to print. After insert the year, hit enter. The corresponding  calendar will be generated.

Summary:
The first problem I had was how to determine the starting day of each year. I looked up starting days of year 2000 to 2010.  I found that the pattern is: for each 365-day-year, the starting day increases 1 for next year; for each leap year, the starting day increases 2 for next year. So I decided to use the difference of number of day change to determine starting day. I chose 2006 as my default year, because this year's starting day is on Sunday (0) which provides mathemetical convenience.  
The second problem I had was how to leave the right amount of space for the starting day of each month and how to switch line(/n) at the end of each week. I struggled 3 hours, yet my code just doesn't function as I hope. I asked my neighbor Yixue Wang (student from CS2303@10am) to check my code's problem. She taught me to 1) use a loop for right amount of space for the starting day of each month, 2) use modulas %7 to keep the the days printing beneath corresponding colonm, 3) use switch to return each month's number of days. With these additional knowledge, I completed my code.

Loop Invariant:
line 93:
  for (j = 0; j < first; j++)
j started at Sunday; when j is smaller than the first day; j++

line 97:
  for(i = 0; i<num_days; i++)
i started at 1st; when i is smaller than the number of days in that month; i++

line 150:
  for(i=0; i < 12; i++)
i started at January; when i reaches December; i++

