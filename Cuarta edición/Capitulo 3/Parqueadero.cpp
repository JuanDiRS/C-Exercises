//Tarifa minima $2.00
//Despues de 3 horas dicional $0.50 por hora
//Tarifa maxima $12.50
#include <iostream>
#include <iomanip>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

double CalcularCargos(int hora, double costo = 2.00){
    double total = 0.00;
    
    if(hora <= 3)
        return costo;
        
    if (hora >= 24)
        return 12.50;
        
    else
    
    return CalcularCargos(hora - 1,costo + 0.50); //Se resta 1 por que ya se esta cobrando 2.00 por una hora.

}


int main(){
    
    //Vector para almacenar los resultados de cada iteraion
    vector<int> carros;
    vector<int> horas;
    vector<double> pagos;
    
    int totalHoras = 0;
    double totalCargos = 0.00;

    cout << fixed << setprecision(2);

    int hora = 0;
    
    for (int i = 1;; i++) {
        cout << "Ingrese las horas del automovil " << i << ": ";
        cin >> hora;

        double cargo = (hora > 3) ? CalcularCargos(hora) : 2.00;
        // Condion ? si es verdadera hacer esto : si no hacer esto
        
        if(hora < 0)
            break;
            
        cout<<"El cliente paga: "<<cargo<<endl;
        
        //Agregamos el resultado de la iteracion en la lista
        carros.push_back(i);
        horas.push_back(hora);
        pagos.push_back(cargo);

        totalHoras += hora;
        totalCargos += cargo;
        
    }
    
    cout << "\nVehiculo\tHoras\tCargo" << endl;
    for (size_t i = 0; i < carros.size(); i++) {
        cout << carros[i] << "\t\t" << horas[i] << "\t$" << pagos[i] << endl;
    }

    cout << "Total\t\t" << totalHoras << "\t$" << totalCargos << endl;
    return 0;
}
