#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    // Сумма элементов массива
    float arr[5];
    for (int i = 0; i < 5; i++) {
        cout << "Введите элемент массива " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "Элемент массива [" << i << "]: " << arr[i] << endl;
    }

    float sum = 0;
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout << "\nСумма элементов массива: " << sum << endl;

    return 0;
}
