#include <iostream>
#include "pedidos.h"
 
using namespace std;

float FCategoria(string pedido[], float precio[], int cantidad, float total){ 

    char categoria;
    int CatSnacks, CatBebidas, CatComida;

    cout <<"Seleccione categoria:\n"<<"a)Snacks\n"<<"b)Bebidas\n"<<"c)Comida\n";
    cin>>categoria;

    switch(categoria){
    case 'a':
    case 'A':

        cout<<"Snacks:\n";
        cout<<"1.Papa Lays $0.65\n";
        cout<<"2.Galleta Oreo $0.50\n";
        cout<<"3.Galleta trigo $0.50\n";
        cout<<"4.Cheetos $0.75\n";
        cout<<"5.Nachos $0.25\n";
        cin>>CatSnacks;

        if (CatSnacks == 1){
            pedido[cantidad]="Papa Lays";
            precio[cantidad]=0.65;
            total= total + 0.65;
            cantidad++;
        }
        else if (CatSnacks == 2){
            pedido[cantidad]="Galleta Oreo";
            precio[cantidad]=0.50;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatSnacks == 3){
            pedido[cantidad]="Galleta trigo";
            precio[cantidad]=0.50;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatSnacks == 4){
            pedido[cantidad]="Cheetos";
            precio[cantidad]=0.75;
            total= total + 0.75;
            cantidad++;
        }
        else if (CatSnacks == 5){
            pedido[cantidad]="Nachos";
            precio[cantidad]=0.25;
            total= total + 0.25;
            cantidad++;
        }

        else{
            cout<<"Opcion no valida\n";
        }
 
        break;

        case 'b':
        case 'B':

        cout<<"Bebidas:\n";
        cout<<"1.Agua $0.50\n";
        cout<<"2.Jugo $0.75\n";
        cout<<"3.Refresco $0.85\n";
        cout<<"4.Cafe $1.00\n";
        cout<<"5.Te $0.75\n";
        cin>>CatBebidas;

        if (CatBebidas == 1){
            pedido[cantidad]="Agua";
            precio[cantidad]=0.50;
            total= total + 0.50;
            cantidad++;
        }
        else if (CatBebidas == 2){
            pedido[cantidad]="Jugo";
            precio[cantidad]=0.75;
            total= total + 0.75;
            cantidad++;
        }
        else if (CatBebidas == 3){
            pedido[cantidad]="Refresco";
            precio[cantidad]=0.85;
            total= total + 0.85;
            cantidad++;
        }
        else if (CatBebidas == 4){
            pedido[cantidad]="Cafe";
            precio[cantidad]=1.00;
            total= total + 1.00;
            cantidad++;
        }
        else if (CatBebidas == 5){
            pedido[cantidad]="Te";
            precio[cantidad]=0.75;
            total= total + 0.75;
            cantidad++;
        }

        else{
            cout<<"Opcion no valida\n";
        }

        break;

        case 'c':
        case 'C':

        cout<<"Comida:\n";
        cout<<"1.Croissant de pollo $2.50\n";
        cout<<"2.Sandwich $1.50\n";
        cout<<"3.Sopa de Frijoles $1.75\n";
        cout<<"4.Ensalada $1.25\n";
        cout<<"5.Tacos $2.00\n";
        cin>>CatComida;

        if (CatComida == 1){
            pedido[cantidad]="Croissant de pollo";
            precio[cantidad]=2.50;
            total= total + 2.50;
            cantidad++;
        }
        else if (CatComida == 2){
            pedido[cantidad]="Sandwich";
            precio[cantidad]=1.50;
            total= total + 1.50;
            cantidad++;
        }
        else if (CatComida == 3){
            pedido[cantidad]="Sopa de Frijoles";
            precio[cantidad]=1.75;
            total= total + 1.75;
            cantidad++;
        }
        else if (CatComida == 4){
            pedido[cantidad]="Ensalada";
            precio[cantidad]=1.25;
            total= total + 1.25;
            cantidad++;
        }
        else if (CatComida == 5){
            pedido[cantidad]="Tacos";
            precio[cantidad]=2.00;
            total= total + 2.00;
            cantidad++;
        }

        else{
            cout<<"Opcion no valida\n";
        }

        break;

        default:
        cout<<"Opcion no valida\n";
        break;
}

cout<<"Su total a pagar es: $"<<total<<"\n";


return total;
}


