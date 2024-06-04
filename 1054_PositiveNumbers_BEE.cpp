#include<iostream>
using namespace std;
int main()
{
    double A[6];
    int i, count=0;
    for(i=0; i<6; i++)
    {
        cin >> A[i];
        if(A[i]>0){
            count++;
        }
    }
    cout << count << " valores positivos\n";
    return 0;
}

