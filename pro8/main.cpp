#include <iostream>
// ingresar nombres y apellido y presentar
using namespace std;

int main()
{
    string nombres [5];
    for (int i = 0; i < 5; i ++){
    cout << "ingrese un nombre por favor" << endl;
    getline(cin,nombres[i]);
   // cout << valor<< endl;
    }

    for (int i = 0; i < 5; i ++){
        cout << nombres[i] << endl;
    }
    return 0;
}
