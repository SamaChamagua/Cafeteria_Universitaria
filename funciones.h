//Archivo Pedidos
#ifndef pedidos_H    
#define pedidos_H

#include <string>
using namespace std;

void realizarPedido(string pedido[], float precios[], int &cantidad, float &total);

#endif 
//Archivo Cancelar
#ifndef Cancelar_H
#define Cancelar_H

#include <string>
using namespace std;

void cancelarPedido (string pedido[], float precios[],  int &cantidad, float &total);

#endif