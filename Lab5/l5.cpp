#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251");

//Задание двумерного массива
    int n,m;
    cout << "Введите количество строк : ";
    cin >> n;
    cout << endl<< "Введите количество столбцов : ";
    cin >> m;
    double** mass = new double* [n];
    for (int i = 0;i < n;i++)
    {
        mass[i] = new double[m];
    }

//Ввод массива
    cout << endl << "Введите массив : " << endl;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cin >> mass[i][j];
        }
    }

//Поиск максимального и минимального элемента и их координат
    double mx = mass[0][0], mn = mass[0][0];;
    int mx_st = 0, mn_st = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (mx < mass[i][j])
            {
                mx = mass[i][j];
                mx_st = j;
            }
            if (mn > mass[i][j])
            {
                mn = mass[i][j];
                mn_st = j;
            }
        }
    }

//Перестановка столбцов в случае необходимости
    if (mn_st != mx_st)
    {
	double k;
        for (int i = 0;i < n;i++)
        {
            k = mass[i][mn_st];
            mass[i][mn_st] = mass[i][mx_st];
            mass[i][mx_st] = k;
        }
    }

//Вывод массива
    cout << "Полученный массив : " << endl;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }

//Очистка динамической памяти
    for (int i = 0;i < n;i++)
    {
        delete[]mass;
    }
    mass = nullptr;
    return 0;
}
