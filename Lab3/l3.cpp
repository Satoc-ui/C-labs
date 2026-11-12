#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double pi = acos(-1);
    system("chcp 1251");
    double a , b , k , el=1;

    cout << "Введите переменную a = ";cin >> a;
    cout << "Введите переменную b = ";cin >> b;
    cout << "Введите переменную k = ";cin >> k;
    cout << endl<<"x"<<setw(15)<<"y"<<setw(15)<<"s(x)" << endl;
    
    for (double x = a; x < b + (b - a) / 34;x += ((b - a) / 17))
    {
        double result = x * cos(pi/3);
        el = x;
        for (int n=2;n<=k;n++)
        {
            el *= x;
            result += el*cos(n*pi/3)/n;
        }
        if (x == a || x > b)cout << x << setw(20) << -log(1-x+pow(x,2))/2 << setw(15) << result << endl;
        else cout << x <<setw(15)<< -log(1 - x + pow(x, 2))/2 <<setw(15)<< result << endl;
    }

    
    return 0;
}

