
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251");
    int choose;
    double x, y, func;

    cout << "Введите x = ";
    cin >> x;

    cout << "Введите y = ";
    cin >> y;

    cout << "Выберите функцию:" << endl << "1 - cos(x)" << endl << "2 - X^2" << endl << "3 - e^x" << endl;
    cin >> choose;

    switch (choose) {
    case 1:func = cos(x);break;
    case 2:func = pow(x,2) ;break;
    case 3:func = exp(x);break;
    default:cout << "Введённое число должно быть целым числом от 1-3"; return 1;
    }

    if ((x + fabs(y)) == 0)
    {
        cout << "Результат вычислений : " << pow(sin(x),2) - func << endl << "Ветвь вычислений №1 (x+|y|=0)";
    }
    else if((x + fabs(y)) < 0){
        cout << "Результат вычислений : " << pow(abs(x * y), 1 / 3) << endl << "Ветвь вычислений №2 (x+|y|<0)";
    }
    else{
        cout << "Результат вычислений : " << 3*pow(func,2) << endl << "Ветвь вычислений №3 (иначе)";
    }
    return 0;
}

