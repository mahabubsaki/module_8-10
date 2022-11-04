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
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int dupli[largest + 1];
    for (int i = 0; i < size; i++)
    {
        dupli[arr[i]] = 1;
    }
    for (int i = 0; i < largest + 1; i++)
    {
        if (dupli[i] == 1)
        {
            printf("%d ", i);
        }
    }
}