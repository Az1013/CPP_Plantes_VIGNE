#include <string>
#ifndef PLANTE_H
#define PLANTE_H

class Plante{
    private:
        std::string_nom;
        int _pousse;
        int _sante;
        int _soif;
    
    public:
        Plante(std::string name);
        
        void engrais(int energie);
        void taille(int coupe);
        void arrosage(int eau);
        
        void affiche();
};

#endif

