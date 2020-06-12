## Proyecto ATM

### Datos:

- José Manuel Medina Rodríguez
- A01706212
- TC1030

## Descripcion

Este proyecto tiene la finalidad de demostrar los conceptos aprendidos en clase. En esencia es un Cajero Automático
que permite crear usuarios con sus respectivos tipos de tarjeta, por lo que hace uso de una estructura de clases para
poder manejar todos sus usuarios y añadirlos a sus respectivos arreglos y llevar así un control, para hacer esto, los
usuarios se separan por tipo, siendo estos de Credito, Débito y Vales respectivamente, cada uno con su propio arreglo.
El programa toma a cada usuario como un objeto de su respectivo tipo y permite utilizar los métodos que les corresponden,
por ejemplo, los usuarios de tarjetas de Vales no pueden hacer depositos, etc. También, como todo buen Cajero, éste nos
permite realizar operaciones bancarias, pero para utilizar esto de mejor manera ir a observaciones.

## Funcionalidad

Solo se permite dar de alta usuarios tipo Credito, Debito o Vales, dependiendo de lo que el usuario quiera.

Estos objetos usuarios son creados dentro de un arreglo en la memoria dependiendo su tipo.

Se pueden realizar operaciones con el último usuario creado.

Al inicializarse el programa se muestra un menú con las opciones que puede utilizar el usuario.

## Conceptos vistos en clase

- Clase abstracta y herencia:
  - usuario.h

- Herencia y sobreescritura:
  - tCredito
  - tDebito
  - tVales
  
- Composición, Polimorfismo y Apuntadores:
  - carteraCredito
  - carteraDebito
  - carteraVales
  
- UML
  - UML TC1030(1).png <- .png, no el .pdf
  
## Consideraciones

Al ejecutar el programa, solamente el último usuario creado puede efectuar operaciones bancarias.

El programa solamente corre en consola y no incluye ninguna libreria atada a un sistema operativo por lo que deberia
de poder correr en todos.

Está hecho con c++ y deberia poder compilar con la mayoria de los métodos usuales.
