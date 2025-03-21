//ejercicio 1.36
//El programa recibira un numero y devolvera este numero pero con dos espacios entre cada uno de los digitos del numero.
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int a;
    cout<<"Introduzca un numero: ";
    cin>>a;
    std::string letranum = std::to_string(a);
    
    for (size_t i = 0; i < letranum.length(); i++) {
        cout << letranum[i];
        if (i < letranum.length() - 1)
            cout << "  ";
    }
}
