#include "plante.h"
#include <string>
#include <iostream>

#ifndef PLANTE_CPP
#define PLANTE_CPP


/* std::string_nom;     int_pousse;       int_sante;      int_soif;*/

    Plante::Plante(std::string name) : _nom(name), _pousse(0), _sante(0), _soif(0) {}

    void engrais(int energie){
        _pousse-=energie;
        if(_pousse<0) _pousse=0;
        _soif+=10;
    }
    void taille(int coupe){
        _sante+=10;
        if(_sante<0) _sante=0;
        _pousse+=10;
        if(_sante>0) _sante=0;
        _sante-=10;
        _pousse-=10;
    }
    void arrosage(int eau){
        _soif-=10;
        if (_soif<0) _soif=0;
        _pousse+=10;
        _sante+=10;
}

#endif
