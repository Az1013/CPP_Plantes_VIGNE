#include "botaniste.h"
#include "plante.h"
#include <string>
#include <iostream>

#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

using namespace std;

void Botaniste :: sleep (int heure){
    _fatigue += heure;
    if(_fatigue = 1) std :: cout << "au petit matin" << std::endl;
    
}

void Botaniste :: buy (){
    _argent -= 5;
    _plantes += 2;
    if(_money<0) _money = 0;
    if(_money<0) std::cout << "plus de sous" << std::endl;
    
}

void Botaniste :: vendre(){
    _argent += 10
    _plantes -=1;
    if(_plantes < 1) _plantes = 0;
    if(_plantes < 1) std::cout << "plus de plantes" << std::endl;
    
}

#endif

