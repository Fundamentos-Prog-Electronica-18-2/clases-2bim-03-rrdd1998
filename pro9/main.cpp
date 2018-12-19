#include <iostream>
#include <sstream>
using namespace std;
string convertirInttoString(int v){
    // proceso para convertir un entero en cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;
}

string obtenerPromedio(int a, int b, string nombres){
     double promedio = 0;
     promedio = (a + b) / 2;
     string cadena = "";
    if (promedio >=0 & promedio <= 11){
        cadena = "insuficiente";
    }else{
        if (promedio >= 10.1 & promedio <= 14){
            cadena =  "regular";
        }else{
    if (promedio >=14.1 & promedio <= 17){
        cadena = "bueno";

    }else {
    if (promedio >= 16.1 & promedio <=18.5){
    cadena = "muy bueno";
        }

      if (promedio >=18.6 & promedio <=20){
        cadena = "sobresaliente";

         }
     }
        }
    }
  string total = nombres + " " + "tiene una calificcion" + " " + cadena+ "\n";
    return total;
}




int main()
{

int bimestre1[] = {20, 20, 20, 20};

int bimestre2[] = {20, 18, 10, 10};

string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};

 for (int i = 0; i < 5 ; i++){
        string data = obtenerPromedio(bimestre1[i], bimestre2[i], nombres[i]);
         cout << data;
 }
 return 0;
}


