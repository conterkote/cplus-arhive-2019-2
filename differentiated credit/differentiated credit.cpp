#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float S, constS, n, k, summa = 0; // Найти сумму платежей
    setlocale(0, "");
    cout << "Сумма кредита = ";
    cin >> S;
    constS = S;
    cout << "Срок кредита (в годах) = ";
    cin >> n;
    cout << "Процентная ставка = ";
    cin >> k;
    cout << "\nСумма кредита = " << S << " т.р.\nСрок кредита = " << n << " год(-а)\nПроцентная ставка = " << k << "%" << endl;
    k = 1 + k / 100;
    for (int i = 1; i <= n; i++)
    {
        summa += (S * k) - (constS /n)*(n-i);
        S -= (constS / n);
    }
    cout << "\nИтог:\nЗа " << n << " лет, вы выплатите " << summa << " рублей" << endl;
}