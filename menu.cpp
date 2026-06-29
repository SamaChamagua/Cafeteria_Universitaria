#include <iostream>
#include <string>
using namespace std;

//   Funciones
void realizarPedido(string pedido[], float precios[], int &cantidad, float &total);
void cancelarPedido(string pedido[], float precios[], int &cantidad, float &total);
void guardarPedido(string pedido[], float precios[], int cantidad, float total);

int main()
{
    //  Declaración de variables
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

        // Validación de opción
        if (opc < 1 || opc > 3)
        {
            cout << "\nOpcion invalida. Intente de nuevo.\n";
        }
        else
        {
            //  Switch 
            switch(opc)
            {
                case 1:
                    realizarPedido(pedido, precios, cantidad, total);
                    break;

                case 2:
                    cancelarPedido(pedido, precios, cantidad, total);
                    break;

                case 3:
                    guardarPedido(pedido, precios, cantidad, total);
                    cout << "\nGracias por usar Cafeteria Universitaria :)\n";
                    break;
            }
        }

    } while(opc != 3);

    return 0;
}