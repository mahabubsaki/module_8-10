#include <stdio.h>
int main()
{
    int height, width;
    scanf("%d%d", &height, &width);
    for (int x = 1; x <= height; x++)
    {
        for (int y = 1; y <= width; y++)
        {
            if (x == 1 || x == height)
            {
                printf("#");
            }
            else if (y == 1 || y == width)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}