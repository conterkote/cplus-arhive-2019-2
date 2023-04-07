#include <iostream>
#include <utility>

using namespace std;

int nt_sqr(const int& x) {
	return x * x;
}
double nt_sqr(const double& x) { // Для того, чтобы возвести в квадрат число типа дабл, нужно описать отдельную функцию для этого типа
	return x * x;
}
// Здесь на помощь к нам приходят шаблоны функции, а именно template - шаблон, typename - тип данных
template<typename T>
T t_sqr(const T& x){
	return x * x;
}
// Но что если нам нужно сделать шаблонную функцию, которая должна вернуть 2 значения разных типов данных? Тогда указываем два typename
template<typename T1, typename T2>
pair<T1, T2> operator * (const pair<T1, T2>& p1, const pair<T1, T2>& p2) {
	return { p1.first * p2.first, p1.second * p2.second };
}

int main()
{
	setlocale(0, "");
	cout << "Нешаблонная функция int: "<< nt_sqr(3) << endl;
	cout << "Нешаблонная функция double: " << nt_sqr(2.5) << endl;
	cout << "Шаблонная функция, с типом int: " << t_sqr(3) << " и  double: " << t_sqr(2.5) << endl;
	pair<int, double> p = make_pair(4, 3.5); // В паре два значения разных типов, для этого нужно создать шаблонную функцию с двумя типами (17)
	p = t_sqr(p);
	cout << p.first << " - " << p.second;
	string s;
}