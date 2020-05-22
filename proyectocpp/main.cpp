//
//  main.cpp
//  proecto_parte1
//  Fecha de actualización: 21/05/2020
//  Proyecto CPP: El proyecto, aún WIP, se le ha añadido la herencia, definido en las clases que se heredan de Usuario y especificado en su .h, la sobrecarga en carteraDebito.h línea 41 y la sobreescritura en el main, línea 147, los métodos de acceso a clases también están especificados en su respectiva clase.
//  Solo falta añadir las clases respectivas a tVales
//
//
//  Created by Manolo Medina on 11/14/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//  Matrícula: A01706212
//

#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include "usuario.h"
#include "tCredito.h"
#include "tDebito.h"
#include "carteraCredito.h"
#include "carteraDebito.h"

using namespace std;

void delay(long secs) {
  for(long i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}


int main() // se crean los objetos, algunos con los parametros pre-establecidos y otros con iniciales diferentes para su respectiva clase, y en efecto, sí compila
{
    //Usuario x;
    tCredito usuarioTCC;
    //tDebito z;
    carteraCredito carteraTCC;
    carteraDebito carteraTDD;
    
    int contaCC = 0;
    int contaCD = 0;
    
    //Ubicacion ubc;
    bool exit = false;
    while(exit == false){
        string Usrnombre;
        string Usrapellido;
        bool checkCredito = false;
        bool checkDebito = false;
        int Usrcuenta;
        int option;
        string tarjeta;
        double bAl;
        int i = 0;
        cout<<"-------------------------------"<<endl;
        cout<<"          Royal Bank"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Escoje una de las opciones:"<<endl;
        cout<<"(1) Registrar nuevo Cliente"<<endl;
        cout<<"(2) Visualizar datos de cliente"<<endl;
        cout<<"(3) Realizar Operaciones"<<endl;
        cout<<"(4) Visualizar listado de clientes Crédito"<<endl;
        cout<<"(5) Visualizar listado de clientes Debito"<<endl;
        cout<<"(6) Visualizar listado de clientes Debito con método modificado"<<endl;
        cout<<"(7) SALIR"<<endl;
        cin>>option;
  
        switch (option){
            case 1:
                cout<<"Por favor ingrese sus datos "<<i+1<<endl;
                cout<<"Ingrese su Nombre: ";
                cin >> Usrnombre;
                usuarioTCC.setNombre(Usrnombre);
                cout<<"Ingrese su apellido: ";
                cin>> Usrapellido;
                usuarioTCC.setApellido(Usrapellido);
                cout<<"Ingrese su PIN: ";
                cin>> Usrcuenta;
                usuarioTCC.setNumCuenta(Usrcuenta);
                cout<<"Ingrese su balance actual: ";
                cin>>bAl;
                usuarioTCC.setBalance(bAl);
                cout<<"Tarjeta de debito o crédito? C/D: ";
                cin>>tarjeta;
                if(tarjeta == "C" or tarjeta == "c"){
                    carteraTCC.credito.genNumTCC();
                    checkCredito = true;
                    
                    carteraTCC.incluirClienteCC(contaCC, Usrnombre, Usrapellido);
                    contaCC ++;  // Se incrementa para añadir el nuevo cliente al arreglo
                    
                    // carteraTCC.credito.getNombreCompleto(Usrnombre, Usrapellido);
                }
                else if(tarjeta == "D" or tarjeta == "d"){
                    carteraTDD.debito.genNumTDD();
                    checkDebito = true;
                    
                    carteraTDD.incluirClienteCD(contaCD, Usrnombre, Usrapellido, bAl);
                    contaCD ++;  // Se incrementa para añadir el nuevo cliente al arreglo
                    
                }
                else{
                    cout<<"Opción invalida, saliendo por seguridad\n";
                    return(0);
                };
                break;
            
            case 2:
                cout << "Obteniendo tus datos\n";
                delay(1);
                cout << "------->>>>>>>>>> 25%\n";
                delay(1);
                cout << "------->>>>>>>>>> 50%\n";
                delay(1);
                cout << "------->>>>>>>>>> 100%\n";
                delay(1);
                cout << "Tus datos son:\n\n";
                usuarioTCC.displayDatos();
                carteraTCC.credito.getNumTCC();
                carteraTDD.debito.getNumTDD();
                
                
                
                
               // z.genNumTDD();
               // z.getNumTDD();
                
                
                break;
                
            case 3:
                cout<<"Ingrese su PIN:\n";
                cin >> Usrcuenta;
                if(Usrcuenta == usuarioTCC.getNumCuenta()){
                    usuarioTCC.operaciones(usuarioTCC.getBalance());
                    //operaciones(x.getBalance());
                }
                else{
                    cout<< "PIN Invalido\n";
                    
                };
                break;
            case 4:
                carteraTCC.listadoClientesCC();
                break;
            case 5:
                carteraTDD.listadoClientesCD(); //método original
                break;
            case 6:
                carteraTDD.listadoClientesCD("Nombre: "); //método sobreescrito
                break;
            case 7:
                cout<<"FIN DE SESIÓN\n";
                exit = true;
        }
    }

    return 0;
};
