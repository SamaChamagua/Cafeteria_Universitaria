#include <iostream>
#include <string>
#include <cstdlib>
#include "cancelar.h"

using namespace std;

void cancelarPedido (string pedido[], float precios[], int &cantidad, float &total){
    system ("cls"); //Limpia la pantalla 
        if (cantidad >0){
            for(int i=0; i<cantidad; i++){
                pedido[i]="";
                precios[i]=0;
            }
        cantidad=0;
        total=0;

        cout<<"\n Pedido cancelado.\n"<<endl;
    }
    else{
        cout<<"\n No hay pedido para cancelar. \n"<<endl;
    }
}