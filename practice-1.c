#include <stdio.h>
int main()
{
    int arr[40000];
    int items;
    scanf("%d", &items);
    for (int x = items - 1; x >= 0; x--)
    {
        int j;
        scanf("%d", &j);
        arr[x] = j;
    }
    for (int y = 0; y < items; y++)
    {
        printf("%d\n", arr[y]);
    }
}