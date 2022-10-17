#include <cstdlib>
#include <vector>
#include <iostream>

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

int main() {

    Cartesien p1(12.0,24.0);
    Cartesien p2(30.0,15.0);
    Polaire p3(13.0,25.0);
    Polaire p4(9.0, 17.0);

    std::vector<Point *> v;

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);

    for(Point * elt : v) {
        std::cout << *elt << std::endl; // Utilisation de l'opérateur de flux surchargé
    }
    // Il faut des pointeurs sinon on ne peut pas afficher

    return EXIT_SUCCESS;
}
