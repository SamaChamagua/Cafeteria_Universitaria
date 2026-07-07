#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

void realizarPedido(string pedido[], float precios[], int &cantidad, float &total);
void cancelarPedido(string pedido[], float precios[], int &cantidad, float &total);

int main(){

    string pedido[100];
    float precios[100];
    int cantidad = 0;
    float total = 0;
    int opc;

    ofstream archivo;
    archivo.open("pedidos.txt");
    if(!archivo.is_open()){
        cout << "No se pudo crear el archivo de pedidos." << endl;
        return 1;
    }

    do{
        system("cls");

        cout << "\n== BIENVENIDO A CAFETERIA UNIVERSITARIA ==\n";
        cout << "Seleccione una opcion:\n";
        cout << "1. Realizar pedido\n";
        cout << "2. Cancelar pedido\n";
        cout << "3. Salir\n";
        cin >> opc;
    
    while (opc < 1 || opc > 3) {
    cout << "\nOpcion invalida. Intente de nuevo.\n";
    cout << "Seleccione una opcion: ";
    cin >> opc; 
    }
    cout << endl;

    switch(opc) {
    case 1:
        realizarPedido(pedido, precios, cantidad, total);
        break;

    case 2:
        cancelarPedido(pedido, precios, cantidad, total);
        break;
    case 3:
        cout << "\nGracias por usar el sistema de pedidos.\n";
        break;
    default:
        cout << "\nOpcion invalida.\n";
        break;
    }
    if (opc != 3) {
        cout << "\nPresione cualquier tecla para continuar...";
        cin.ignore();
        cin.get();
    }
    
}while (opc != 3);

total = 0;
for (int i = 0; i < cantidad; i++) {
    total += precios[i];
}
cout << "\nTotal a pagar: $" << total << endl;

archivo<<"Lista de productos:\n";
for (int i = 0; i < cantidad; i++) {
    archivo << pedido[i] << " - $" << precios[i] << endl;
}
archivo << "Total a pagar: $" << total << endl;

archivo.close();

cout<<"\nGracias por usar el sistema de pedidos. Su pedido ha sido guardado :) \n";

return 0;
}