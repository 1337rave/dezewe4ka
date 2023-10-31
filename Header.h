#include <iostream>

template <typename T>
T findMax(const T arr[], size_t size) {
    T maxVal = arr[0];
    for (size_t i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
T findMax(const T arr[][3], size_t rows, size_t cols) {
    T maxVal = arr[0][0];
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

template <typename T>
T findMax(const T arr[][3][3], size_t depth, size_t rows, size_t cols) {
    T maxVal = arr[0][0][0];
    for (size_t i = 0; i < depth; i++) {
        for (size_t j = 0; j < rows; j++) {
            for (size_t k = 0; k < cols; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

template <typename T>
T findMax(const T a, const T b) {
    return (a > b) ? a : b;
}

template <typename T>
T findMax(const T a, const T b, const T c) {
    return findMax(findMax(a, b), c);
}

// template <typename T>
