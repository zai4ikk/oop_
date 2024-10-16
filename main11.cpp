/******************************************************************************

Задача: Напишите программу, которая перегружает 
функцию multiply для целых чисел, 
чисел с плавающей запятой и строк, 
умножая строку на заданное число раз.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Перегрузка для целых чисел
int multiply(int a, int b) {
    return a * b;
}

// Перегрузка для чисел с плавающей запятой
double multiply(double a, double b) {
    return a * b;
}

// Перегрузка для строк
string multiply(string str, int n) {
    string result = "";
    for (int i = 0; i < n; i++) {
        result += str;
    }
    return result;
}

int main() {
    cout << "5 * 4 = " << multiply(5, 4) << endl;
    cout << "3.5 * 2.5 = " << multiply(3.5, 2.5) << endl;
    cout << "\"Hello\" * 3 = " << multiply("Hello", 3) << endl;
    return 0;
}
