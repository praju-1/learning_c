// C Program to Check Leap Year.
#include<stdio.h>
int main()
{
    int year;
    printf(" Enter the year : ");
    scanf("%d", &year);
    
    // leap year if perfectly visible by 400
    if ((year % 400 == 0) && (year % 4 == 0))
    {
        printf(" %d is a leap year.\n", year);
    }

    // not a leap year if visible by 100
    // but not divisible by 400
   else if (year % 100 == 0)
   {
      printf(" %d is not a leap year.\n", year);
   }
   // all other years are not leap year
   else 
   {
      printf(" %d is not a leap year.\n", year);
   }

   return 0;
}