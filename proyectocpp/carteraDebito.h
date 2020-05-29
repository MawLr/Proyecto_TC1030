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
public:
    carteraDebito(string, string, int, double);
    void mostrarDat();
    
};

carteraDebito::carteraDebito(string nom, string apido, int no_cuenta, double bal) : Usuario(nom, apido, no_cuenta, bal){
   
}

void carteraDebito::mostrarDat(){
    Usuario::mostrarDat();
    cout<<"PRUEBA VISUALIZACIÓN POLIMORFISMO DEBITO"<<endl;
}

#endif /* carteraDebito_h */
