//Este programa realiza el calculo del diametro, circunferencia y area apartir del radio.
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    int radio, diametro;
    double circun, area;
    cout<<"Introduzca el radio del circulo: ";
    cin>>radio;
    diametro = radio*2;
    circun = (double)2*M_PI*radio;
    area = (double)M_PI*pow(radio,radio);
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"La circunferencia es: "<<circun<<endl;
    cout<<"El area es: "<<area;
    return 0;
}
