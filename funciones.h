#include <iostream>
#include <string.h>
using namespace std;
typedef struct nodo{
    char *name;
    char *pass;
    struct nodo *sgt;
}Nodo;

typedef struct list{
    Nodo * cab;
    void inicializar(){
        cab=NULL;
    }
    Nodo * buscar(char n[]){
        for(Nodo*p=cab; p!=NULL; p=p->sgt){
            if(strcmp(p->name, n)==0){
                return p;
            }
        }
        return NULL;
    }
    void insertar(char n[], char pass[]){
        Nodo *p=buscar(n);
        if(p==NULL){
            Nodo *q=new Nodo;

            q->name= (char *) malloc(sizeof(char));

            q->pass= (char *) malloc(sizeof(char));
            strcpy(q->name, n);
            strcpy(q->pass, pass);
            q->sgt=cab;
            cab=q;
        }else{
            cout<<"Ya este nombre de usuario está registrado"<<endl;
        }
    }
    bool validar(char n[], char pass[]){
        Nodo *p=buscar(n);
        if(p!=NULL){
            if(strcmp(p->pass, pass)==0){
                cout<<"Campos correctos"<<endl;
                return true;    
            }
            cout<<"Contraseña incorrecta"<<endl;
            return false;           
        }
        cout<<"Este usuario no está registrado"<<endl;
        return false;
    }
    void imprimir(){
        for(Nodo * p=cab; p!=NULL; p=p->sgt){
            cout<<"User: "<<p->name<<endl<<"Pass: "<<p->pass<<endl<<endl;
        }
    }
}List;