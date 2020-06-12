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
#include "usuario.h"        // Se incluyen bibliotecas utilizadas
#include "tVales.h"

using namespace std;

class carteraVales:public tVales{
private:
    int contacc = 0;        // Contador para vector
    Usuario *usrvv[10];     // Se define como apuntador para usar polimorfismo
    
    
    
public:
    // agrega_usuariocc agrega el objecto a arreglo de usuarios de credito
    void agrega_usuariovv(string tusr, string tap, double tbal, int tpin){
        // New crea el objeto para usar polimorfismo y lo agrega a arreglo
        usrvv[contacc] = new tVales(tusr, tap, tbal, tpin);
        contacc++;
    }
    // mustra_usuarioscc nos va a mostrar todos los objetos guardados en el arreglo
    void muestra_usuariosvv(){
        for (int i=0; i < contacc; i++)   //Imprimimos lista de clientes
        {
            if (usrvv[i] != NULL){
                usrvv[i]->get_fullname();
            }
        }
    }
};

#endif /* carteraVales_h */
