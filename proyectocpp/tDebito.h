//
//  tDebito.h
//  proecto_parte1
//
//  Created by Manolo Medina on 11/28/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//

#ifndef tDebito_h
#define tDebito_h
#include <iostream>
#include "usuario.h"

using namespace std;

//Declaracion de objeto tDebito que hereda de Usuario
class tDebito:public Usuario
{
//variables de instancia del objeto
private: //acceso de clase private
    string numTarjeta;
    int mesVencimiento;
    int anioVencimiento;
    int digitosSeguridad;
    double saldoMinimo;
    
//metodos del objeto
public: //acceso de clase public
    tDebito(string = "0", int = 0, int = 0, int = 0, double = 0.0); //constructor
    void genNumTDD();
    void getNumTDD();
};

tDebito::tDebito(string n_tarjeta, int mm, int aa, int ss, double limite){
    numTarjeta = n_tarjeta;
    mesVencimiento = mm;
    anioVencimiento = aa;
    saldoMinimo = limite;
}

void tDebito::genNumTDD(){
    
    string n_tarjeta = "40" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "12" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "23" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "34" + to_string(rand()%100);
    numTarjeta = n_tarjeta;
}

void tDebito::getNumTDD(){
    cout<<"Número de T. Debito: "<<numTarjeta<<endl;
};

#endif /* tDebito_h */
