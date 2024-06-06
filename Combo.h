//
// Created by NXN233 on 06/06/2024.
//


#ifndef COMBO_H
#define COMBO_H

#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

class Combo : public Producto{
private:
    int clave;
public:
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    string str() override;
    int calculaTotalPagar() override;

};



#endif //COMBO_H
