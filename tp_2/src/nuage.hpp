#ifndef TP1_NUAGE_HPP
#define TP1_NUAGE_HPP

#include <vector>

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

template <typename T>
class Nuage
{
    public :
        using Points = std::vector<T>;
        using const_iterator = typename Points::const_iterator;
        Nuage();
        ~Nuage();
        int size() const;
        void ajouter(T);
        const_iterator begin() const;
        const_iterator end() const;
    private :
        Points v;
};

// Méthodes de Nuage

template <typename T>
Nuage<T>::Nuage()
{
}

template <typename T>
Nuage<T>::~Nuage()
{
}

template <typename T>
int Nuage<T>::size() const
{
    return v.size();
}

template <typename T>
void Nuage<T>::ajouter(T p)
{
    v.push_back(p);
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::begin() const
{
    return std::begin(v);
}

template <typename T>
typename  Nuage<T>::const_iterator Nuage<T>::end() const
{
    return std::end(v);
}

template <typename T>
Cartesien barycentre_v1(Nuage<T> n)
{
    Cartesien b;

    if(n.size() == 0)
    {
        b.setX(0);
        b.setY(0);
    }
    else
    {
        Cartesien tmp;
        double X = 0;
        double Y = 0;

        for(T p : n)
        {
            p.convertir(tmp);
            X += tmp.getX();
            Y += tmp.getY();
        }

        b.setX(X / n.size());
        b.setY(Y / n.size());
    }
    
    return b;
}

// Calcul du barycentre en version foncteur
// Les foncteurs sont juste des classes servant de fonction grace à la surcharge de l'opérateur ()
template <typename T>
class BarycentreCartesien{
    public:
        Cartesien operator()(Nuage<T> n) {
            return barycentre(n);
        }
};

template <typename T>
class BarycentrePolaire{
    public:
        Polaire operator()(Nuage<T> n) {
            Cartesien b = barycentre(n);
            Polaire p;
            b.convertir(p);

            return p;
        }
};

#endif