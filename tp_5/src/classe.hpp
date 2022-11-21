#ifndef TP5_CLASSE_HPP
#define TP5_CLASSE_HPP

class Classe{
    private :
        double borneInf;
        double borneSup;
        double quantite;

    public :
        Classe(double inf, double sup);
        double getBorneInf() const;
        double getBorneSup() const;
        unsigned getQuantite() const;
        void setBorneInf(double a);
        void setBorneSup(double b);
        void setQuantite(unsigned n);
        void ajouter();
};

#endif