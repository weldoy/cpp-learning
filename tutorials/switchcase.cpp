#include <iostream>
using namespace std;

// Этот код демонстрирует использование оператора switch для выбора дня недели по его номеру.

int main() {
    setlocale(LC_ALL, "");

    int day;

    cout << "Введите номер дня недели (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Понедельник" << endl; break;
        case 2:
            cout << "Вторник" << endl; break;
        case 3:
            cout << "Среда" << endl; break;
        case 4:
            cout << "Четверг" << endl; break;
        case 5:
            cout << "Пятница" << endl; break;
        case 6:
            cout << "Суббота" << endl; break;
        case 7:
            cout << "Воскресенье" << endl; break;
        default:
            cout << "Неверный номер дня недели. Пожалуйста, введите число от 1 до 7." << endl; break;
    }

    return 0;
}
