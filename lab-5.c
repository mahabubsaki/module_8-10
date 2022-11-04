#include <stdio.h>
int main()
{
    long long int numbers, arr[200005], count = 0;
    scanf("%lld", &numbers);
    for (long long int x = 0; x < numbers; x++)
    {
        scanf("%lld", &arr[x]);
    }
    for (long long int z = 0; z < numbers; z++)
    {
        if (z == numbers - 1)
        {
            continue;
        }
        else if (arr[z] > arr[z + 1])
        {
            count = count + (arr[z] - arr[z + 1]);
            arr[z + 1] = arr[z + 1] + (arr[z] - arr[z + 1]);
        }
    }
    printf("%lld", count);
}