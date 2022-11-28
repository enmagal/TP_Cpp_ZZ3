#ifndef TP5_HISTOGRAMME_HPP
#define TP5_HISTOGRAMME_HPP

#include <valeur.hpp>
#include <echantillon.hpp>
#include <classe.hpp>
#include <set>

class Histo{
    private :
        std::set<Classe> classes;

    public :
        Histo(double borneInf, double borneSup, int nombreDeClasse);
        std::set<Classe> getClasses() const;
        void ajouter(Echantillon e);
};

#endif