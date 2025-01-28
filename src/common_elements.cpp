#include "common_operations.h"

namespace common_operations {
    int* findCommonElements(int* A, int* B, int sizeA, int sizeB) {
        int* result = new int[sizeA < sizeB ? sizeA : sizeB];
        int index = 0;

        for (int i = 0; i < sizeA; ++i) {
            for (int j = 0; j < sizeB; ++j) {
                if (A[i] == B[j]) {
                    result[index++] = A[i];
                    break;
                }
            }
        }
        return result;
    }
}