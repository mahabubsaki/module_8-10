#include <stdio.h>
int main()
{
    int size;
    int kth;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &kth);
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
    int count = 0;
    for (int i = 0; i < largest + 1; i++)
    {
        if (dupli[i] == 1)
        {
            count++;
        }
        if (count == kth)
        {
            printf("%d", i);
            return 0;
        }
    }
}