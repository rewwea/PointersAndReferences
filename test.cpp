#include <iostream>
#include <time.h>

using namespace std;

int& f(int* a, int n)
{
    int m_index = 0;
    for (int i = 0; i < n; i++)
    {
        m_index = a[m_index] > a[i] ? m_index : i;
    }
    return a[m_index];
}

void print(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    int* n = new int(10);
    int* a = new int[*n];
    for (int i = 0; i < *n; i++)
    {
        a[i] = rand() % 100;
    }
    print(a, *n);
    f(a, *n) = 0;
    cout << endl;
    print(a, *n);

    delete n;
    delete[] a;
}