#include <stdio.h>
int main()
{
    int numbers, target, arr[105], total = 0;
    scanf("%d", &numbers);
    scanf("%d", &target);
    for (int i = 0; i < numbers; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < numbers; j++)
    {
        if ((arr[j] >= arr[target - 1]) && (arr[j] > 0))
        {
            total++;
        }
    }
    printf("%d", total);
}