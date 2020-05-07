#include <iostream>
#include <string>
#include <vector>

#include "plante.cpp"
#include "plante.h"

using namespace std;

int main(){
    std::cout << "Welcome in the Garden" <<std::endl;
    
    Plante * Plant = new Plante("Plant");
    Plant->affiche();
    
    return 0;
};