// C Program to Find the Size of int, float, double and char.
#include<stdio.h>
int main()
{
    int integer;
    float float_data;
    double data;
    char char_a;

    // Display the size of interger data type
    printf(" Size of integer datta type is : %d\n", sizeof(integer));
    
    // Display the size of float data type
    printf(" Size of Float data type is : %d\n", sizeof(float_data));
    
    // Display the size of Double data type
    printf(" Size of Double data type is : %ld\n", sizeof(data));

    // Display the size of char data type
    printf(" Size of char data type is : %d\n", sizeof(char_a));
    return 0;
}