/******************************************************************************
Задача: Реализуйте класс Temperature, 
который может преобразовываться в целые и вещественные числа.
*******************************************************************************/
#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    Temperature(double c) : celsius(c) {}

    // Преобразование в целое число (округление)
    operator int() const {
        return static_cast<int>(celsius);
    }

    // Преобразование в число с плавающей запятой
    operator double() const {
        return celsius;
    }

    void print() const {
        cout << "Temperature: " << celsius << "C" << endl;
    }
};

int main() {
    Temperature temp(36.6);

    int tempInt = temp;
    double tempDouble = temp;

    cout << "As integer: " << tempInt << endl;
    cout << "As double: " << tempDouble << endl;

    return 0;
}
