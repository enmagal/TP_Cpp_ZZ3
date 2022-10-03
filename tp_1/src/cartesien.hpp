#include "point.hpp"

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
        void afficher(std::stringstream&) override;


    private :
        double x;
        double y;
}