#include<iostream>
using namespace std;
int main()
{
    int Num[5];
    int i, e = 0, o = 0, p = 0, n = 0;
    for(i=0; i<5; i++)
    {
        cin >> Num[i];
        if(Num[i]%2 == 0)
        {
            e++;
        }
        if(Num[i]%2 != 0)
        {
            o++;
        }
        if(Num[i] > 0)
        {
            p++;
        }
        if(Num[i] < 0)
        {
            n++;
        }
    }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;
    return 0;
}
