#include "polaire.hpp"
#include "cartesien.hpp"

#include <sstream>
#include <cmath>

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

void Polaire::afficher(std::ostream& flux) const
{
    flux << "(a=" << getAngle() <<";d=" << getDistance() << ")";
}

void Polaire::convertir(Cartesien& point_car) const
{
    point_car.setX(getDistance() * std::sin(getAngle()));
    point_car.setY(getDistance() * std::cos(getAngle()));
}