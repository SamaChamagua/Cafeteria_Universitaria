#ifndef pedidos_H    
#define pedidos_H

#include <string>
using namespace std;

void realizarPedido(string pedido[], float precios[], int &cantidad, float &total);

#endif 

#ifndef guardar_H    
#define guardar_H

#include <string>
using namespace std;

void guardarPedido(string pedido[], float precios[], int cantidades[], int &cantidad, float &total);

#endif 

#ifndef Cancelar_H
#define Cancelar_H

#include <string>
using namespace std;

void cancelarPedido (string pedido[], float precios[],  int &cantidad, float &total);

#endif
