#include <stdio.h>
int main()
{
    int array[200001];
    int array_items;
    scanf("%d", &array_items);
    for (int x = 0; x < array_items; x++)
    {
        scanf("%d", &array[x]);
    }
    for (int y = 0; y < array_items; y++)
    {
        int dynamic = 1;
        for (int z = 0; z < array_items; z++)
        {
            if (dynamic)
            {
                printf("%d - ", array[y]);
                dynamic--;
            }
            if (array[y] != array[z])
            {
                printf("%d ", array[z]);
            }
        }
        printf("\n");
    }
}