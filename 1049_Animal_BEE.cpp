#include<iostream>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if(s1 == "vertebrado")
    {
        if(s2 == "ave" && s3 == "carnivoro")
            cout << "aguia" << endl;
        else if(s2 == "ave" && s3 == "onivoro")
            cout << "pomba" << endl;
        else if(s2 == "mamifero" && s3 == "onivoro")
            cout << "homem" << endl;
        else if(s2 == "mamifero" && s3 == "herbivoro")
            cout << "vaca" << endl;
    }
    if(s1 == "invertebrado")
    {
        if(s2 == "inseto" && s3 == "hematofago")
            cout << "pulga" << endl;
        else if(s2 == "inseto" && s3 == "herbivoro")
            cout << "lagarta" << endl;
        else if(s2 == "anelideo" && s3 == "hematofago")
            cout << "sanguessuga" << endl;
        else if(s2 == "anelideo" && s3 == "onivoro")
            cout << "minhoca" << endl;
    }
    return 0;

}
