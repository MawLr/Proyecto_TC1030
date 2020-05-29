//
//  carteraCreditoPol.h
//  proyectocpp
//
//  Created by Manolo Medina on 5/28/20.
//  Copyright © 2020 Luis Medina. All rights reserved.
//

#ifndef carteraCreditoPol_h
#define carteraCreditoPol_h
#include "tCredito.h"
#include "usuario.h"

using namespace std;

class carteraCreditoPol:public Usuario
{
public:
    carteraCreditoPol(string, string, int, double);
    void mostrarDat();
    
};

carteraCreditoPol::carteraCreditoPol(string nom, string apido, int no_cuenta, double bal) : Usuario(nom, apido, no_cuenta, bal){
   
}

void carteraCreditoPol::mostrarDat(){
    Usuario::mostrarDat();
    cout<<"PRUEBA VISUALIZACIÓN POLIMORFISMO"<<endl;
}


#endif /* carteraCreditoPol_h */
