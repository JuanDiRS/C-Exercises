#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void hanoi(int n, string ori, string des, string aux){
    
    if(n == 1){
        cout<<"mueve el disco 1 de "<<ori<<" a "<<des<<endl;
        return;
    }
    
    //Mueve todos los discos menos el ultimo del origen al auxiliar
    hanoi(n - 1, ori, aux, des);
  
    //Mueve el disco más grande de origen a destino
    cout <<"Mueve el disco "<<n<< " de " <<ori<< " a " <<des<< endl;
    
    //Mueve los n-1 discos de auxiliar a destino
    hanoi(n - 1, aux, des, ori);
}
int main() {
    int n;
    cout << "¿Cuántos discos hay?: ";
    cin >> n;

    cout << "\nMovimientos para resolver Torres de Hanoi con " << n << " discos:\n";
    hanoi(n, "Origen", "Destino","Auxiliar");

    return 0;
}
