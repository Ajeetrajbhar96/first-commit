#include <iostream>

void decrementArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] - 1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    decrementArray(arr, size);

    // Print the modified array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}