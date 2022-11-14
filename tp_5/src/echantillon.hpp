#ifndef TP5_ECHANTILLON_HPP
#define TP5_ECHANTILLON_HPP

#include "valeur.hpp"
#include <vector>

class Echantillon{
    private:
        std::vector<Valeur> sample;

    public:
        Echantillon();
        int getTaille() const;
        void ajouter(Valeur value);
        Valeur getMinimum() const;
        Valeur getMaximum() const;
};

class ExceptionMinMax : public std::exception{
    public :
        explicit ExceptionMinMax(){

        };
        const char* what() const noexcept override{
            return 0;
        }
};

#endif