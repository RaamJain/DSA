// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
#include <stdio.h>

int main()
{
    int a1[100], n1, a2[100], n2, counter = 0, com_counter = 0;
    printf("Enter the number of elements in first array:");
    scanf("%d", &n1);
    printf("\n");
    printf("Enter the elements of the first array:");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the number of elements in second array:");
    printf("\n");
    scanf("%d", &n2);
    printf("Enter the elements of the second array:");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    printf("First array:");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");
    printf("Second array:");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", a2[i]);
    }
    printf("\n");

    counter += n1 + n2;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a2[i] == a1[j])
            {
                com_counter += 1;
            }
        }
    }
    // printf("%d", com_counter);
    printf("\n");
    counter -= com_counter;
    /*total no.of elements is n1+n2 for ex< 3+2=5
     common elements across both the arrays are 3
     so no. of elements in the union will be 5-3=2
    printf("\n"); */

    printf("%d", counter);

    return 0;
}