//BubleSortProgram
// AJones 11-17
#include <iostream>

int main() {
    const int SIZE = 50;
    int arr[SIZE] = {
        3, 7, 12, 19, 25, 31, 42, 56, 63, 74,
        81, 92, 105, 116, 127, 138, 149, 150, 162, 173,
        184, 195, 206, 217, 228, 239, 240, 251, 262, 273,
        284, 295, 306, 317, 328, 339, 340, 351, 362, 373,
        384, 395, 406, 417, 428, 439, 440, 451, 462, 473
    };

    std::cout << "Original array: ";
    for (int n : arr) std::cout << n << " ";
    std::cout << "\n\n";

    // Bubble sort with step-by-step printing
    for (int i = 0; i < SIZE - 1; i++) {
        std::cout << "Pass " << i + 1 << ":\n";

        for (int j = 0; j < SIZE - i - 1; j++) {
            std::cout << "  Comparing arr[" << j << "] = " << arr[j]
                      << " and arr[" << j+1 << "] = " << arr[j+1];

            if (arr[j] > arr[j + 1]) {
                std::cout << "  --> swap!";
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            std::cout << "\n    Current state: ";
            for (int n : arr) std::cout << n << " ";
            std::cout << "\n";
        }
        std::cout << "\n";
    }

    std::cout << "Final sorted array: ";
    for (int n : arr) std::cout << n << " ";
    std::cout << "\n\n";

    // Big-O notation readout
    std::cout << "---- Bubble Sort Time Complexity ----\n";
    std::cout << "Best Case:    O(n)      (already sorted)\n";
    std::cout << "Average Case: O(n^2)\n";
    std::cout << "Worst Case:   O(n^2)    (reverse order)\n";
    std::cout << "Space Complexity: O(1)   (in-place sort)\n";

    return 0;
}