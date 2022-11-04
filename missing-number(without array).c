#include <stdio.h>
int main()
{
    long long int x, input_sum, loop_sum = 0, i;
    scanf("%lld", &x);
    input_sum = (x * (x + 1)) / 2;
    for (i = 1; i <= x - 1; i++)
    {
        long long int j;
        scanf("%lld", &j);
        loop_sum += j;
    }
    printf("%lld", input_sum - loop_sum);
}