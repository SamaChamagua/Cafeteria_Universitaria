#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void realizarPedido(string pedido[], float precios[], int cantidades [],int &cantidad, float &total);
void SalirPedido(string pedido[], float precios[],int &cantidad, float &total);
void guardarPedido(string pedido[], float precios[], int cantidades[], int &cantidad, float &total);

int main()
{
    string pedido[100];
    float precios[100];
    int cantidades [100];
    int cantidad = 0;
    float total = 0;
    int opc;

    do
    {
        ifstream archivo("Txt carpeta/menu.txt");
        string linea;

        if (archivo.is_open()) {

            cout << "\n Inicio: \n";

            while (getline(archivo, linea)) {
                cout << linea << endl;
            }

            archivo.close();
        }
        else {
            cout << "Error al abrir el archivo.\n";
        }
        cin >> opc;

        while (opc < 1 || opc > 3) {
            cout << "\nOpcion invalida. Intente de nuevo.\n";
            cout << "Seleccione una opcion: ";
            cin >> opc;
        }

        switch(opc) {
        case 1:
            realizarPedido(pedido, precios, cantidades, cantidad, total);
            break;

        case 2:
            SalirPedido(pedido, precios, cantidad, total);
            break;

        case 3:
            guardarPedido(pedido, precios, cantidades, cantidad, total);
            break;
        }

    } while(opc != 3);

    return 0;
}