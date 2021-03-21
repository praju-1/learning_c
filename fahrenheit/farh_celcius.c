// program for printing Fahrenheit to Celcius table
#include <stdio.h>
int main()
{
    int fahr, celcius;
    int lower, upper, step;

    // Initial values
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf(" Conversion of Fahrenheit to  celcius is \n");
    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
