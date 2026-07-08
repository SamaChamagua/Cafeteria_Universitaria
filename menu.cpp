#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

void realizarPedido(string pedido[], float precios[],int cantidades[], int &cantidad, float &total);
void cancelarPedido(string pedido[], float precios[], int &cantidad, float &total);

int main(){

    string pedido[100];
    float precios[100];
    int cantidades[100];
    int cantidad = 0;
    float total = 0;
    int opc;

 

    do{
        system("cls");//limpiador

        cout << "=================================\n";
        cout << "       CAFETERIA UNIVERSITARIA   \n";
        cout << "             U & COFFE           \n";
        cout << "=================================\n";;
        cout <<     "Seleccione una opcion:\n";
        cout <<     "1. Realizar pedido\n";
        cout <<     "2. Cancelar pedido\n";
        cout <<     "3. Salir\n";
        cin >> opc;
    // filtro para avanzar
    while (opc < 1 || opc > 3) {
    cout << "\nOpcion invalida. Intente de nuevo.\n";
    cout << "Seleccione una opcion: ";
    cin >> opc; 
    }
    cout << endl;

    switch(opc) {
    case 1:
        realizarPedido(pedido, precios, cantidades, cantidad, total);
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

     //crea y sobrescribe el archivo de la factura
    ofstream archivo("pedido.txt");

    archivo << "=================================\n";
    archivo << "   BE HAPPY WITH JUST *U & COFFE* \n";
    archivo << "=================================\n\n";

    archivo << "CANT   PRODUCTO           PRECIO\n";
    archivo << "---------------------------------\n";

    for(int i = 0; i < cantidad; i++)
    {
        archivo << cantidades[i] << "     " << pedido[i] << "        $" << precios[i] << "\n";
    }

    archivo << "---------------------------------\n";
    archivo << "TOTAL: $" << total << "\n";
    archivo << "=================================\n";
    

    archivo.close();




    //lo lee segun la info
 ifstream leer("pedido.txt");
 string linea;

 while(getline(leer, linea))
{
    cout << linea << endl;
}
  
 leer.close();
 cout << "Pedido guardado correctamente.\n";
 cout<<"\nGracias por usar el sistema de pedidos. Su pedido ha sido guardado :) \n";

 return 0;
}