#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int arr[5] = {4, 5, 3, 20}; // Объявление массива из 4 элементов, последний элемент будет инициализирован нулем
    arr[0] = 1; // Замена первого элемента

    cout << "Элемент массива: " << arr[1] << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ' '; // Вывод всех элементов массива
    }

    return 0;
}
