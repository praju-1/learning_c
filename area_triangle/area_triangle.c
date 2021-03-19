// C program to find area of equilateral triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    int side;
    float area;
    
    printf(" Enter the length of side : ");
    scanf("%d", &side);

    area = (sqrt(3)/4) * (side * side);
    printf(" Area of euqilateral triangle is : %.2f\n", area);
    return 0;
}