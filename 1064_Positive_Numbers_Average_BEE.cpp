#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num[6];
    float sum = 0.0;
    int i;
    int count_num = 0;
    for(i=0; i<6; i++)
    {
        cin >> num[i];
        if(num[i]>0)
            {
                sum = sum + num[i];
                count_num ++;
            }
    }
    float avg = sum / count_num ;
    cout << count_num << " valores positivos" << endl;
    cout << fixed;
    cout << setprecision(1) << avg << endl;
    return 0;
}
