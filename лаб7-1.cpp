/* Recur1°.Описать рекурсивную функцию Fact(N) вещественного типа, вычисляющую значение факториала
N!= 1·2·…·N
(N > 0 — параметр целого типа).С помощью этой функции вычислить факториалы пяти данных чисел.*/

#include <iostream>

using namespace std;

float Fact(int n)
{
    if (n == 0)
        return 1;
    return Fact(n - 1) * n;
}

int main()
{
    setlocale(LC_ALL, "rus");
    for (int i = 0;i < 5;i++)
    {
        int chislo;
        cin >> chislo;
        cout << "Факториал числа " << chislo << " равен " << Fact(chislo) << endl;
    }
}

/*
6
Факториал числа 6 равен 720
4
Факториал числа 4 равен 24
7
Факториал числа 7 равен 5040
3
Факториал числа 3 равен 6
5
Факториал числа 5 равен 120
*/

