#include <sstream>

class Point
{
    public:
        virtual void afficher(std::stringstream&) = 0;
        virtual ~Point() = default;
};