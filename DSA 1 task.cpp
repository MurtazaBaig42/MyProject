#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void rInitArray(int *x, const int size)
{
    for (int i = 0; i < size; i++)
        x[i] = rand();
}

void printArray(int *x, const int size)
{
    for (int i = 0; i < size; i++)
        cout << x[i] << ' ';
    cout << '\n';
}

void sortArray(int *x, const int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

int main()
{
    time_t t1, t2;
    srand(time(0));
    const int size = 100;
    int x[size], i;
    time(&t1);
    rInitArray(x, size);
    cout << "Original Array:\n";
    printArray(x, size);
    sortArray(x, size);
    cout << "Sorted Array:\n";
    printArray(x, size);
    time(&t2);
    cout << "Time taken: " << difftime(t2, t1) << " seconds\n";
    return 0;
}
