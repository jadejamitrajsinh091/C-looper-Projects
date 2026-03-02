#include <stdio.h>

int main()
{
    printf("Welcome To Digit Counter!\n");

    int num, count = 0;

    printf("Enter any number:");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("Total number of digits = %d", count);

    return 0;
}