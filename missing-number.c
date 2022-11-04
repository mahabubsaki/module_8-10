#include <stdio.h>
int main()
{
    long long int arr[300001];
    long long int i, input, x;
    scanf("%lld", &input);
    for (i = 0; i < input - 1; i++)
    {
        long long int j = 0;
        scanf("%lld", &j);
        arr[j - 1] = j;
    }
    for (x = 0; x < input; x++)
    {
        if (arr[x] == 0)
        {
            printf("%lld", x + 1);
            break;
        }
    }
}