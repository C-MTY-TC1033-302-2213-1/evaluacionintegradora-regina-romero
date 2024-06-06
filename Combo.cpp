//
// Created by NXN233 on 06/06/2024.
//

#include "Combo.h"

Combo::Combo() : Producto() {
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre, _precio, _peso) {
    clave = _clave;
}

string Combo::str() {
    return nombre + "-$"  + to_string(precio) + "-"  + to_string(peso) + "-$"  + to_string(calculaTotalPagar()) + "-"  + to_string(clave);
}

int Combo::calculaTotalPagar() {
    int total = Producto::calculaTotalPagar();
    int descuento = 0;
    if (clave == 1) {
        descuento = 25;
        int num = total / 100;
        total -= descuento * (num - 1);
        return total;
    } else if (clave == 2) {
        descuento = 30;
        int num = total / 100;
        total -= descuento * (num - 1);
        return total;
    }else {
        return total;
    }
}

