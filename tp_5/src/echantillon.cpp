#include "echantillon.hpp"

Echantillon::Echantillon(){
}

int Echantillon::getTaille() const{
    return sample.size();
}

void Echantillon::ajouter(Valeur value){
    sample.push_back(value);
}

double Echantillon::getMinimum() const{
    std::vector<Valeur>::iterator result = std::min_element(sample.begin(), sample.end());
    return result;
}

double Echantillon::getMaximum() const{
    std::vector<Valeur>::iterator result = std::max_element(sample.begin(), sample.end());
    return result;
}