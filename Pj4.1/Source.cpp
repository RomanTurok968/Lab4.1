#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, N;
    double S;

    cout << "Введіть k: ";
    cin >> k;
    cout << "Введіть N: ";
    cin >> N;

    // Метод 1: використання циклу while
    S = 1.0; 
    int counter = k;
    while (counter <= N) {
        S *= (pow(counter, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(counter, 2));
        counter++;
    }
    cout << "Результат за допомогою циклу while: " << S << endl;

    // Метод 2: використання циклу do-while
    S = 1.0; // Ініціалізуємо S як 1
    counter = k; 
    do {
        S *= (pow(counter, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(counter, 2));
        counter++;
    } while (counter <= N);
    cout << "Результат за допомогою циклу do-while: " << S << endl;

    // Метод 3: використання циклу for (з інкрементом)
    S = 1.0; 
    for (int j = k; j <= N; j++) {
        S *= (pow(j, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(j, 2));
    }
    cout << "Результат за допомогою циклу for (з інкрементом): " << S << endl;

    // Метод 4: використання циклу for (з декрементом)
    S = 1.0; 
    for (int j = N; j >= k; j--) {
        S *= (pow(j, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(j, 2));
    }
    cout << "Результат за допомогою циклу for (з декрементом): " << S << endl;

    return 0;
}
