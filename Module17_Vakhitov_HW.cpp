
#include <iostream>

class Vector
{
private:
    int x;
    int y;
    int z;

public:
    Vector() : x(5), y(6), z(7)
    {}

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    

    void Show()
    {
        std::cout << "\n" << x << " " << y << " " << z << "\n";
        double S = std::sqrt(x * x + y * y + z * z);
        std::cout << S;
    }

    

};




int main()
{
    Vector v;
    v.Show();
}

