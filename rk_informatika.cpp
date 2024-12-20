#include <iostream>
#include <bitset>
#include <string>
//Иванцова Арина ИУ1-12Б

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string A = "101101";
    string B = "110011";

    int A_decimal = stoi(A, nullptr, 2);
    int B_decimal = stoi(B, nullptr, 2);

    int and_result = A_decimal & B_decimal;

    int sum_result = A_decimal + B_decimal;

    cout << "Побитовая операция AND: " << bitset<6>(and_result) << endl;
    cout << "Сложение чисел A и B: " << bitset<8>(sum_result) << endl;

    return 0;
}

