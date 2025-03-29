//Este programa pedira dos numeros y determinara si el primero es multiplo del segundo.
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    int a,b, cond;
    cout<<"Digite dos numeros enteros: ";
    cin>>a>>b;
    cond = a%b;
    if(b == 0)
        cout<<"No se puede dividir por cero.";
    else if(cond == 0)
        cout<<"Es multiplo";
    else
        cout<<"No es multiplo";
}
