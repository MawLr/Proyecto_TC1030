//
//  main.cpp
//  testpolimorfismo
//
/*
    Entrega Avance Clases abstractas:
        Se ha reescrito el código por practicidad, la clase Usuario se ha vuelto abstracta y sus métodos son sobreescritos en las clases tCredito, tDebito y tVales con el ejemplo de que en la función operaciones de tVales no se puede hacer depositos, el polimorfismo se incluye en las clases carteraCredito, carteraDebito y carteraVales, ahí se crean objetos de sus respectivas clases (tCredito, tDebito, etc.) y son añadidos a un vector que guarda los datos de los usuarios de sus respectivas tarjetas, los cuales pueden desplegarse según se quiera una vez se ejecuta el main, cabe mencionar que la visuallización de los datos se refiere a los del usuario en uso, es decir, el último usuario registrado, independientemente de su tipo de tarjeta, éste puede hacer operaciones definidas por su tipo, hago incapíe en que solo el último usuario registrado puede hacer uso de las opciones (2) y (3) del main.
        También se ajustó el UML.
 
*/
//  Created by Manolo Medina on 5/28/20.
//  Copyright © 2020 Manolo Medina. All rights reserved.
//

#include <iostream>
#include "usuario.h"
#include "carteraCredito.h"
#include "tCredito.h"
#include "carteraDebito.h"
#include "tDebito.h"
#include "carteraVales.h"
#include "tVales.h"

using namespace std;

void delay(long secs) {
  for(long i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

int main() {
    
   // carteraCredito *vectorCC[10] ;
    
   // int contaCC = 0;
    
    /*carteraCredito usr;   // esttructura básica
    
    usr.setNombre("Jan");
    usr.setApellido("Valta");
    
    cout << "Datos de Usuario: " << usr.mostrarDat() << endl;*/
    
    tCredito usr;
    carteraCredito carteraCredito;
    tDebito usrd;
    carteraDebito carteraDebito;
    tVales usrv;
    carteraVales carteraVales;
    int tcheck = 0;
    
    bool exit = false;
      while(exit == false){
          string tarjeta;
          string forename;
          string surname;
          int idpin;
          double cash;
          string n;
          idpin = 0;
          int option;
          cout<<"-------------------------------"<<endl;
          cout<<"          Royal Bank"<<endl;
          cout<<"-------------------------------"<<endl;
          cout<<"Escoje una de las opciones:"<<endl;
          cout<<"(1) Registrar nuevo Cliente"<<endl;
          cout<<"(2) Visualizar datos de cliente"<<endl;
          cout<<"(3) Realizar operaciones"<<endl;
          cout<<"(4) Visualizar listado de clientes Crédito"<<endl;
          cout<<"(5) Visualizar listado de clientes Debito"<<endl;
          cout<<"(6) Visualizar listado de clientes Vales"<<endl;
          cout<<"(7) SALIR"<<endl;
          cin>>option;
    
          switch (option){
              case 1:
                  cout<<"Tarjeta de debito, crédito o vales? C/D/V: ";
                  cin>>tarjeta;
                  if(tarjeta == "C" or tarjeta == "c"){
                      tcheck = 1;
                      cout<<"Introduce tu nombre: "<<endl;
                      cin>>forename;
                      usr.setNombre(forename);
                      cout<<"Introduce tu apellido: "<<endl;
                      cin>>surname;
                      usr.setApellido(surname);
                      cout<<"Ingrese su PIN: "<<endl;
                      cin>>idpin;
                      usr.setPin(idpin);
                      cout<<"Ingrese su balance actual: "<<endl;
                      cin>>cash;
                      usr.setBalance(cash);
                      carteraCredito.agrega_usuariocc(forename, surname, cash, idpin);
                      //tCredito.muestra_usuarioscc();
                      
                  }
                  else if(tarjeta == "D" or tarjeta == "d"){
                      tcheck = 2;
                      cout<<"Introduce tu nombre: "<<endl;
                      cin>>forename;
                      usrd.setNombre(forename);
                      cout<<"Introduce tu apellido: "<<endl;
                      cin>>surname;
                      usrd.setApellido(surname);
                      cout<<"Ingrese su PIN: "<<endl;
                      cin>>idpin;
                      usrd.setPin(idpin);
                      cout<<"Ingrese su balance actual: "<<endl;
                      cin>>cash;
                      usrd.setBalance(cash);
                      carteraDebito.agrega_usuariodd(forename, surname, cash, idpin);
                  }
                  else if(tarjeta == "V" or tarjeta == "v"){
                      tcheck = 3;
                      cout<<"Introduce tu nombre: "<<endl;
                      cin>>forename;
                      usrv.setNombre(forename);
                      cout<<"Introduce tu apellido: "<<endl;
                      cin>>surname;
                      usrv.setApellido(surname);
                      cout<<"Ingrese su PIN: "<<endl;
                      cin>>idpin;
                      usrv.setPin(idpin);
                      cout<<"Ingrese su balance actual: "<<endl;
                      cin>>cash;
                      usrv.setBalance(cash);
                      carteraVales.agrega_usuariovv(forename, surname, cash, idpin);
                  }
                  else{
                      cout<<"Opción invalida, saliendo por seguridad\n";
                      return(0);
                  };
                  break;
              
              case 2:
                  cout << "Obteniendo tus datos\n";
                  delay(1);
                  cout << "------->>>>>>>>>> 25%\n";
                  delay(1);
                  cout << "------->>>>>>>>>> 50%\n";
                  delay(1);
                  cout << "------->>>>>>>>>> 100%\n";
                  delay(1);
                  cout << "Tus datos son:\n\n";
                  //cout<<tcheck<<endl;
                  if(tcheck == 1){
                      cout << usr.mostrarDat()<<endl;
                      cout << "Balance actual: "<<usr.mostrarBal()<<endl;
                  }
                  else if(tcheck == 2){
                      cout << usrd.mostrarDat()<<endl;
                      cout << "Balance actual: "<<usrd.mostrarBal()<<endl;
                  }
                  else if(tcheck == 3){
                      cout << usrv.mostrarDat()<<endl;
                      cout << "Balance actual: "<<usrv.mostrarBal()<<endl;
                  };
                  break;
                  
              case 3:
                  cout<<"Introduzca su PIN: "<<endl;
                  cin>>idpin;
                  if(tcheck == 1){
                      if(idpin == usr.getPIN()){
                          usr.operaciones();
                      }
                      else{
                          cout<<"PIN Incorrecto"<<endl;
                      }
                  }
                  else if(tcheck == 2){
                      if(idpin == usrd.getPIN()){
                          usrd.operaciones();
                      }
                      else{
                          cout<<"PIN Incorrecto"<<endl;
                      }
                  }
                  else if(tcheck == 3){
                      if(idpin == usrv.getPIN()){
                          usrv.operaciones();
                      }
                      else{
                          cout<<"PIN Incorrecto"<<endl;
                      }
                  };
                  
                  break;
                  
              case 4:
                  cout<<"Lista de Clientes Credito"<<endl;
                  carteraCredito.muestra_usuarioscc();
                  break;
                  
              case 5:
                  cout<<"Lista de Clientes Debito"<<endl;
                  carteraDebito.muestra_usuariosdd();
                  break;
                  
              case 6:
                  cout<<"Lista de Clientes Vales"<<endl;
                  carteraVales.muestra_usuariosvv();
                  break;
                  
              case 7:
                  cout<<"FIN DE SESIÓN\n";
                  exit = true;
                  
            
          }
      }
    
    return 0;
};
