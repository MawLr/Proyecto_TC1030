//
//  carteraDebito.h
//  testpolimorfismo
//
//  Created by Manolo Medina on 6/4/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef carteraDebito_h
#define carteraDebito_h
#include <iostream>
#include "usuario.h"
#include "tDebito.h"

using namespace std;

class carteraDebito:public tDebito{
private:
    int contacc = 0;
    Usuario *usrdd[10];
    
    
    
public:
    //void agrega_usuariocc();
    //void muestra_usuarioscc();
    
    
    void agrega_usuariodd(string _usr, string _ap, double _bal, int _pin){
        
        usrdd[contacc] = new tDebito(_usr, _ap, _bal, _pin);
        contacc++;
        //usrcc[0]->get_fullname();
    }
    
    void muestra_usuariosdd(){
        //usrcc[0]->get_fullname();
        for (int i=0; i < contacc; i++) //Imprimimos lista de clientes
        {
            if (usrdd[i] != NULL){
                usrdd[i]->get_fullname();
            }
        }
    }
};

#endif /* carteraDebito_h */
