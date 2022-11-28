#include "histogramme.hpp"
#include <algorithm>

Histo::Histo(double borneInf, double borneSup, int nombreDeClasse){
    double step = (borneSup - borneInf)/nombreDeClasse;

    borneSup = borneInf + step;

    for (int i=0; i< nombreDeClasse; i++) {
        Classe c(borneInf, borneSup);
        classes.insert(c);

        borneInf = borneSup;
        borneSup += step;
    }
}

std::set<Classe> Histo::getClasses() const{
    return classes;
}

void Histo::ajouter(Echantillon e){
    for (int i = 0; i<e.getTaille(); ++i){
        Valeur v = e.getValeur(i);
        auto getClasse = [&v](Classe c){
            bool inClasse = false;
            if (v.getNombre() >= c.getBorneInf() && v.getNombre() < c.getBorneSup()){
                inClasse = true;
            }
            return inClasse;
        };
        auto result = std::find_if(begin(classes), end(classes), getClasse);

        Classe classe_temp((*result).getBorneInf(), (*result).getBorneSup());
        classe_temp.setQuantite((*result).getQuantite());
        classe_temp.ajouter();
        classes.erase(result);
        classes.insert(classe_temp);

    } 
}