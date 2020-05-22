//
//  tCredito.h
//  proecto_parte1
//
//  Created by Manolo Medina on 11/28/19.
//  Copyright © 2019 Manolo Medina. All rights reserved.
//

#ifndef tCredito_h
#define tCredito_h
#include <iostream>
#include "usuario.h"

using namespace std;

class tCredito:public Usuario
{
private: //acceso de clase private
    string numTarjeta;
    int mesVencimiento;
    int anioVencimiento;
    int digitosSeguridad;
    double limiteCredito;
    
public: //acceso de clase public
    tCredito(string = "0", int = 0, int = 0, int = 0, double = 0.0);
    void genNumTCC();
    void getNumTCC();
};

tCredito::tCredito(string n_tarjeta, int mm, int aa, int ss, double limite){
    numTarjeta = n_tarjeta;
    mesVencimiento = mm;
    anioVencimiento = aa;
    limiteCredito = limite;
}

void tCredito::genNumTCC(){
    
    string n_tarjeta = "501" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "41" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "62" + to_string(rand()%100);
    n_tarjeta = n_tarjeta + "73" + to_string(rand()%100);
    numTarjeta = n_tarjeta;
}

void tCredito::getNumTCC(){
    cout<<"Número de Tarjeta: "<<numTarjeta<<endl;
};

#endif /* tCredito_h */
