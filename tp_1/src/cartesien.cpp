#include "cartesien.hpp"
#include <sstream>

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

void Cartesien::setY(double pd)
{
    y = py;
}

void Polaire::afficher(std::stringstream& flux)
{
    flux << "(x=" << getX() <<";y=" << getY() << ")";
}