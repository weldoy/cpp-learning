#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    if (cin.fail()) {
        cout << "Ошибка ввода. Пожалуйста, введите числа." << endl;
        return 1;
    } else {
        char math;
        float res;
        cout << "Введите математическую операцию (+, -, *, /): ";
        cin >> math;
        
        switch (math) {
            case '+':
                res = num1 + num2; break;
            case '-':
                res = num1 - num2; break;
            case '*':
                res = num1 * num2; break;
            case '/':
                if (num2 != 0) {
                    res = num1 / num2;
                } else {
                    cout << "Ошибка: деление на ноль." << endl;
                } 
                break;
            default:
                cout << "Ошибка: неизвестная операция." << endl; break;

        }
        cout << "Результат: " << res << endl;
        
        }

    return 0;
}
