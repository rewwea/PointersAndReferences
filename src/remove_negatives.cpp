#include "remove_operations.h"

namespace remove_operations {
    int* removeNegatives(int* arr, int size) {
        int* result = new int[size];
        int index = 0;

        for (int i = 0; i < size; ++i) {
            if (arr[i] >= 0) {
                result[index++] = arr[i];
            }
        }
        return result;
    }
}