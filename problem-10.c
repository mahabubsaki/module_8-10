#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0, result[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            continue;
        }
        else if (arr[i] == 2)
        {
            result[count] = arr[i];
            count++;
        }
        else
        {
            int b = 1;
            for (int j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    b = 0;
                    break;
                }
            }
            if (b)
            {
                result[count] = arr[i];
                count++;
            }
        }
    }
    printf("%d", count);
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", result[i]);
    }
}