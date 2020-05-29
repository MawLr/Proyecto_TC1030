//
//  carteraCredito.h
//  proecto_parte1
//
//  Created by Manolo Medina on 11/28/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//

#ifndef carteraCredito_h
#define carteraCredito_h
#include <iostream>
#include "tCredito.h"
#include "usuario.h"


using namespace std;

class carteraCredito:public Usuario
{
private: //acceso de clase private
    //string lista_clientesCC[20] = {" "};
    
    //string lista_clientesCC[20];
    
public: //acceso de clase public
    //carteraCredito(int con = 0, string = "0", string = "1");
    //void incluirClienteCC(int contaCliente, string nombre, string apellido);
    //void listadoClientesCC();
    
    //void listaVectorCC();
    //tCredito credito;
    carteraCredito(string, string, int, double);
        void mostrarDat();
        
    };

    carteraCredito::carteraCredito(string nom, string apido, int no_cuenta, double bal) : Usuario(nom, apido, no_cuenta, bal){
       
    }

    void carteraCredito::mostrarDat(){
        Usuario::mostrarDat();
        cout<<"PRUEBA VISUALIZACIÓN POLIMORFISMO CREDITO"<<endl;
    }

    //void getNumTarjeta(){
      //  return x.getNumTarjeta();
   // }
//};

//carteraCredito::carteraCredito(string num_cliente, string lista){
    //numeroCliente = num_cliente;
    //lista_clientes[0] = lista;
//}

/*
void carteraCredito::incluirClienteCC(int contaCliente, string nombre, string apellido){
    lista_clientesCC[contaCliente] = getNombreCompleto(nombre, apellido); //método sobreescrito
    cout<<"  Nuevo Cliente incluido en cartera de Crédito: "<<lista_clientesCC[contaCliente]<<endl;
    return;
}

void carteraCredito::listadoClientesCC(){
    cout << "Listado de Clientes --> Cartera de Crédito\n";
    for (int i=0; i <= 10; i++) //Imprimimos lista de clientes del 1 al 10
    {
        if (lista_clientesCC[i] != ""){
            cout << lista_clientesCC[i] << endl;
        }
    }
    return;
}
*/



#endif /* carteraCredito_h */
