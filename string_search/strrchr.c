/* C program for searching a string */
#include <stdio.h>
char *my_strrchr(const char *s, int c)
{
    char *isCharFind = NULL;
    //handling null pointer
    if(s != NULL)
    {
        do
        {
            if( *s == (char)c )
            {
                isCharFind=s;
            }
        }
        while(*s++);
    }
    return isCharFind;
}
int main()
{
    //string
    const char *s = "Aticleworld";
    //char want to search
    char want_search = 'l';
    //Call own created strrchr
    char *ptr = my_strrchr(s,want_search);
    if (ptr != NULL)
    {
        printf ("Last occurence of 'l' found at %d.\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
