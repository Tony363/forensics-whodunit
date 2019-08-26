#include <stdio.h>

int main()
{
    char *digit_representation[] =
    {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a, b;

    scanf("%d%d", &a, &b);

    for (; a <= b; a++)
    {
        puts((a < 10) ? digit_representation[a] : ((a % 2) ? "odd" : "even"));
    }
    return 0;
}