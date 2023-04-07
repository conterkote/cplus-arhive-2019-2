// x^2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
void two_roots()
{
    cout << "\nТ.к. D > 0, то уравнения имеет 2 корня:" << endl;
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    cout << "x1 = " << x1 << "\nx2 = " << x2;
}
void one_root()
{
    cout << "\nТ.к. D > 0, то уравнения имеет 1 корень:" << endl;
    x1 = (-b + sqrt(D)) / (2 * a);
    cout << "x1 = " << x1 << endl;
}


int main()
{
    setlocale(0, "");
    std::cout << "Введите квадратное уравнение формата ax^2 - bx - c\n";
    std::cout << "Вначале введите коэфициент a, затем b и c\n" << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    std::cout << "\n*Дискриминант*" << endl;;
    std::cout << "D = " << D << endl;
    if (D > 0)
    {
        two_roots();
    }
    else if (D < 0)
    {
        cout << "Уравнение не имеет корней, т.к D < 0";
    }
    else
    {
        one_root();
    }
}
