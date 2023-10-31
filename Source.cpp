#include <iostream>
#include "HEADER.h"

using namespace std;

int main() {
    int arr1[] = { 3, 9, 5, 2, 8 };
    int arr2[][3] = { {1, 4, 3}, {7, 2, 6}, {8, 5, 9} };
    int arr3[][3][3] = { {{2, 5, 1}, {4, 8, 7}, {3, 6, 9}},
                       {{7, 1, 2}, {9, 6, 5}, {4, 3, 8}} };

    int max1D = findMax(arr1, sizeof(arr1) / sizeof(arr1[0]));
    int max2D = findMax(arr2, sizeof(arr2) / sizeof(arr2[0]), 3);
    int max3D = findMax(arr3, sizeof(arr3) / sizeof(arr3[0]), 3, 3);

    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int maxOfTwo = findMax(num1, num2);
    int maxOfThree = findMax(num1, num2, num3);

    cout << "Maximum value in the 1D array: " << max1D << endl;
    cout << "Maximum value in the 2D array: " << max2D << endl;
    cout << "Maximum value in the 3D array: " << max3D << endl;
    cout << "Maximum of two integers: " << maxOfTwo << endl;
    cout << "Maximum of three integers: " << maxOfThree << endl;

    return 0;
}