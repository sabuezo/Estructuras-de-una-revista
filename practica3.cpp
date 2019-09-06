#include<iostream>
#include<stdio.h>
using namespace std;

struct direccion {
    char calle [20];
    int cp;
    char ciudad[20];

};

struct perro{
    char nombre[20];
    int edad;
    float raza;
    struct direccion dire;

};

int main(){
    struct perro P1[5];
    struct perro *apuntador;

    apuntador=&P1[0];

    for(int i=0; i<1; i++) {

        cout<<"Nombre: ";
        cin.getline(P1[i]. nombre, 20, '\n');
        cout<<"edad : ";
        cin>>P1[i].edad;
        cout<<"raza: ";
        cin>>P1[i].raza;
        cout<<"calle: ";
        fflush(stdin);
        cin.getline(P1[i].dire.calle, 20, '\n');
}
   // cout<<endl<<"nombre guardado: "<<apuntador->nombre;
    
	//cout<<endl<<"edad guardado:"<<apuntador->edad;
    //cout<<endl<<"raza guardado:"<<apuntador->raza;
    
	//cout<<endl<<"calle guardado:"<<apuntador->dire.calle;


    return 0;


}
