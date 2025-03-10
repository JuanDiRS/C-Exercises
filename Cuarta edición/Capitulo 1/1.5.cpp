/*
- Declare las variables c, EstaEsUnaVariable, q78354, numero para que sean enteros.
- Indique que se introduzca un digito seguido de : seguido de un espacio y deje el cursor ubicado aqui.
- Lea un entero del usuario y almacenelo en la variable edad.
- Si la variable edad no es igual a 7 despliegue El numero de la variable no es igual a 7.
- Despliegue en una linea el mensaje Este es un programa en C++.
- Despliegue en dos lineas el mensaje Este es un programa en C++.
- Despliegue el mensaje Este es un programa en C++ con cada palabra separada por espacio.
- Despliegue el mensaje Este es un programa en C++ Con cada palabra separada por tabulador.
*/
#include <iostream>
int edad;
int main()
{
    int c, EstaEsUnaVariable, q78354, numero;
    std::cout<<"Introduzca un digito: ";
    std::cin >> edad;
    if (edad != 7)
    std::cout<<"El numero de la variable no es igual a 7\n";
    std::cout<<"Este es un programa en C++\n";
    std::cout<<"Este es un\nprograma en C++\n";
    std::cout<<"Este\nes\nun\nprograma\nen\nC++\n";
    std::cout<<"Este\tes\tun\tprograma\ten\tC++\n";
}
