#include <stdio.h>
  enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
const char* getDayName(enum Days day) ;
int main()
{


  enum Days TheDay;

  int j = 0;

  printf("Please enter the day of the week (0 to 6)\n");

/* Then, later in main: */

  scanf("%d",&j);

  TheDay = (enum Days)j;

  //how to PRINT THE VALUES stored in TheDay

  printf("%d\n", (int)TheDay);
  printf("%s", getDayName(TheDay));
//   printf("%s",TheDay);  //   isnt working

  return 0;
}
const char* getDayName(enum Days day) 
{
   switch (day) 
   {
      case Sunday: return "Sunday";
      case Monday: return "Monday";
   }
}