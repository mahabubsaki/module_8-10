#include <stdio.h>
int main()
{
    int numbers;
    int arr[101];
    scanf("%d", &numbers);
    for (int i = 0; i < numbers; i++)
    {
        int input;
        scanf("%d", &input);
        if (input % 2 == 0)
        {
            arr[i] = 100; // differing values for even
        }
        else
        {
            arr[i] = 1000; // differing values for odds
        }
    }
    for (int j = 0; j < numbers; j++)
    {
        if ((j == 0) && (arr[j] != arr[j + 1]) && (arr[j] != arr[j + 2]) && (arr[j + 1] == arr[j + 2]))
        {

            printf("%d", j + 1);
            return 0;
        }
        else if ((j == numbers) && (arr[j] != arr[j - 1]) && (arr[j] != arr[j - 2]) && (arr[j - 1] == arr[j - 2]))
        {
            printf("%d", j + 1);
            return 0;
        }
        else if ((arr[j] != arr[j + 1]) && (arr[j] != arr[j - 1]) && (j != 0) && (j != numbers))
        {
            printf("%d", j + 1);
            return 0;
        }
        else
        {
            continue;
        }
    }
}