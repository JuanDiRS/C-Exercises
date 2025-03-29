/*Este programa calcula el rendimiento por kilómetro recorrido de los vehículos.
Se deberán poner los kilómetros y los litros recorridos y este programa calcula el rendimiento en un bucle que se rompe cuando los litros introducidos sean menores a 1.
Al final se dará un promedio de todos los datos ingresados.
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    double km, res;
    double litros = 1;
    int conta = 0;
    double suma = 0;
    while(litros > 0){
        cout<<"Introduzca los litros utilizados: ";
        cin>>litros;
        if(litros <= 0)
            break;
        cout<<"Introduzca los kilometros recorridos: ";
        cin>>km;
        res = (double)km/litros;
        cout<<"Los kilometros por litro para este tanque fueron: "<<res<<endl;
        conta ++;
        suma += res;
    }
    cout<<"El promedio fue de: "<<suma/conta;
}
