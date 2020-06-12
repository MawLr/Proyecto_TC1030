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
#include "usuario.h"        // Se incluyen bibliotecas utilizadas
#include "tCredito.h"

using namespace std;

class carteraCredito:public tCredito{
private:
    int contacc = 0;        // Contador para vector
    Usuario *usrcc[10];     // Se define como apuntador para usar polimorfismo
    
    
    
public:
    // agrega_usuariocc agrega el objecto a arreglo de usuarios de credito
    void agrega_usuariocc(string tusr, string tap, double tbal, int tpin){
        // New crea el objeto para usar polimorfismo y lo agrega a arreglo
        usrcc[contacc] = new tCredito(tusr, tap, tbal, tpin);
        contacc++;
    }
    // mustra_usuarioscc nos va a mostrar todos los objetos guardados en el arreglo
    void muestra_usuarioscc(){
        for (int i=0; i < contacc; i++) //Imprimimos lista de clientes
        {
            if (usrcc[i] != NULL){
                usrcc[i]->get_fullname();
            }
        }
    }
};


#endif /* tCredito_h */
