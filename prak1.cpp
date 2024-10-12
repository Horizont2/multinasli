#include <iostream>
#include <cmath>
using namespace std;

class Kolo {
protected:
    double radius;
public:
    Kolo(double r) : radius(r) {}
    virtual double area() {
        return M_PI * radius * radius;
    }
};

class Kvadrat {
protected:
    double side;
public:
    Kvadrat(double s) : side(s) {}
    virtual double area() {
        return side * side;
    }
};

class KoloVpisaneVKvadrat : public Kolo, public Kvadrat {
public:
    KoloVpisaneVKvadrat(double side)
        : Kvadrat(side), Kolo(side / 2.0) {}
    
    void showAreas() {
        cout << "Площа кола: " << Kolo::area() << endl;
        cout << "Площа квадрата: " << Kvadrat::area() << endl;
    }
};

int main() {
    KoloVpisaneVKvadrat figure(4);
    figure.showAreas();
    return 0;
}
