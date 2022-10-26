#include <stdio.h>
#include <stdlib.h>
void main()
{
    int* ptr;
    int n, i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter number of elements: %d\n", n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using calloc\n");
        for (i = 0; i < n; ++i) 
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are:\n");
        for (i = 0; i < n; ++i) 
        {
            printf("%d, ", ptr[i]);
        }
    }
}