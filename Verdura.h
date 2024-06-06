//
// Created by NXN233 on 06/06/2024.
//


#ifndef VERDURA_H
#define VERDURA_H

#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

class Verdura : public Producto{
private:
    string temporada;
public:
    Verdura();
    Verdura(string _nombre, int _precio, int _peso, string _temporada);

    string str() override;
    int calculaTotalPagar() override;

};

#endif //VERDURA_H



