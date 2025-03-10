//Este programa requiere que el usuario inserte dos numeros y devolvera el resultado de la suma, resta, multiplicacion y divivion de los numeros ingresados.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a, b, suma, resta, multiplicacion;
    double division;
    cout<<"introduzca dos numeros: ";
    cin>> a >> b;
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = (double) a / b;
    cout<<"La suma es "<<suma <<endl;
    cout<<"La resta es "<<resta <<endl;
    cout<<"La multiplicacion es "<<multiplicacion <<endl;
    cout<<"La division es "<<division <<endl;
    return 0;
}
