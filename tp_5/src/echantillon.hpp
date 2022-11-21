#ifndef TP5_ECHANTILLON_HPP
#define TP5_ECHANTILLON_HPP

#include "valeur.hpp"
#include <vector>
#include <cstring>

class Echantillon{
    private:
        std::vector<Valeur> sample;

    public:
        Echantillon();
        int getTaille() const;
        void ajouter(Valeur value);
        Valeur getMinimum() const;
        Valeur getMaximum() const;
        Valeur getValeur(int i) const;
};

#endif