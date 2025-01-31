#include <stdio.h>

void cube(int *a, int size)
{
    int *p[size][size]; 
    int x, y;

    printf("Cubes of all elements:\n");
	for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            p[x][y] = (a + x * size + y); 
            printf("%d ", (*p[x][y]) * (*p[x][y]) * (*p[x][y]));
        }
        printf("\n");
    }

}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size][size];
    int i, j;

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube((int *)a, size); 

    return 0;
}
