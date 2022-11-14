#include "echantillon.hpp"
#include <algorithm>

Echantillon::Echantillon(){
}

int Echantillon::getTaille() const{
    return sample.size();
}

void Echantillon::ajouter(Valeur value){
    sample.push_back(value);
}

Valeur Echantillon::getMinimum() const{
    auto result = std::min_element(sample.begin(), sample.end());
    return *result;
}

Valeur Echantillon::getMaximum() const{
    auto result = std::max_element(sample.begin(), sample.end());
    return *result;
}