// C Program to Store and display Information of Students Using Structure
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() 
{
    int i, n;
    printf(" How many students information you want to store ? ");
    scanf("%d", &n);
    printf("\nEnter information of students:\n");

    // storing information
    for (i = 0; i < n; ++i) 
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n Displaying Information:\n");

    // displaying information
    for (i = 0; i < n; ++i) 
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
