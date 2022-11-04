#include <stdio.h>
int main()
{
    int array[200001];
    int arrayItems;
    scanf("%d", &arrayItems);
    for (int x = 0; x < arrayItems; x++)
    {
        scanf("%d", &array[x]);
    }
    for (int y = 1; y < arrayItems; y++)
    {
        int unique = array[0];
        if (array[y] != unique)
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}