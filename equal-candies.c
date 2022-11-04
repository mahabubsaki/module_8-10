#include <stdio.h>
int main()
{
    long long int testcase;
    scanf("%lld", &testcase);
    for (long long int x = 0; x < testcase; x++)
    {
        long long int size, count = 0;
        scanf("%lld", &size);
        long long int arr[size];
        for (long long int x = 0; x < size; x++)
        {
            scanf("%lld", &arr[x]);
        }
        long long int smallest = arr[0];
        for (long long int x = 1; x < size; x++)
        {
            if (arr[x] < smallest)
            {
                smallest = arr[x];
            }
        }
        for (long long int x = 0; x < size; x++)
        {
            count = count + (arr[x] - smallest);
        }
        printf("%lld", count);
        printf("\n");
    }
}