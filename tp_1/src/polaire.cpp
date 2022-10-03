#include "polaire.hpp"
#include <sstream>

Polaire::Polaire() : a(0), d(0)
{
}

Polaire::Polaire(double pa, double pd) : a(pa), d(pd)
{
}

Polaire::~Polaire()
{
}

double Polaire::getAngle() const
{
    return a;
}

double Polaire::getDistance() const
{
    return d;
}

void Polaire::setAngle(double pa)
{
    a = pa;
}

void Polaire::setDistance(double pd)
{
    d = pd;
}

void Polaire::afficher(std::stringstream& flux)
{
    flux << "(a=" << getAngle() <<";d=" << getDistance() << ")";
}