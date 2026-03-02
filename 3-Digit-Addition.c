#include <stdio.h>

int main()
{
    printf("Welcome To Digit Addition!\n");

    int num, first, last;

    printf("Enter Number: ");
    scanf("%d", &num);

    last = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    first = num;

    printf("Sum Of First And Last Digit = %d", first + last);

    return 0;
}