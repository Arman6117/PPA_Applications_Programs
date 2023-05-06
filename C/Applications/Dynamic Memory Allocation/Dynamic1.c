// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int Arr[5];        // Static memory allocation

//     int size = 0;
//     int *ptr = NULL;

//     printf("Enter the size of array\n");
//     scanf("%d",&size);

//     // Step1 : Allocate the memory
//     ptr = (int *)malloc(sizeof(int) * size);

//     // Step 2 : Use the memory (In logic building batch)

//     // Step 3 : Deallocate the memory
//     free(ptr);
    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Allocate memory dynamically
    arr = (int*) malloc(num_elements * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    // Populate array with user input
    for (int i = 0; i < num_elements; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("\nArray elements are: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
