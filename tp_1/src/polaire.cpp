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

Polaire::Polaire(Cartesien& c)
{
    a = std::atan2(c.getY(), c.getX()) * 180 / (2 * acos(0.0));
    d = sqrt(c.getX()*c.getX() + c.getY()*c.getY());
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

void Polaire::convertir(Polaire& point_pol) const
{
    point_pol.setAngle(getAngle());
    point_pol.setDistance(getDistance());
}

void Polaire::convertir(Cartesien& point_car) const
{
    point_car.setX(getDistance() * std::cos(getAngle() * (2 * acos(0.0)) / 180));
    point_car.setY(getDistance() * std::sin(getAngle() * (2 * acos(0.0)) / 180));
}