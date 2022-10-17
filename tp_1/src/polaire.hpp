#ifndef TP1_POLAIRE_HPP
#define TP1_POLAIRE_HPP

#include "point.hpp"

class Cartesien;

class Polaire : public Point
{
    public :
        Polaire();
        Polaire(double, double);
        Polaire(Cartesien);
        ~Polaire();
        double getAngle() const;
        double getDistance() const;
        void setAngle(double);
        void setDistance(double);
        void afficher(std::ostream&) const override;
        void convertir(Polaire&) const override;
        void convertir(Cartesien&) const override;


    private :
        double a;
        double d;
};

#endif