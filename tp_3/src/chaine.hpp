#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <iostream>
#include <sstream>

class ExceptionChaine : public std::exception{
    public :
        template <typename T>
        explicit ExceptionChaine(T obj): type_name(typeid(obj).name)
        { }

        const char* what() const noexcept override{
            return ("Conversion en chaine impossible pour ' " + type_name + "'").c_str(); 
        }
    
    private :
        std::string type_name;
};

template <typename T>
std::string chaine(T x)
{
    throw(ExceptionChaine(x))
}

#endif