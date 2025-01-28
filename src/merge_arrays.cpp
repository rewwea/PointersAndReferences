#include "array_operations.h"

namespace array_operations {
    int* mergeArrays(int* A, int* B, int sizeA, int sizeB) {
        int* result = new int[sizeA + sizeB];
        int index = 0;
        for (int i = 0; i < sizeA; ++i) {
            result[index++] = A[i];
        }
        for (int i = 0; i < sizeB; ++i) {
            result[index++] = B[i];
        }
        return result;
    }
}