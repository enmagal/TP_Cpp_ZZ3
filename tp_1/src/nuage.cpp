#include "nuage.hpp"

Nuage::Nuage()
{
}

Nuage::~Nuage()
{
}

int Nuage::size() const
{
    return v.size();
}

void Nuage::ajouter(Polaire & p)
{
    v.push_back(&p);
}

void Nuage::ajouter(Cartesien & c)
{
    v.push_back(&c);
}

Nuage::const_iterator Nuage::begin() const
{
    return std::begin(v);
}

Nuage::const_iterator Nuage::end() const
{
    return std::end(v);
}

Cartesien barycentre(Nuage n)
{
    Cartesien b;
    Cartesien tmp;
    double X = 0;
    double Y = 0;

    Nuage::const_iterator it = n.begin();

    while (it!=n.end())
    {
        (*it)->convertir(tmp);
        X += tmp.getX();
        Y += tmp.getY();
        *it ++;
    }

    b.setX(X / n.size());
    b.setY(Y / n.size());

    return b;
}