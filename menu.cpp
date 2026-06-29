#include <iostream>
#include <string>
using namespace std;

void realizarPedido(string pedido[], float precios[], int &cantidad, float &total);
void cancelarPedido(string pedido[], float precios[], int &cantidad, float &total);

int main()
{
    string pedido[100];
    float precios[100];
    int cantidad = 0;
    float total = 0;
    int opc;

    do
    {
        cout << "\n== CAFETERIA UNIVERSITARIA ==\n";
        cout << "1. Realizar pedido\n";
        cout << "2. Cancelar pedido\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;

        while (opc < 1 || opc > 3) {
    cout << "\nOpcion invalida. Intente de nuevo.\n";
    cout << "Seleccione una opcion: ";
    cin >> opc; 

    switch(opc) {
    case 1:
        realizarPedido(pedido, precios, cantidad, total);
        break;

    case 2:
        cancelarPedido(pedido, precios, cantidad, total);
        break;

    case 3:
       guardarPedido(pedido, precios, cantidad, total);
        break;
}

} while(opc != 3); 

return 0;
}