#include "histogramme.hpp"
#include <algorithm>

Histo::Histo(double borneInf, double borneSup, int nombreDeClasse){
    double step = (borneSup - borneInf)/nombreDeClasse;

    borneSup = borneInf + step;

    for (int i=0; i< nombreDeClasse; i++) {
        Classe c(borneInf, borneSup);
        classes.push_back(c);

        borneInf = borneSup;
        borneSup += step;
    }
}

std::vector<Classe> Histo::getClasses() const{
    return classes;
}

void Histo::ajouter(Echantillon e){
    for (int i = 0; i<e.getTaille(); ++i){
        Valeur v = e.getValeur(i);
        auto getClasse = [&v](Classe c){
            bool inClasse = false;
            if (v.getNombre() > c.getBorneInf() && v.getNombre() < c.getBorneSup()){
                inClasse = true;
            }
            return inClasse;
        };
        auto result = std::find_if(begin(classes), end(classes), getClasse);

        (*result).ajouter();

    } 
}