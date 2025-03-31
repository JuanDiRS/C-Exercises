// En este programa se introducen tres numeros y se calcula la suma, el promedio, el producto, el menor y el mayor de los tres numeros.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a,b,c, suma, producto,menor,mayor;
    double prom;
    cout<<"Introduzca 3 numeros diferentes: ";
    cin>>a>>b>>c;
    suma = a+b+c;
    prom = (double) suma/3;
    producto = a*b*c;
    if(a < b && a < c)
        menor = a;
    else if(b < c)
        menor =b;
    else
        menor = c;
    
    if (a > b && a > c)
        mayor = a;
    else if (b > c)
        mayor = b;
    else
        mayor = c;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La promedio es: "<<prom<<endl;
    cout<<"La multiplicacion es: "<<producto<<endl;
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
}
