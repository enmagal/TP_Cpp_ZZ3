#include "classe.hpp"

Classe::Classe(double inf, double sup): borneInf(inf), borneSup(sup){

}

double Classe::getBorneInf() const{
    return borneInf;
}

double Classe::getBorneSup() const{
    return borneSup;
}

unsigned Classe::getQuantite() const{
    return quantite;
}

void Classe::setBorneInf(double a){
    borneInf = a;
}

void Classe::setBorneSup(double b){
    borneSup = b;
}

void Classe::setQuantite(unsigned n){
    quantite = n;
}

void Classe::ajouter(){
    quantite += 1;
}

bool Classe::operator<(Classe const & a) const{
    return getBorneInf() < a.getBorneInf();
} 