//
//  usuario.h
//  testpolimorfismo
//
//  Esta clase es abstracta, aqui se definen las variables y los metodos que cada
//  tipo de cartera va a sobreescribir dependiendo sus necesidades, esta clase es
//  esencial.
//
//  Created by Manolo Medina on 6/3/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef usuario_h
#define usuario_h
#include <iostream>

using namespace std;

class Usuario{
protected:          // Se definen las variables
    string nombre;
    string apellido;
    int pin;
    double balance;
    
public:     // Se definen los metodos
    Usuario();
    Usuario(string nom, string ap, double bal, int id);
    void virtual get_fullname();    // Metodo que nos va a mostrar los datos de cada objeto
    virtual string mostrarDat() = 0;    // Metodo abstracto, sera sobreescrito
    virtual double mostrarBal() = 0;    // Metodo abstracto, sera sobreescrito
    virtual void operaciones() = 0;     // Metodo abstracto, sera sobreescrito
    virtual int getPIN() = 0;       // Metodo abstracto, sera sobreescrito
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

Usuario::Usuario(){     // Constructor por default
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

void Usuario::get_fullname(){  // Va a ser utilizado por apuntadores para mostrar datos
        cout<<"Nombre: "<<nombre;
        cout<<"  Apellido: "<<apellido<<endl;
};
#endif /* Header_h */
