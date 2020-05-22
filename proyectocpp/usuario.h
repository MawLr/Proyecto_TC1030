//
//  usuario.h
//  proecto_parte1
//
//  Created by Manolo Medina on 11/28/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//

#ifndef usuario_h
#define usuario_h

#include <iostream>
using namespace std;

class Usuario{
    
protected: //acceso de clase protected
    
    string nombre;
    string apellido;
    string num_cliente;
    int num_cuenta;
    double balance;
    
public: //acceso de clase public
    
    Usuario ();
    Usuario (string nom, string apido, int no_cuenta, double bal);
    void setNumCuenta (int no_cuenta);
    void setBalance (double bal);
    void setRetiro (double ret, double bal);
    void setDeposito (double dep, double bal);
    void setNombre(string nombre);
    void setApellido(string apellido);
    double getBalance ();
    int getNumCuenta();
    string getNombreCompleto (string nom, string apido);
    string genIdentificador(string nom, string apido);
    void displayDatos();
    void displayBalance();
    void operaciones(double bal);
    

};

Usuario::Usuario(){
    nombre = "Juan";
    apellido = "Perez";
    num_cuenta = 1337;
    balance = 0.0;
}

Usuario::Usuario(string nom, string apido, int no_cuenta, double bal){
    nombre = nom;
    apellido = apido;
    num_cuenta = no_cuenta;
    balance = bal;
}

void Usuario::setNumCuenta(int no_cuenta){
    num_cuenta = no_cuenta;
}

void Usuario::setBalance(double bal){
    balance = bal;
}

void Usuario::setRetiro(double ret, double bal){
    if (this->balance>=ret){
        this->balance -= ret;
        cout << this->balance<<endl;
        cout<<"Tu balance actual es: "<<this->balance<<endl;
    }else{
        cout<<"Balance insuficiente"<<endl;
    }
}

void Usuario::setDeposito(double dep,double bal){
    this->balance += dep;
    cout<<"Tu balance actual es: "<<this->balance<<endl;
}

double Usuario::getBalance(){
    return balance;
}

int Usuario::getNumCuenta(){
    return num_cuenta;
}

void Usuario::setNombre(string nom)
{
    nombre = nom;
}

void Usuario::setApellido(string apeido)
{
    apellido = apeido;
}

string Usuario::getNombreCompleto(string nom, string apido){
    string nom_completo, x = " ";
    apido = x + apido;
    return nom_completo = nom + apido;
}

string Usuario::genIdentificador(string nom, string apido){
    string iden = apido.substr(0,2) + nom.substr(0,2) + "01";
    return iden;
}

void Usuario::displayDatos(){
    cout<<"           Nombre: "<<nombre<<endl;
    cout<<"         Apellido: "<<apellido<<endl;
    cout<<"  Nombre Completo: "<<getNombreCompleto(nombre,apellido)<<endl;
    cout<<"    Número de PIN: "<<num_cuenta<<endl;
    cout<<"   Balance Actual: "<<balance<<endl;
    cout<<"Número de Cliente: "<<genIdentificador(nombre,apellido)<<endl;
    
}

void Usuario::displayBalance()
{
    cout<<" Balance Actual:"<<balance<<endl;
}

void Usuario::operaciones(double bal){
   // Usuario y;
   // y.setBalance(bal);
    bool exit_opt = false;
    while(exit_opt == false){
        int opt;
        double retiro;
        double deposito;
        cout << "(1) Consultar Saldo:"<<endl;
        cout << "(2) Realizar retiro:"<<endl;
        cout << "(3) Realizar deposito:"<<endl;
        cout << "(4) Regresar al menu:"<<endl;
        cin >> opt;
        switch (opt){
            case 1:
                Usuario::getBalance();
                cout << "Tu saldo es:\n";
                Usuario::displayBalance();
                break;
            case 2:
                cout << "Importe a Retirar:\n";
                cin >> retiro;
                Usuario::setRetiro(retiro, bal);
                break;
            case 3:
                cout << "Importe a Depositar:\n";
                cin >> deposito;
                Usuario::setDeposito(deposito, bal);
                break;
            case 4:
                exit_opt = true;
                break;
        }
    }
   
};
#endif /* usuario_h */
