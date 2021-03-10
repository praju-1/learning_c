//  Program to Check Whether a Character is a Vowel or Consonant
#include<stdio.h>
int main()
{
    char c;
    int lower_case, upper_case;
    printf(" Enter the character : ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lower_case = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    upper_case = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lower_case || upper_case)
        printf(" Character %c is a vowel.\n", c);
    else
        printf(" Character %c is a consonant.\n", c);
    return 0;

}