#include "Linear.h"

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

bool linSearch(const int arr[], int requiredKey, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == requiredKey)
            return true;
    }
    return false;
}

void showArr(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }

    }
    cout << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    const int arrSize = 50;
    int arr[arrSize];
    int requiredKey = 0; // искомое значение (ключ)
    int nElement = 0; // номер элемента массива
    srand(time(NULL));

    //запись случайных чисел в массив от 1 до 50
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = 1 + rand() % 50;
    }

    showArr(arr, arrSize);

    cout << "Какое число необходимо искать? ";
    cin >> requiredKey; // ввод искомого числа

    //поиск искомого числа и запись номера элемента
    nElement = linSearch(arr, requiredKey, arrSize);

    if (nElement != -1)
    {
        //если в массиве найдено искомое число - выводим индекс элемента на экран
        cout << "Значение " << requiredKey << " находится в ячейке с индексом: " << nElement << endl;
    }
    else
    {
        //если в массиве не найдено искомое число
        cout << "В массиве нет такого значения" << endl;
    }
    return 0;
}
