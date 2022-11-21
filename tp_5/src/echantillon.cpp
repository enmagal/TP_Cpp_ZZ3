#include "echantillon.hpp"
#include <algorithm>
#include <stdexcept>

Echantillon::Echantillon(){
}

int Echantillon::getTaille() const{
    return sample.size();
}

void Echantillon::ajouter(Valeur value){
    sample.push_back(value);
}

Valeur Echantillon::getMinimum() const{
    if (this->getTaille() == 0){
        throw std::domain_error("Le vecteur est vide");
    }
    else{
        auto result = std::min_element(sample.begin(), sample.end());
        return *result;
    }
}

Valeur Echantillon::getMaximum() const{
    if (this->getTaille() == 0){
        throw std::domain_error("Le vecteur est vide");
    }
    else{
        auto result = std::max_element(sample.begin(), sample.end());
        return *result;
    }
}

Valeur Echantillon::getValeur(int i) const{
    if (i >= this->getTaille()){
        throw std::out_of_range("i is out of range");
    }
    else{
        return sample[i];
    }
}