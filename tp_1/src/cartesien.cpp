#include "cartesien.hpp"
#include "polaire.hpp"

#include <sstream>
#include <cmath>

Cartesien::Cartesien() : x(0), y(0)
{
}

Cartesien::Cartesien(double px, double py) : x(px), y(py)
{
}

Cartesien::~Cartesien()
{
}

double Cartesien::getX() const
{
    return x;
}

double Cartesien::getY() const
{
    return y;
}

void Cartesien::setX(double px)
{
    x = px;
}

void Cartesien::setY(double py)
{
    y = py;
}

void Cartesien::afficher(std::ostream& flux) const
{
    flux << "(x=" << getX() <<";y=" << getY() << ")";
}

void Cartesien::convertir(Polaire& point_pol) const
{
    point_pol.setAngle(std::atan2(getX(), getY()));
    point_pol.setDistance(sqrt(getX()*getX() + getY()*getY()));
}