#include "nuage.hpp"

Nuage::Nuage() : l(0)
{
}

Nuage::~Nuage()
{
}

int Nuage::size() const
{
    return l;
}

void Nuage::ajouter(Point p)
{
    v.push_back(&p);
    l = l + 1;
}