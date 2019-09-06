#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



struct persona{
    char nombre[20];
    int suscripcion;
    char revista[20];

};

int main() {

    struct persona P[10];
    struct persona *apuntador;
    apuntador=P;
    int opcion,identificador;
    char eliminar[20];
    for(int i=0; i<10; i++){
        P[i].nombre[0]='n';
        cout<<"Menu\n 1. Suscripcion\n 2. Baja\n 3. Salir ";
        cin>>opcion;
        switch (opcion){
            case 1:
                for (int i=0; i<10; i++) {
                    if (P[i].nombre[0]=='n'){
                        cout<<"Nombre:";
                        fflush(stdin);
                        cin.getline(P[i].nombre, 20, '\n');
                        cout<<"Tiempo de suscripcion meses: ";
                        cin>>P[i].suscripcion;
                        cout<<"Nombre de la revista: ";
                        fflush(stdin);
                        cin.getline(P[i].revista,20,'\n');
                        break;
                        }else
                        cout<<"El" <<i+1<< "esta ocupado"<<endl;


            }break;
            case 2:
            cout<<"Nombre del usuario que desea dar de baja: ";fflush(stdin);
            cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                identificador=strcmp(apuntador->nombre,eliminar);
                if (identificador!=0)
                    apuntador++;
                else{
                    P[i].nombre[0]='n';
                    cout<<"Usuario eliminado";
                    break;
                }
            }
            default:
                cout<<"sale"<<endl;
                break;
                return 0;
        }

 }

 }




