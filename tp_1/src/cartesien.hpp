#ifndef TP1_CARTESIEN_HPP
#define TP1_CARTESIEN_HPP

#include "point.hpp"

class Polaire;

class Cartesien : public Point
{
    public :
        Cartesien();
        Cartesien(double, double);
        ~Cartesien();
        double getX() const;
        double getY() const;
        void setX(double);
        void setY(double);
        void afficher(std::ostream&) const override;
        void convertir(Polaire&) const;


    private :
        double x;
        double y;
};

#endif