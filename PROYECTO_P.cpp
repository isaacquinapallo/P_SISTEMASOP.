#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct datos
{
    int cedula;
    string nombre;
    string apellido;
    string direccion;
    string correo;
};

struct viaje
{
    string paquete_turistico;
    string destino;
    string fecha_inicio;
    string fecha_fin;
    int num_personas;
    string tipo_alojamiento;
    string tipo_transporte;
    string actividades_extras;
    string comentarios_adicionales;
};

struct Articulo {
    int idCategoria;
    int idArticulo;
    int stock;
    string nombre;
    double precio;
};


void menu(){
	cout<<endl;
    cout<<"Sistema de Proformas de Viaje y Regalos"<<endl<<endl;
    cout<<"1. Creacion de Preforma"<<endl;
    cout<<"2. Mostrar Preforma"<<endl;
    cout<<"3. Actualizar Preforma"<<endl;
    cout<<"4. Eliminacion de Preforma"<<endl;
    cout<<"5. Salir"<<endl;
}

int main(){
    int opcion;
    datos info_cliente;
    viaje info_viaje;


    while(opcion != 5){
        menu();
        cout<<"Ingresa una opcion: ";
        cin>>opcion;
        cin.ignore(); 
        if(opcion == 1){
            cout<<"Informacion del Cliente"<<endl;
            cout<<"Ingrese la cedula: ";
            cin>>info_cliente.cedula;
            cin.ignore(); 
            cout<<"Ingrese su nombre: ";
            getline(cin,info_cliente.nombre);
            cout<<"Ingrese su apellido: ";
            getline(cin,info_cliente.apellido);
            cout<<"Ingrese su direccion: ";
            getline(cin,info_cliente.direccion);
            cout<<"Ingrese su correo electronico: ";
            getline(cin,info_cliente.correo);
            cout<<endl;
            cout<<"Tipos de Preforma"<<endl;
            cout<<"1. Performa para Viaje"<<endl;
            cout<<"2. Performa para Reglo"<<endl;
            int TipoPreforma;
            cout<<"Ingresa una opcion: ";
            cin>>TipoPreforma;
            if(TipoPreforma == 1){
	            cout<<"Informacion del Viaje"<<endl;
	            cout<<"Seleccione el paquete turistico (Luna de Miel, Paquete Aventura, Paquete Cultural, Paquete Familiar): ";
	            getline(cin, info_viaje.paquete_turistico);
	            cout<<"Destino del viaje: ";
	            getline(cin, info_viaje.destino);
	            cout<<"Fecha de inicio del viaje (dd/mm/aaaa): ";
	            getline(cin, info_viaje.fecha_inicio);
	            cout<<"Fecha de fin del viaje (dd/mm/aaaa): ";
	            getline(cin, info_viaje.fecha_fin);
	            cout<<"Numero de personas: ";
	            cin>>info_viaje.num_personas;
	            cin.ignore();
	            cout<<"Tipo de alojamiento: ";
	            getline(cin, info_viaje.tipo_alojamiento);
	            cout<<"Tipo de transporte: ";
	            getline(cin, info_viaje.tipo_transporte);
	            cout<<"Actividades extras: ";
	            getline(cin, info_viaje.actividades_extras);
	            cout<<"Comentarios adicionales: ";
	            getline(cin, info_viaje.comentarios_adicionales);
            }else if(TipoPreforma == 2){
            	cout<<"Preforma para regalo";
            	
            }else{
            	cout<<"Ingresa una opcion correcta";
            }
        }else if(opcion == 2){
            // Mostrar Preforma
        }else if(opcion == 3){
            // Actualizar Preforma
        }else if(opcion == 4){
            // Eliminar Preforma
        }else{
            cout<<"Vive";
        }
    }

    return 0;
}