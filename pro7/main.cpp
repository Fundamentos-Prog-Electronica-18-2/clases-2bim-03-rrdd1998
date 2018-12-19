
#include <iostream>
#include <sstream>

/*
*/
using namespace std;

string convertirInttoString(int v){
    // proceso para convertir un entero en cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;
}
string obtenerData(int a, int b, string nombre){

    int suma = a + b;
    string cadena = nombre +" tiene una calificación de " + convertirInttoString(suma) + "\n";
    return cadena;


         }
int main()
{

    int bimestral1[]= {19, 15, 16, 17};
    int bimestral2[] = {10 , 15 , 20 , 10};
    string nombres [] = {"Luis", "Maria", "Ana", "Jose"};

    for (int i = 0; i < 4; i++){
         string data = obtenerData(bimestral1[i], bimestral2[i], nombres[i]);
         cout << data;
    }

    return 0;
}
