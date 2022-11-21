#ifndef TP5_HISTOGRAMME_HPP
#define TP5_HISTOGRAMME_HPP

#include <valeur.hpp>
#include <echantillon.hpp>
#include <classe.hpp>

class Histo{
    private :
        std::vector<Classe> classes;

    public :
        Histo(double borneInf, double borneSup, int nombreDeClasse);
        std::vector<Classe> getClasses() const;
        void ajouter(Echantillon e);
};

#endif