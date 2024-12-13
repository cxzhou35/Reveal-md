#include <stdio.h>
#define MAX 10

int main()
{
    int a[MAX] = {10, 2, 5, 3, 6, 8, 1, 4, 9, 7};

    int i, j, temp;

    printf("Before sorting: \n");
    for (i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // bubble sort
    for (i = 0; i < MAX - 1; i++) {
        for (j = 0; j < MAX - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // swap a[j] and a[j+1]
                temp     = a[j];
                a[j]     = a[j + 1];
                a[j + 1] = temp;
                // temp     = a[j];
                // a[j]     = a[j + 1];
                // a[j + 1] = temp;
            }
        }
    }

    printf("After sorting: \n");
    for (i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
}
