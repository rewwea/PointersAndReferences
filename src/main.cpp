#include <iostream>
#include "array_operations.h"
#include "common_operations.h"
#include "remove_operations.h"
#include "remove_negatives.h"

using namespace std;

void runTask1() {
    int A[] = {1, 2, 3};
    int B[] = {3, 4, 5};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int* merged = array_operations::mergeArrays(A, B, sizeA, sizeB);
    int mergedSize = sizeA + sizeB;
    cout << "Объединенный массив: ";
    for (int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }
    delete[] merged;
    cout << endl;
}

void runTask2() {
    int A[] = {1, 2, 3};
    int B[] = {3, 4, 5};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int* common = common_operations::findCommonElements(A, B, sizeA, sizeB);
    int commonSize = sizeA < sizeB ? sizeA : sizeB;
    cout << "Общие элементы: ";
    for (int i = 0; i < commonSize; ++i) {
        cout << common[i] << " ";
    }
    delete[] common;
    cout << endl;
}

void runTask3() {
    int C[] = {1, 2, 3, 4, 5};
    int sizeC = sizeof(C) / sizeof(C[0]);
    cout << "Удалить четные числа:\n";
    remove_operations::removeEvenOdd(C, sizeC, true);
    cout << "\nУдалить нечетные числа:\n";
    remove_operations::removeEvenOdd(C, sizeC, false);
}

void runTask4() {
    int D[] = {-1, 2, -3, 4, -5};
    int sizeD = sizeof(D) / sizeof(D[0]);
    int* cleaned = remove_operations::removeNegatives(D, sizeD);
    int cleanedSize = sizeD; // Должен быть рассчитан новый размер после удаления
    cout << "\nМассив без отрицательных чисел: ";
    for (int i = 0; i < cleanedSize; ++i) {
        cout << cleaned[i] << " ";
    }
    delete[] cleaned;
    cout << endl;
}

int main() {
    int choice;
    
    cout << "Выберите задачу для выполнения:\n";
    cout << "1. Задача 1 - Объединение двух массивов\n";
    cout << "2. Задача 2 - Нахождение общих элементов\n";
    cout << "3. Задача 3 - Удаление четных или нечетных чисел\n";
    cout << "4. Задача 4 - Удаление отрицательных чисел\n";
    cout << "Введите ваш выбор (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            runTask1();
            break;
        case 2:
            runTask2();
            break;
        case 3:
            runTask3();
            break;
        case 4:
            runTask4();
            break;
        default:
            cout << "Неверный выбор, пожалуйста, выберите между 1 и 4.\n";
            break;
    }

    return 0;
}