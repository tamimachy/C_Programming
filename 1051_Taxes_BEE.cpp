#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double s;
    cin >> s;
    if(s>=0.00 && s<=2000.00)
    {
        cout << "Isento\n";
    }
    else if(s>=2000.01 && s<=3000.00)
    {
        double r = (s - 2000.00) * 0.08;
        cout << "R$ " << fixed << setprecision (2) << r << endl;
    }
    else if(s>=3000.01 && s<=4500.00)
    {
        double r = ((s - 3000.00) * 0.18) + (1000.00 * 0.08);
        cout << "R$ " << fixed << setprecision (2) << r << endl;
    }
    else if(s>4500.01)
    {
        double r = ((s - 4500.00) * 0.28) + (1500.00 * 0.18)+ (1000.00 * 0.08);
        cout << "R$ " << fixed << setprecision (2) << r << endl;
    }
    return 0;
}
