#include <iostream>

using namespace std;

int main()
{
    int numero, resul;
    
    cout << "Programa que te muestra si es un numero par o impar" << endl;
    cout << "Introduce un numero: ";
    cin >> numero;
    
    resul = numero % 2;
    
    if(resul==1)
    {
        cout << "El numero es impar";
    }
    else
    {
        cout << "El numero es par";
    }
    
    return 0;
}
