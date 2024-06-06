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
    int total = precio * peso * clave;
    int descuento;
    int num;
    if (clave == 1) {
        descuento = 25;
        num = total / 100;
        for (int index = 0; index < num; index++) {
            total = total - descuento;
        }
        return total;
    } else if (clave == 2) {
        descuento = 30;
        num = total / 100;
        for (int index = 0; index < num; index++) {
            total = total - descuento;
        }
        return total;
    }else {
        return total;
    }
}

