//
//  usuario.h
//  testpolimorfismo
//
//  Created by Manolo Medina on 6/3/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef usuario_h
#define usuario_h
#include <iostream>

using namespace std;

class Usuario{
protected:
    string nombre;
    string apellido;
    int pin;
    double balance;
    
public:
    Usuario();
    Usuario(string nom, string ap, double bal, int id);
    void virtual get_fullname();
    virtual string mostrarDat() = 0;
    virtual double mostrarBal() = 0;
    virtual void operaciones() = 0;
    virtual int getPIN() = 0;
    void setNombre(string nom){
        nombre = nom;
    }
    void setApellido(string ap){
        apellido = ap;
    }
    void setBalance(double bal){
        balance = bal;
    }
    void setPin(int id){
        pin = id;
    }
    
};

Usuario::Usuario(){
    nombre = " ";
    apellido = " ";
    balance = 0;
    pin = 0;
}

Usuario::Usuario(string nom, string ap, double bal, int id){
    nombre = nom;
    apellido = ap;
    balance = bal;
    pin = id;
}

void Usuario::get_fullname(){
        cout<<"Nombre: "<<nombre;
        cout<<"  Apellido: "<<apellido<<endl;
};
#endif /* Header_h */
