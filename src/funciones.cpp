#include <iostream>
#include <string>
#include "../include/prueba.h"

using namespace std;

string imprimirPiramide(int altura){
    string piramide;
    //cout << "\n";
    //Simboliza las filas de las matriz
    for (int i = 1; i <= altura; i++)
    {
        //Mientras el valor de j sea menos que i, va a imprimir j-veces el *, simboliza columnas
        for (int j = 0; j < i; j++)
        {
            //cout << "*";
            piramide += "*";
        }
        //Salto de linea
        //cout << "\n";
        piramide += "\n";
    }
    return piramide;
}

#ifndef TESTING 
int main(){
    int a;
    string resultado = "";
    
    cout << "------------------------------------------------------------\n";
    cout << "Ingrese la altura del triangulo a: ";
    cin >> a;
    cout << "------------------------------------------------------------\n";
    
    cout << "Imprimiendo triangulo de altura: " << a << "\n";
    resultado = imprimirPiramide(a);
    cout << resultado;
    return 0;
}
#endif