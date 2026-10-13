#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {3, 9, 14, 21, 45, 56, 67, 88, 93};
    int size = sizeof(arr) / sizeof(arr);
    int target;
    
    printf("\nEnter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[] = {3, 9, 14, 21, 45, 56, 67, 88, 93};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target;
//     int result = -1;
    
//     printf("\nEnter the number to search: ");
//     scanf("%d", &target);

//     int low = 0;
//     int high = size - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == target) {
//             result = mid;
//             break;
//         }

//         if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     if (result != -1) {
//         printf("Element %d found at index %d.\n", target, result);
//     } else {
//         printf("Element %d not found in the array.\n", target);
//     }

//     return 0;
// }
