#include <stdio.h>
int main()
{
    int input, i, j, star = 1, space, temp = 0;
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        printf("You have to give an odd number to make isosceles triangle");
        return 0;
    }
    for (i = 1; i <= input; i++)
    {
        space = ((2 * input) - 1 - star) / 2;
        for (j = 1; j <= (2 * input) - 1; j++)
        {
            if (j <= space)
            {
                printf(" ");
            }
            else if (temp < star)
            {
                printf("*");
                temp++;
            }
            else
            {
                printf(" ");
            }
        }
        temp = 0;
        star += 2;
        printf("\n");
    }
}