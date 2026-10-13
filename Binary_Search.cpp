#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {10, 15, 23, 45, 70, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 70;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) cout << "Element found at index: " << result << "\n";
    else cout << "Element not found\n";
    return 0;
}
