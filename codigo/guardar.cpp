#include <iostream>
#include <string>
#include <fstream>
#include "guardar.h"

using namespace std;

void guardarPedido(string pedido[], float precios[], int &cantidad, float &total){
    ofstream archivo;

    archivo.open("pedido.txt");

    archivo << "CAFETERIA UNIVERSITARIA" << endl;
    archivo << "------------------------" << endl;

    for(int i = 0; i < cantidad; i++)
    {
        archivo << pedido[i] << "  $" << precios[i] << endl;
    }

    archivo << "------------------------" << endl;
    archivo << "Total a pagar: $" << total << endl;

    archivo.close();

    cout << "Pedido guardado correctamente." << endl;
}