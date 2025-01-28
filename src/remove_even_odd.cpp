#include "remove_operations.h"
#include <iostream>

using namespace std;

namespace remove_operations {
    void removeEvenOdd(int* arr, int size, bool removeEven) {
        for (int i = 0; i < size; ++i) {
            if ((removeEven && arr[i] % 2 == 0) || (!removeEven && arr[i] % 2 != 0)) {
                cout << "Удаленный: " << arr[i] << endl;
                arr[i] = 0;
            }
        }
    }
}