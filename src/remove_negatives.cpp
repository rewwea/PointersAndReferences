/* Написать функцию, которая получает указатель
 на динамический массив и его размер. 
 Функция должна удалить из массива все отрицательные
 числа и вернуть указатель на новый динамический массив. */

#include <iostream>
using namespace std;

int* removeNegativeNumbers(int* arr, int size, int& newSize) {
    int positiveCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            positiveCount++;
        }
    }

    int* newArr = new int[positiveCount];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newArr[index++] = arr[i];
        }
    }

    newSize = positiveCount;
    return newArr;
}

int main() {
    int size;
    cout << "Vvedite razmer massiva: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Vvedite elementi massiva: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newSize;
    int* filteredArr = removeNegativeNumbers(arr, size, newSize);

    cout << "Novi massiv: ";
    for (int i = 0; i < newSize; i++) {
        cout << filteredArr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] filteredArr;

    return 0;
}
