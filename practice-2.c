#include <stdio.h>
int main()
{
    int array[200001];
    int array_items;
    printf("Enter array items length : \n");
    scanf("%d", &array_items);
    for (int i = 0; i < array_items; i++)
    {
        int x;
        printf("Enter %d-th number of array : \n", i);
        scanf("%d", &x);
        array[i] = x;
    }
    int queries;
    printf("Enter number of queries : \n");
    scanf("%d", &queries);
    for (int j = 0; j < queries; j++)
    {
        int index, add;
        printf("Enter index No at %d-th query : \n", j);
        scanf("%d", &index);
        printf("Enter Addition at %d-th query : \n", j);
        scanf("%d", &add);
        array[index] = array[index] + add;
    }
    for (int k = 0; k < array_items; k++)
    {
        printf("%d\n", array[k]);
    }
}