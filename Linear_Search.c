#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 45, 67, 8, 93, 21, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[] = {12, 45, 67, 8, 93, 21, 56};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target;
//     int result = -1;

//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\nEnter the number to search: ");
//     scanf("%d", &target);

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             result = i;
//             break;
//         }
//     }

//     if (result != -1) {
//         printf("Element %d found at index %d.\n", target, result);
//     } else {
//         printf("Element %d not found in the array.\n", target);
//     }

//     return 0;
// }
