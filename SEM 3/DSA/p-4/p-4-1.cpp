#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid; // Target found at index mid
    } else if (arr[mid] < target) {
      left = mid + 1; // Search in the right half
    } else {
      right = mid - 1; // Search in the left half
    }
  }

  return -1; // Target not found
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 10;

  int result = binarySearch(arr, size, target);

  if (result != -1) {
    printf("Element found at index %d\n", result);
  } else {
    printf("Element not found\n");
  }

  return 0;
}
