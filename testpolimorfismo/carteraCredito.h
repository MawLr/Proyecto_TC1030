//
//  tCredito.h
//  testpolimorfismo
//
//  Created by Manolo Medina on 6/3/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef carteraCredito_h
#define carteraCredito_h
#include <iostream>
#include "usuario.h"
#include "tCredito.h"

using namespace std;

class carteraCredito:public tCredito{
private:
    int contacc = 0;
    Usuario *usrcc[10];
    
    
    
public:
    //void agrega_usuariocc();
    //void muestra_usuarioscc();
    
    
    void agrega_usuariocc(string _usr, string _ap, double _bal, int _pin){
        
        usrcc[contacc] = new tCredito(_usr, _ap, _bal, _pin);
        contacc++;
        //usrcc[0]->get_fullname();
    }
    
    void muestra_usuarioscc(){
        //usrcc[0]->get_fullname();
        for (int i=0; i < contacc; i++) //Imprimimos lista de clientes
        {
            if (usrcc[i] != NULL){
                usrcc[i]->get_fullname();
            }
        }
    }
};


#endif /* tCredito_h */
