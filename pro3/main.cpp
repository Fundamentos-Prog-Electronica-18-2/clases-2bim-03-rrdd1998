
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int valores[4]; // arreglo de enteros, para 4 posiciones
    valores[0] = 20;
    valores[1] = 30;
    valores[2] = 40;
    valores[3] = 50;

    int suma = 0;
    double promedio = 0;
    int i = 0;
    while (i<4){
        suma = suma + valores[i];
          cout << valores[i] <<endl;
        i = i+ 1;

    }
    promedio = suma / 4;
    cout <<"el promedio es" << promedio <<endl;
    return 0;
}
