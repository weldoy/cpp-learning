#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    // Операторы в циклах
    for (int i = 1; i < 15; i++) {
        if (i == 10) {
            cout << "Цикл прерван на i = " << i << endl; // Выводит сообщение, когда i равно 10
            break; // Прерывает цикл, когда i равно 10
        }

        if (i % 2 == 0) {
            cout << "Пропускаем четное число: " << i << endl; // Пропускает четные числа
            continue; // Переходит к следующей итерации цикла
        }

        cout << "El: " << i << endl;
    }

    return 0;
}
