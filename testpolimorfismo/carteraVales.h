//
//  carteraVales.h
//  testpolimorfismo
//
//  Created by Manolo Medina on 6/4/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef carteraVales_h
#define carteraVales_h
#include <iostream>
#include "usuario.h"
#include "tVales.h"

using namespace std;

class carteraVales:public tVales{
private:
    int contacc = 0;
    Usuario *usrvv[10];
    
    
    
public:
    //void agrega_usuariocc();
    //void muestra_usuarioscc();
    
    
    void agrega_usuariovv(string _usr, string _ap, double _bal, int _pin){
        
        usrvv[contacc] = new tVales(_usr, _ap, _bal, _pin);
        contacc++;
        //usrcc[0]->get_fullname();
    }
    
    void muestra_usuariosvv(){
        //usrcc[0]->get_fullname();
        for (int i=0; i < contacc; i++) //Imprimimos lista de clientes
        {
            if (usrvv[i] != NULL){
                usrvv[i]->get_fullname();
            }
        }
    }
};

#endif /* carteraVales_h */
