#include "point.hpp"

class Polaire : public Point
{
    public :
        Polaire();
        Polaire(double, double);
        ~Polaire();
        double getAngle() const;
        double getDistance() const;
        void setAngle(double);
        void setDistance(double);
        void afficher(std::stringstream&) override;


    private :
        double a;
        double d;
};