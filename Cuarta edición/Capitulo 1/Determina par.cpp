//Este programa lee un numero entero y determina si es par o no.
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    cout<<"Ingrese un numero: ";
    int a;
    cin>>a;
    int par = a%2;
    if(par == 0)
    cout<<"Es par";
    else
    cout<<"No es par";
}
