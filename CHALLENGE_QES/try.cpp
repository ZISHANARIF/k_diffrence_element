#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
  // Check if k is valid
  if (k > n) {
    k %= n;
  }

  // Reverse the first k elements of the array
  for (int i = 0; i < k; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }

  // Reverse the remaining (n - k) elements of the array
  for (int i = k; i < n; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

int main() {
  // Initialize the array
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Get the rotation factor
  int k;
  cout << "Enter the rotation factor: ";
  cin >> k;

  // Rotate the array
  rotateArray(arr, n, k);

  // Print the rotated array
  cout << "Rotated array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
