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

Cartesien::Cartesien(Polaire& p)
{   
    x = p.getDistance() * std::cos(p.getAngle() * (2 * acos(0.0)) / 180);
    y = p.getDistance() * std::sin(p.getAngle() * (2 * acos(0.0)) / 180);
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
    point_pol.setAngle(std::atan2(getY(), getX()) * 180 / (2 * acos(0.0)));
    point_pol.setDistance(sqrt(getX()*getX() + getY()*getY()));
}

void Cartesien::convertir(Cartesien& point_car) const
{
    point_car.setX(getX());
    point_car.setY(getY());
}