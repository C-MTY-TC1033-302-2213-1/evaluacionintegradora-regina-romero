//
// Created by NXN233 on 06/06/2024.
//

#include "Combo.h"

Combo::Combo() : Producto() {
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, int _clave) {
    clave = _clave;
}

string Combo::str() {
    return nombre + "-$"  + to_string(precio) + "-"  + to_string(peso) + "-$"  + to_string(calculaTotalPagar()) + "-"  + to_string(clave);
}

int Combo::calculaTotalPagar() {
    int total = precio*peso*clave;
    int num;
    if (clave == 1){
        num = total/ 100;
        for(int index = 1; index < num; index++) {
            total = total - 25;
        }
        return total;
    }
    else if (clave == 2){
        num = total/ 100;
        for(int index = 1; index < num; index++) {
            total = total - 30;
        }
        return total;
    }
    else {
        return total;
    }
}