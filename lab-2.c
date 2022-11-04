#include <stdio.h>
int main()
{
    long long int number, steps;
    scanf("%lld", &number);
    scanf("%lld", &steps);
    while (steps > 0)
    {
        if (number % 10 == 0)
        {
            number = number / 10;
        }
        else
        {
            number--;
        }
        steps--;
    }
    printf("%lld", number);
}