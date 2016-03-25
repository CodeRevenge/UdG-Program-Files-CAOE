#include <iostream>

using namespace std;

int main()
{
   int numero, divs=0, i;       
   
   /*La variable divs la usaremos para contar el numero
   divisores del numero*/
   
   cout << "Programa para determinar si un numero es primo" << endl;
   cout<< "Ingrese el numero: ";
   cin >> numero;
   
   numero = abs(numero); 
   
   /*Esta funcion nos permite utilizar negativos tambien,
    Convirtiendolos en su absoluto*/
   
   for(i=1;i<(numero+1);i++)
   {  
      if(numero%i==0)
      {  
         divs++;                 
         
         /*Si el numero es divisible entre i entonces 
         divs sera aumentado en 1*/
      }  
   }  
   
   if(divs!=2)   
   
   /*Si divs es diferente a dos, que es el numero de
    divisores maximos que puede tener un primo,
    se determina que no es un primo*/
    
   {  
      cout<<"No es un numero primo";  
   }
   else
   {  
      cout<<"Es un numero primo";  
   }
    
   return 0;  
}  
