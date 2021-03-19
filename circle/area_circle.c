// C program to find area and circumference of circle.

#include<stdio.h>
#define pi 3.14
int main()
{
    float radius;
    float area, circumference;

    printf(" Enter the radius of circle : ");
    // Read and store input
    scanf("%f", &radius);

    area = pi * (radius * radius);
    circumference = 2 * pi * radius;
    // Display area and circumference of circle
    printf(" Area of circle is : %.2f\n", area);
    printf(" Circumference of circle is : %.2f\n", circumference);
    return 0;
}