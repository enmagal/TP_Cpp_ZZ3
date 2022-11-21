#include "valeur.hpp"

Valeur::Valeur(): value(0){}

Valeur::Valeur(int a): value(a){}

double Valeur::getNombre() const{
    return value;
}

void Valeur::setNombre(double a){
    value = a;
}

bool Valeur::operator<(Valeur const & a) const{
    return this->getNombre() < a.getNombre();
} 