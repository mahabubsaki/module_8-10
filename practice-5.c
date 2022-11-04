#include <stdio.h>
int main()
{
    int array[200001];
    int array_items, target;
    scanf("%d", &array_items);
    for (int x = 0; x < array_items; x++)
    {
        scanf("%d", &array[x]);
    }
    scanf("%d", &target);
    for (int y = 0; y < array_items; y++)
    {
        for (int z = y + 1; z < array_items; z++)
        {
            if ((array[y] + array[z]) == target)
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
}