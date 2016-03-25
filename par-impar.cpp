#include <iostream>

using namespace std;

int main()
{
    int numero, resul;
    
    cout << "Programa que te muestra si es un numero par o impar" << endl;
    cout << "Introduce un numero: ";            //Pide un numero cualquiera
    cin >> numero;                              //Y se guarda en la variable numero
    
    resul = numero % 2;                         //se determina el modulo de dos y se guarda en resul
    
    /* la intencion de determinar el modulo
       es saber si nos queda una unidad
       lo que determina que numero es un numero
       indivisible entre dos, lo que es
       impar; en cambio si no nos queda ninguna 
       unidad, se determina que es un numero 
       divisible entre dos, lo que es par */
    
    
    if(resul==1)                                    //Aqui nos sobra una unidad
    {
        cout << "El numero es impar";               //Lo que significa numero impar
    }
    else                                            //En otro caso no nos sobra ninguna unidad
    {
        cout << "El numero es par";                 //Lo que significa numero impar
    }
    
    return 0;
}
