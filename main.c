#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "negocio.h"

#include "cliente.h"
#include "lista.h"

///Ejercicio: crear un programa para administrar los clientes de un negocio
///El examen se debe entregar antes de las 19:30 comprimido en .rar a los siguientes mails
//nico_perez_velez@hotmail.com
//nperez_dcao_smn@outlook.com

//1) Anidar correctamente el negocio con los clientes (utilizando listas void, las que se adjuntan)

//2) Insertar los 5 clientes dados en el negocio (en el orden que los di)

//3) Mostrar el negocio, al mostrar el negocio se deben ver los clientes del mismo

//4) Ordenar los clientes por edad (en cualquier sentido). Mostrar el negocio y sus clientes.

//5) Eliminar al cliente Solange L. Mostrar el negocio y sus clientes.


///------------------- hasta ac� requisito de aprobaci�n -----------------

//6) Duplicar la lista y mostrarla. (Solo los clientes, no el negocio)






int main(int argc, char *argv[]) {
    NegocioPtr neg = crearNegocio("Paul Mac Carne", "Eva Peron 1520");

    ClientePtr c1 = crearCliente("Nico P.", 12121, 30, 3500.90);
    ClientePtr c2 = crearCliente("Solange L.", 99952, 18, 11500.50);
    ClientePtr c3 = crearCliente("Jorge G.", 231, 51, 500);
    ClientePtr c4 = crearCliente("Leandro R.", 25000, 44, 3000000);
    ClientePtr c5 = crearCliente("Alejandra V.", 2560, 52, 1000);

    insertarFinal((neg->l), &c1);
    printf("-----------1\n");
    insertarFinal((neg->l), c2);
    printf("-----------2\n");
    insertarFinal((neg->l), c3);
    printf("-----------3\n");
    insertarFinal((neg->l), c4);
    printf("-----------4\n");
    insertarFinal((neg->l), c5);
    printf("-----------5\n");
    mostrarNegocio(neg);


printf("\n--------duplicado------------\n");
        duplicado(neg->l);

        mostrarNegocio2(neg);

    return 0;
}
