#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    int j;
    for(i=0;i<=4;i++){ 
        for(j=0; j<4-i; j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=3;i>=0;i--){ //Se cambia la condicion del for principal iniciando i en 3(se resta uno a la columna central) y ahora se resta de uno en uno para hacer la parte de abajo del rombo.
        for(j=0; j<4-i; j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
