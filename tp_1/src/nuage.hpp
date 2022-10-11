#ifndef TP1_NUAGE_HPP
#define TP1_NUAGE_HPP

#include <vector>

#include "point.hpp"

class Nuage
{
    public :
        Nuage();
        ~Nuage();
        int size() const;
        void ajouter(Polaire);
    private :
        std::vector<Point *> v;
        int l;

};

#endif