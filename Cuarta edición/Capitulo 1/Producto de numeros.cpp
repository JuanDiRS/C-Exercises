//Calculo de tres enteros utilizando para este haremos uso de instrucciones using
// Este programa realiza el producto de dos numeros enteros y al calcularlos podra almacenar tres numeros enteros diferentes.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a;
    int b;
    int c;
    cout<<"introduzca dos numeros: ";
    cin>>b>>c;
    a = b*c;
    cout<<"El producto es "<<a <<endl;
    cout<<"Almacene tres numeros enteros: ";
    cin>>a>>b>>c;

    return 0;
}
