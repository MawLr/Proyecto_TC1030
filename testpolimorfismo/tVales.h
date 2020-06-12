//
//  tVales.h
//  testpolimorfismo
//
//  Created by Manolo Medina on 6/4/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#ifndef tVales_h
#define tVales_h
#include "usuario.h"        // Se incluyen las bibliotecas utilizadas
#include <iostream>

using namespace std;

class tVales:public Usuario{        // Clase hereda de Usuario
public:
    tVales():Usuario(" "," ",0,0){};        // Contructor por default
    tVales(string nom, string ap, double bal, int id):Usuario(nom, ap, bal, id){};
    string mostrarDat(){
        return(nombre + " " + apellido);
    }
    double mostrarBal(){
        return(balance);
    }
    
    void operaciones(){     // Metodo de operaciones depende de tipo de tarjeta
        bool exit_opt = false;
        while(exit_opt == false){
            
            int opt;
            double retiro;
            
            cout << "(1) Consultar Saldo:"<<endl;
            cout << "(2) Realizar retiro:"<<endl;
            cout << "(3) Regresar al menu:"<<endl;
            cin >> opt;
            switch (opt){
                case 1:
                    cout << "Tu saldo es:\n";
                    cout<< balance<<endl;
                    break;
                case 2:
                    cout << "Importe a Retirar:\n";
                    cin >> retiro;
                    if(retiro > balance){
                        cout << "Saldo Insuficiente";
                        break;
                    }
                    else{
                        balance = balance - retiro;
                        cout<<balance<<endl;
                    }
                    break;
                case 3:
                    exit_opt = true;
                    break;
            }
        }
        
    }
    
    int getPIN(){
        return(pin);
    }
    
};

#endif /* tVales_h */
