#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Funciones.h"


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

void realizarPedido(string pedido[], float precios[],int cantidades[], int &cantidad, float &total){ 

    char categoria;
    int CatSnacks, CatBebidas, CatComida;
    int cant;


     // CATEGORIAS PRINCIPALES
     cout <<"*===Seleccione categoria:===*\n"
         <<"a)Snacks\n"
         <<"b)Bebidas\n"
         <<"c)Comida\n";
    cin>>categoria;

    switch(categoria){
    case 'a':
    case 'A':
     //PRIMER MENU OPCIONES
        cout<<"=================================\n";
        cout<<"             ~COMIDA~            \n";
        cout<<"*================================*\n";
        cout<<"1.Papa Lays............$0.65\n";
        cout<<"2.Galleta Oreo.........$0.50\n";
        cout<<"3.Galleta trigo........$0.50\n";
        cout<<"4.Cheetos..............$0.75\n";
        cout<<"5.Nachos...............$0.25\n";
        cin>>CatSnacks;

        if (CatSnacks == 1){
            cout<<"Cuantas unidades de Papa Lays desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Papa Lays";
                precios[cantidad]=0.65;
                cantidades[cantidad] = 1;
                total= total + 0.65;
                cantidad++;
            }
        }
        else if (CatSnacks == 2){
            cout<<"Cuantas unidades de Galleta Oreo desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Galleta Oreo";
                precios[cantidad]=0.50;
                cantidades[cantidad] = 1;
                total= total + 0.50;
                cantidad++;
            }
        }
        else if (CatSnacks == 3){
            cout<<"Cuantas unidades de Galleta trigo desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Galleta trigo";
                precios[cantidad]=0.50;
                cantidades[cantidad] = 1;
                total= total + 0.50;
                cantidad++;
            }
        }
        else if (CatSnacks == 4){
            cout<<"Cuantas unidades de  desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Cheetos";
                precios[cantidad]=0.75;
                cantidades[cantidad] = 1;
                total= total + 0.75;
                cantidad++;
            }
            
        }
        else if (CatSnacks == 5){
            cout<<"Cuantas unidades de Nachos desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Nachos";
                precios[cantidad]=0.25;
                cantidades[cantidad] = 1;
                total= total + 0.25;
                cantidad++;
            }
        }

        else{
            cout<<"Opcion no valida\n";
        }
 
        break;

        case 'b':
        case 'B':
      //EMPIEZA OTRO MENU
        cout<<"=================================\n";
        cout<<"             ~BEBIDAS~            \n";
        cout<<"*================================*\n";
        cout<<"1.Agua...............$0.50\n";
        cout<<"2.Jugo ..............$0.75\n";
        cout<<"3.Refresco...........$0.85\n";
        cout<<"4.Cafe...............$1.00\n";
        cout<<"5.Te.................$0.75\n";
        cin>>CatBebidas;

        if (CatBebidas == 1){
            cout<<"Cuantas botellas de Agua desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Agua";
                precios[cantidad]=0.50;
                cantidades[cantidad] = 1;
                total= total + 0.50;
                cantidad++;
            }
        }
        else if (CatBebidas == 2){
            cout<<"Cuantas botellas de Jugo desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Jugo";
                precios[cantidad]=0.75;
                cantidades[cantidad] = 1;
                total= total + 0.75;
                cantidad++;
            }
        }
        else if (CatBebidas == 3){
            cout<<"Cuantas botellas de Refresco desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
            pedido[cantidad]="Refresco";
            precios[cantidad]=0.85;
            cantidades[cantidad] = 1;
            total= total + 0.85;
            cantidad++;}

        }
        else if (CatBebidas == 4){
            cout<<"Cuantas tazas de Cafe desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Cafe";
                precios[cantidad]=1.00;
                cantidades[cantidad] = 1;
                total= total + 1.00;
                cantidad++;
            }
        }
        else if (CatBebidas == 5){
            cout<<"Cuantas tazas de Te desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Te";
                precios[cantidad]=0.75;
                 cantidades[cantidad] = 1;
                total= total + 0.75;
                cantidad++;
            }
        }

        else{
            cout<<"Opcion no valida\n";
        }

        break;
      //EMPIEZA OTRO MENU
        case 'c':
        case 'C':

        cout<<"=================================\n";
        cout<<"             ~COMIDA~            \n";
        cout<<"*================================*\n";
        cout<<"1.Croissant de pollo ...$2.50\n";
        cout<<"2.Sandwich .............$1.50\n";
        cout<<"3.Sopa de Frijoles..... $1.75\n";
        cout<<"4.Ensalada.............$1.25\n";
        cout<<"5.Tacos ...............$2.00\n";
        cin>>CatComida;

        if (CatComida == 1){
            cout<<"Cuantas unidades de Croissant de pollo desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Croissant de pollo";
                precios[cantidad]=2.50;
                 cantidades[cantidad] = 1;
                total= total + 2.50;
                cantidad++;
            }
        }
        else if (CatComida == 2){
            cout<<"Cuantas unidades de Sandwich desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Sandwich";
                precios[cantidad]=1.50;
                cantidades[cantidad] = 1;
                total= total + 1.50;
                cantidad++;
            }
        }
        else if (CatComida == 3){
            cout<<"Cuantas unidades de Sopa de Frijoles desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Sopa de Frijoles";
                precios[cantidad]=1.75;
                cantidades[cantidad] = 1;
                total= total + 1.75;
                cantidad++;
            }
        }
        else if (CatComida == 4){
            cout<<"Cuantas unidades de Ensalada desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Ensalada";
                precios[cantidad]=1.25;
                cantidades[cantidad] = 1;
                total= total + 1.25;
                cantidad++;
            }
        }
        else if (CatComida == 5){
            cout<<"Cuantas unidades de Tacos desea comprar?\n";
            cin>>cant;
            for (int i = 0; i < cant; i++) {
                pedido[cantidad]="Tacos";
                precios[cantidad]=2.00;
                cantidades[cantidad] = 1;
                total= total + 2.00;
                cantidad++;
            }
        }

        else{
            cout<<"Opcion no valida\n";
        }

        break;

        default:
        cout<<"Opcion no valida\n";
        break;
}

cout << "Total acumulado: $" << total << "\n";

return;
}







