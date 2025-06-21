#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    // Цикл for
    for (int i = 0; i < 10; i++) { // Переменная i, пока меньше 10, увеличивается на 1
        cout << "1. El: " << i << endl; // Выводит значение переменной i
    }

    // Цикл while
    int j = 0;
    while (j < 10) {
        cout << "2. El: " << j << endl;
        j++;
    }

    // Цикл do-while (выполняется хотя бы один раз)
    int k = 0;
    do {
        cout << "3. El: " << k << endl; // Выводит значение переменной k
        k++;
    } while (k < 10); // Условие проверяется после выполнения тела цикла

    return 0;
}
