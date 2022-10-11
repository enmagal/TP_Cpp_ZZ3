#ifndef TP1_POINT_HPP
#define TP1_POINT_HPP

#include <sstream>
#include <iosfwd>

class Cartesien;
class Polaire;

class Point
{
    public:
        virtual void afficher(std::ostream&) const = 0;
        virtual ~Point() = default;
        virtual void convertir(Polaire&) const = 0;
        virtual void convertir(Cartesien&) const = 0;
};

std::ostream & operator<<(std::ostream&, const Point &);

#endif