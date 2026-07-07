#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "archivos.h"

using namespace std;



void realizarPedido(string pedido[], float precios[], int cantidades[], int &cantidad, float &total){ 

    char categoria;
    int CatSnacks, CatBebidas, CatComida;

      ifstream archivo("Txt carpeta/menup.txt");
        string linea;

        if (archivo.is_open()) {

            cout << "\n Menu principal seleccionado: \n";

            while (getline(archivo, linea)) {
                cout << linea << endl;
            }

            archivo.close();
        }
        else {
            cout << "Error al abrir el archivo.\n";
        }


    cin>>categoria;

    switch(categoria){

    case 'a':
    case 'A': {

        ifstream archivo("Txt carpeta/snack.txt");
        string linea;

        if (archivo.is_open()) {

            cout << "\n Menu de snacks seleccionado \n";

            while (getline(archivo, linea)) {
                cout << linea << endl;
            }

            archivo.close();
        }
        else {
            cout << "Error al abrir el archivo.\n";
        }

        cin >> CatSnacks;

        if (CatSnacks == 1){
            pedido[cantidad]="Papa Lays";
            precios[cantidad]=0.65;
            cantidades[cantidad] = 1;
            total= total + 0.65;
            cantidad++;
        }
        else if (CatSnacks == 2){
            pedido[cantidad]="Galleta Oreo";
            precios[cantidad]=0.50;
            cantidades[cantidad] = 1;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatSnacks == 3){
            pedido[cantidad]="Galleta trigo";
            precios[cantidad]=0.50;
            cantidades[cantidad] = 1;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatSnacks == 4){
            pedido[cantidad]="Cheetos";
            precios[cantidad]=0.75;
            cantidades[cantidad] = 1;
            total= total + 0.75;
            cantidad++;
        }
        else if (CatSnacks == 5){
            pedido[cantidad]="Nachos";
            precios[cantidad]=0.25;
            cantidades[cantidad] = 1;
            total= total + 0.25;
            cantidad++;
            
        }
        else{
            cout<<"Opcion no valida\n";
        }

        break;
    }

    case 'b':
    case 'B': {

        ifstream archivo("Txt carpeta/bebidas.txt");
        string linea;

        if (archivo.is_open()) {

            cout << "\n Menu de bebidas seleccionado \n";

            while (getline(archivo, linea)) {
                cout << linea << endl;
            }

            archivo.close();
        }
        else {
            cout << "Error al abrir el archivo.\n";
        }

        cin>>CatBebidas;

        if (CatBebidas == 1){
            pedido[cantidad]="Agua";
            precios[cantidad]=0.50;
            cantidades[cantidad] = 1;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatBebidas == 2){
            pedido[cantidad]="Jugo";
            precios[cantidad]=0.75;
            cantidades[cantidad] = 1;
            total= total + 0.75;
            cantidad++;
        }
        else if (CatBebidas == 3){
            pedido[cantidad]="Refresco";
            precios[cantidad]=0.85;
            cantidades[cantidad] = 1;
            total= total + 0.85;
            cantidad++;
        }
        else if (CatBebidas == 4){
            pedido[cantidad]="Cafe";
            precios[cantidad]=1.00;
            cantidades[cantidad] = 1;
            total= total + 1.00;
            cantidad++;
        }
        else if (CatBebidas == 5){
            pedido[cantidad]="Te";
            precios[cantidad]=0.75;
            cantidades[cantidad] = 1;
            total= total + 0.75;
            cantidad++;
        }
        else{
            cout<<"Opcion no valida\n";
        }

        break;
    }

    case 'c':
    case 'C': {

        ifstream archivo("Txt carpeta/comida.txt");
        string linea;

        if (archivo.is_open()) {

            cout << "\n Menu de comidas seleccionado\n";

            while (getline(archivo, linea)) {
                cout << linea << endl;
            }

            archivo.close();
        }
        else {
            cout << "Error al abrir el archivo.\n";
        }

        cin>>CatComida;

        if (CatComida == 1){
            pedido[cantidad]="Croissant de pollo";
            precios[cantidad]=2.50;
            cantidades[cantidad] = 1;
            total= total + 2.50;
            cantidad++;
        }
        else if (CatComida == 2){
            pedido[cantidad]="Sandwich";
            precios[cantidad]=1.50;
            cantidades[cantidad] = 1;
            total= total + 1.50;
            cantidad++;
        }
        else if (CatComida == 3){
            pedido[cantidad]="Sopa de Frijoles";
            precios[cantidad]=1.75;
            cantidades[cantidad] = 1;
            total= total + 1.75;
            cantidad++;
        }
        else if (CatComida == 4){
            pedido[cantidad]="Ensalada";
            precios[cantidad]=1.25;
            cantidades[cantidad] = 1;
            total= total + 1.25;
            cantidad++;
        }
        else if (CatComida == 5){
            pedido[cantidad]="Tacos";
            precios[cantidad]=2.00;
            cantidades[cantidad] = 1;
            total= total + 2.00;
            cantidad++;
        }
        else{
            cout<<"Opcion no valida\n";
        }

        break;
    }

    default:
        cout<<"Opcion no valida\n";
        break;
    }

    cout << "Total venta acumulado: $" << total << "\n";

    return;
}

void SalirPedido (string pedido[], float precios[], int &cantidad, float &total){
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

void guardarPedido(string pedido[], float precios[], int cantidades[], int &cantidad, float &total){

    ofstream archivo("Txt carpeta/pedido.txt");

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

    
 ifstream leer("Txt carpeta/pedido.txt");
 string linea;

 while(getline(leer, linea))
{
    cout << linea << endl;
}
  
 leer.close();
 cout << "Pedido guardado correctamente: \n";
    cout<<"Gracias por usar el programa de cafeteria universitaria de U & COFFE";

} 

