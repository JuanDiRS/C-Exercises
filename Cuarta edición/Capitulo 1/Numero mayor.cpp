 //Programa que determina el numero mas grande.
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int a, b;
    cout<<"Introduzca dos numeros: ";
    cin>>a>>b;
    if(a > b)
    cout<<a<<" Es mas grande";
    else if(a < b)
    cout<<b<<" Es mas grande";
    else
    cout<<"Son iguales";
    return 0;
}
