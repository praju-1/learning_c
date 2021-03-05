// C Program to Find ASCII Value of a Character.
#include<stdio.h>
int main()
{
    char c;
    printf(" Enter the character for ASCII value : ");
    scanf("%c", &c);

    // %c display the actual character
    // %d display the interger value of that character
    printf(" ASCII value of given character is : %c = %d\n", c, c);
    return 0;
}