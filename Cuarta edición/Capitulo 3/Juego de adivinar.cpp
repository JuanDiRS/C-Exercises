#include<iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main(){
    
    srand(time(0));  // Inicializar para números aleatorios
    
    string opcion;
    
        do {
        int numero = rand() % 1000 + 1;  //Numero del 1 al 1000
        int adivina;
        int intentos = 0;

        cout << "Tengo un número del 1 al 1000" << endl;
        
        while (true) {
            cout << "¿Puedes adivinar cuál es? Escribe tu opción: ";
            cin >> adivina;
            intentos++;

            if (adivina > numero) {
                cout << "Demasiado alto. Intenta de nuevo." << endl;
            } 
            else if (adivina < numero) {
                cout << "Demasiado bajo. Intenta de nuevo." << endl;
            } 
            else {
                cout << "¡Muy bien! Adivinaste en " << intentos << " intentos." << endl;
                break;  // Sale del bucle cuando adivina
            }
        }

        // Pregunta si quiere jugar de nuevo
        cout << "¿Quieres volver a jugar? (s/n): ";
        cin >> opcion;

    } while (opcion == "s" || opcion == "S"); 
    //Si el usiario escribe la S en mayuscula o minuscula, pero si se escribe cualquiero ortra cosa el bucle acaba

    cout << "Gracias por jugar." << endl;
    return 0;
}
