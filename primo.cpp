#include <iostream>

using namespace std;

int main()
{
   int numero, a=0, i;  
   
   cout << "Programa para determinar si un numero es primo" << endl;
   cout<< "Ingrese el numero: ";
   cin >> numero;
   
   numero = abs(numero);
   
   for(i=1;i<(numero+1);i++)
    {  
         if(numero%i==0)
        {  
             a++;  
        }  
    }  
    if(a!=2)
    {  
        cout<<"No es un numero primo";  
    }
    else
    {  
        cout<<"Es un numero primo";  
    }
    
    return 0;  
}  
