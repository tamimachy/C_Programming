#include<iostream>
using namespace std;
int main()
{
    int i,m;
    string A[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cin >> m;
    for(i=0; i<12; i++)
    {
        if(m == i+1)
        {
            cout << A[i] << endl;
        }
    }
    return 0;
}
