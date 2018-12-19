#include <iostream>

using namespace std;

int main()
{
    int edades[] = {19 , 15 , 16 , 17};
    string nombres [] = {"Luis", "Maria", "Ana", "Jose"};

    int limite = (sizeof(edades)/sizeof(edades[0]));

    for (int i = 0; i < limite; i++)
    {
            cout<< nombres[i]<< " " <<"tiene una calificacion de" << " " << edades[i] <<endl;
    }

    return 0;
}

