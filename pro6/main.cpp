#include <iostream>

using namespace std;

int main()
{
    int bimestral1[]= {19, 15, 16, 17};
    int bimestral2[] = {10 , 15 , 20 , 10};
    int suma = 0;
    string nombres [] = {"Luis", "Maria", "Ana", "Jose"};

    for (int i = 0; i < 4; i++){
        suma = bimestral1[i] + bimestral2[i];
        cout<< nombres[i]<< " " <<"tiene una calificacion de" << " " << suma <<endl;
    }

    return 0;
}
