#include <stdio.h>

int main()
{
    printf("Welcome To Alphabet Skipper!\n");

    char Alphabet = 'A';

    do
    {
        printf("%c\n", Alphabet);

        Alphabet += 4;

        if (Alphabet <= 'Z')
        {
            printf("");
        }

    } while (Alphabet < 'Z');

    return 0;
}