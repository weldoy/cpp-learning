#include <iostream>
using namespace std; // Используем пространство имен std для упрощения кода

int main() {
    setlocale(LC_ALL, "");

    bool Happy;

    cout << "Введите значение переменной Happy (0 или 1): ";
    cin >> Happy;

    if (Happy) { // python -> if
        cout << "Вы счастливы!" << endl;
    } else if (!Happy) { // python -> elif
        cout << "Вы не счастливы." << endl;
    } else { // python -> else
        cout << "Вы не счастливы." << endl;
    }

    int a, b;

    cout << "Введите значение переменных a и b: ";
    cin >> a >> b; // Ввод значений a и b

    if (a > b && Happy) { // python -> if
        cout << "a больше b и вы счастливы!" << endl;
    } else if (a < b || Happy) { // python -> elif
        cout << "a меньше b или вы не счастливы" << endl;
    } else { // python -> else
        cout << "Иначе" << endl;
    }

    // Happy / Happy = True
    // !Happy / Happy = False

    return 0;
}
