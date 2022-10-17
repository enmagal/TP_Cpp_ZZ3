#ifndef TP1_NUAGE_HPP
#define TP1_NUAGE_HPP

#include <vector>

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

class Nuage
{
    public :
        using Points = std::vector<Point *>;
        using const_iterator = Points::const_iterator;
        Nuage();
        ~Nuage();
        int size() const;
        void ajouter(Polaire &);
        void ajouter(Cartesien &);
        const_iterator begin() const;
        const_iterator end() const;
    private :
        Points v;
};

Cartesien barycentre(Nuage);

// Calcul du barycentre en version foncteur
// Les foncteurs sont juste des classes servant de fonction grace à la surcharge de l'opérateur ()
class BarycentreCartesien{
    public:
        Cartesien operator()(Nuage n) {
            return barycentre(n);
        }
};

class BarycentrePolaire{
    public:
        Polaire operator()(Nuage n) {
            Cartesien b = barycentre(n);
            Polaire p;
            b.convertir(p);

            return p;
        }
};

#endif