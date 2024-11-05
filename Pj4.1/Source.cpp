#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, N;
    double S;

    cout << "������ k: ";
    cin >> k;
    cout << "������ N: ";
    cin >> N;

    // ����� 1: ������������ ����� while
    S = 1.0; 
    int counter = k;
    while (counter <= N) {
        S *= (pow(counter, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(counter, 2));
        counter++;
    }
    cout << "��������� �� ��������� ����� while: " << S << endl;

    // ����� 2: ������������ ����� do-while
    S = 1.0; // ���������� S �� 1
    counter = k; 
    do {
        S *= (pow(counter, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(counter, 2));
        counter++;
    } while (counter <= N);
    cout << "��������� �� ��������� ����� do-while: " << S << endl;

    // ����� 3: ������������ ����� for (� �����������)
    S = 1.0; 
    for (int j = k; j <= N; j++) {
        S *= (pow(j, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(j, 2));
    }
    cout << "��������� �� ��������� ����� for (� �����������): " << S << endl;

    // ����� 4: ������������ ����� for (� �����������)
    S = 1.0; 
    for (int j = N; j >= k; j--) {
        S *= (pow(j, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(j, 2));
    }
    cout << "��������� �� ��������� ����� for (� �����������): " << S << endl;

    return 0;
}
