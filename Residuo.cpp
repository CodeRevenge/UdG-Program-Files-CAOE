#include <iostream>                           //Solo requeriremos de la biblioteca "iostram"

using namespace std; 

int main()
{
    int divs = 8;                             //Este sera nuestro divisor
    int divd = 100;                           //Este nuestro dividendo
    int result, resid; 
    
    result = divd / divs;                      //Aqui realizamos la operacion de la división
    resid = 100 % 8;                          //Y aqui extraemos el residuo
    
    cout << "Resultado: " << result << endl;  //Mostramos el resultado de la división
    cout << "Residuo: " << resid;             // Y el residuo
    
    return 0;
}
