#include <iostream>
#include <string>
#include <fstream>
#include "guardar.h"

using namespace std;

void guardarPedido(string pedido[], float precios[], int cantidades[], int &cantidad, float &total){

    ofstream archivo("pedido.txt");

    archivo << "=================================\n";
    archivo << "   BE HAPPY WITH JUST *U & COFFE* \n";
    archivo << "=================================\n\n";

    archivo << "CANT  PRODUCTO            PRECIO\n";
    archivo << "---------------------------------\n";

    for(int i = 0; i < cantidad; i++)
    {
        archivo << cantidades[i] << "     "
                << pedido[i] << "        $"
                << precios[i] << "\n";
    }

    archivo << "---------------------------------\n";
    archivo << "TOTAL: $" << total << "\n";
    archivo << "=================================\n";
    archivo << "Gracias por su compra\n";

    archivo.close();

    
 ifstream leer("pedido.txt");
 string linea;

 while(getline(leer, linea))
{
    cout << linea << endl;
}
  
 leer.close();
 cout << "Pedido guardado correctamente: \n";
    cout<<"Gracias por usar el programa de cafeteria universitaria de U & COFFE";

} 


