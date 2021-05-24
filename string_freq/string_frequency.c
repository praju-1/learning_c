//C Program to Find the Frequency of Characters in a String
#include <stdio.h>
int main() 
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    // reading all chracter from string
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Iterate through chracters of string
    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    printf("\n");
    return 0;
}
