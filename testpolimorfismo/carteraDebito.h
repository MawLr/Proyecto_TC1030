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
#include "usuario.h"        // Se incluyen bibliotecas utilizadas
#include "tDebito.h"

using namespace std;

class carteraDebito:public tDebito{
private:
    int contacc = 0;        // Contador para vector
    Usuario *usrdd[10];     // Se define como apuntador para usar polimorfismo
    
    
    
public:
    // agrega_usuariocc agrega el objecto a arreglo de usuarios de credito
    void agrega_usuariodd(string tusr, string tap, double tbal, int tpin){
        // New crea el objeto para usar polimorfismo y lo agrega a arreglo
        usrdd[contacc] = new tDebito(tusr, tap, tbal, tpin);
        contacc++;
    }
    // mustra_usuarioscc nos va a mostrar todos los objetos guardados en el arreglo
    void muestra_usuariosdd(){
        for (int i=0; i < contacc; i++)     //Imprimimos lista de clientes
        {
            if (usrdd[i] != NULL){
                usrdd[i]->get_fullname();
            }
        }
    }
};

#endif /* carteraDebito_h */
