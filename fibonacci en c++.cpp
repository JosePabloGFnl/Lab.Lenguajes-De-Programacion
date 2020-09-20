#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero,a,b,i,c;
   
         cout << "Introduzca un número: ";
         cin >> numero;
   
   cout << endl;
    cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
   a=0;
   b=1;
   cout << a << " ";
   cout << b << " ";
   for(i=3;i<=numero;i++)
   {
   	c = a + b;
       cout << c << " ";
       a = b;
       b = c;
   }
   cout << endl << endl;
    system("pause");
}

