// El programa recibe cinco numeros enteros y devuelve el mayor y el menor de los cinco.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a,b,c,d,e,mayor,menor;
    cout<<"Introduzca 5 numeros enteros: ";
    cin>>a>>b>>c>>d>>e;
    mayor = a;
    menor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;

    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor;
}
