
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251");
    const int size = 100;
    int index_plus = -1, index_minus = -1, n;
    double mass[size],box;
    
    //Ввод размера массива и обработка ошибок
    cout << "Введите размер массива: ";
    cin >> n;
    if (n > size || n<=0) { 
    cout << "Введённое значение размера массива некорректное, попробуйте ввести другое значение или поменять значение переменной size";
    return 1; 
    }

    //Ввод массива
    cout << "Введите массив :" << endl;
    for (int i = 0;i < n;i++)
    {
        cin >> mass[i];
        if (mass[i] > 0 && index_plus == -1){index_plus = i;}
        if (mass[i] < 0)index_minus = i;
    }
    
    //Проверка существования необходимых элементов
    if (index_minus == -1 || index_plus == -1)
    {
        cout << "Введенный массив не имеет параметров требуемых для выполнения задачи!";
        cout << endl;
        for (int i = 0;i < n;i++)
        {
            cout << mass[i] << " ";
        }
        return 1;
    }

    //Переворот промежутка
    int k = 0;
    if (index_minus > index_plus)
    {
        for (int i = index_plus ;i < index_plus + (fabs(index_minus - index_plus) + 1) / 2;i++)
        {
            box = mass[i];
            mass[i] = mass[index_minus - k];
            mass[index_minus - k] = box;
            k++;
        }
    }
    else {
        for (int i = index_minus;i < index_minus + (fabs(index_minus - index_plus) + 1) / 2;i++)
        {
            box = mass[i];
            mass[i] = mass[index_plus - k];
            mass[index_plus - k] = box;
            k++;
        }
    }

    //Вывод преобразованного массива
    cout <<"Масив принял вид: " << endl;
    for (int i = 0;i < n;i++)
    {
        cout << mass[i] << " ";
    }
    return 0;
}
