//
//  carteraDebito.h
//  proecto_parte1
//
//  Created by Manolo Medina on 11/28/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//

#ifndef carteraDebito_h
#define carteraDebito_h
#include <iostream>
#include "tDebito.h"
#include "usuario.h"


using namespace std;

class carteraDebito:public Usuario
{
private: //acceso de clase private
    string lista_clientesCD[20] = {" "}; //metodo abstracto para aplicar sobreescritura

public: //acceso de clase public
    //carteraDebito(int con = 0, string = "0", string = "1");
    void incluirClienteCD(int contaCliente, string nombre, string apellido);
    void incluirClienteCD(int contaCliente, string nombre, string apellido, double balance); //método sobrecargado
    void listadoClientesCD();
    void listadoClientesCD(string nombre); //método modificado
    tDebito debito;
};

void carteraDebito::incluirClienteCD(int contaCliente, string nombre, string apellido){
    lista_clientesCD[contaCliente] = getNombreCompleto(nombre, apellido);
    //lista_clientesCD[contaCliente] = getNombreCompleto(nombre, apellido) + "   Saldo: " + balan; //sobrecarga
    return;
}

void carteraDebito::incluirClienteCD(int contaCliente, string nombre, string apellido, double balance){
    string balan = to_string(balance);
    //lista_clientesCD[contaCliente] = getNombreCompleto(nombre, apellido);
    lista_clientesCD[contaCliente] = getNombreCompleto(nombre, apellido) + "   Saldo: " + balan; //sobrecarga
    return;
}

void carteraDebito::listadoClientesCD(){
    cout << "Listado de Clientes --> Cartera de Debito\n";
    for (int i=0; i <= 10; i++) //Imprimimos lista de clientes del 1 al 10
    {
        cout << lista_clientesCD[i] << endl;
    }
    return;
}

void carteraDebito::listadoClientesCD(string nombre){
    cout << "Listado de Clientes --> Cartera de Debito\n";
    for (int i=0; i <= 10; i++) //Imprimimos lista de clientes del 1 al 10
    {
        if (lista_clientesCD[i] != ""){
            cout << nombre << lista_clientesCD[i] << endl;
            // cout << lista_clientesCD[i] << endl;
        }
    }
    return;
}
#endif /* carteraDebito_h */
