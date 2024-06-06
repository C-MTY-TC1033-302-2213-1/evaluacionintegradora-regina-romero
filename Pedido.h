//
// Created by NXN233 on 06/06/2024.
//

#ifndef PEDIDO_H
#define PEDIDO_H

#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

const int MAX_PROD = 50;

class Pedido {
private:
    Producto *arrPtrProductos[MAX_PROD];
    int cantidad;

public:
    Pedido();

    void leerArchivo(string nombre);
    void ticketCliente();

};



#endif //PEDIDO_H
