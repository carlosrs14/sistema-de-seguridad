#include <iostream>
#include <stdlib.h>
#include "funciones.h"

using namespace std;

int main(){
    int op;
    List l1;
    l1.inicializar();
    do{
        cout<<"Menu"<<endl;
        cout<<"1 - registrar usuario"<<endl;
        cout<<"2 - login"<<endl;
        cout<<"3 - mostrar usuarios"<<endl;
        cin>>op;

        switch (op){

            case 1:{
                char n[20], p[20];
                cout<<"Ingrese el usuario: ";
                cin>>n;
                cout<<"Ingrese la constraseña: ";
                cin>>p;
                l1.insertar(n,p);
                break;
            }
            case 2:{
                char n[20], p[20];
                cout<<"Ingrese el usuario: ";
                cin>>n;
                cout<<"Ingrese la constraseña: ";
                cin>>p;
                l1.validar(n,p);
                break;
            }
            case 3:{
                l1.imprimir();
                break;
            }
            
            default:{
                cout<<"Opcion invalida"<<endl;
                break;
            }
                
        }
        int num;
        cout<<"Ingrese un numero para continuar: ";cin>>num;
        system("clear");
    }while(op!=0);

    return 0;
}