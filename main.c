#include <stdio.h>

int main()
{
    int array[100], n, i, j, minimum, temp;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n-1; i++){

        minimum = i;

        for (j = i + 1; j < n; j++){
            if(array[j] < array[minimum]){
                minimum = j;
            }
        }
        if (minimum != i) {

            temp = array[i];
            array[i] = array[minimum];
            array[minimum] = temp;
        }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}