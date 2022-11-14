#ifndef TP5_VALEUR_HPP
#define TP5_VALEUR_HPP

class Valeur{
    private:
        double value;

    public:
        Valeur();
        Valeur(int a);
        double getNombre() const;
        void setNombre(double a);
        bool operator<(Valeur const &) const;
};

  

#endif