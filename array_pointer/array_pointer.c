//C Program to Access Array Elements Using Pointer
#include <stdio.h>
int main() 
{
    int data[5];
    // Entering data
    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        // store data
        scanf("%d", data + i);

    // Diaplaying entered data
    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
