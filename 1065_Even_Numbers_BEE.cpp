#include<iostream>
using namespace std;
int main()
{
    int Num[5];
    int i, count_no = 0;
    for(i=0; i<5; i++)
    {
        cin >> Num[i];
        if(Num[i]%2 == 0)
        {
            count_no++;
        }
    }
    cout << count_no << " valores pares" << endl;
    return 0;
}
