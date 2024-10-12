#include <iostream>
using namespace std;

class Kolesa {
public:
    int kolesa;
    Kolesa(int k) : kolesa(k) {}
    void showKolesa() {
        cout << "Кількість коліс: " << kolesa << endl;
    }
};

class Dvygun {
public:
    string typDvyguna;
    Dvygun(string typ) : typDvyguna(typ) {}
    void showDvygun() {
        cout << "Тип двигуна: " << typDvyguna << endl;
    }
};

class Dveri {
public:
    int kilkistDverei;
    Dveri(int d) : kilkistDverei(d) {}
    void showDveri() {
        cout << "Кількість дверей: " << kilkistDverei << endl;
    }
};

class Avtomobil : public virtual Kolesa, public virtual Dvygun, public virtual Dveri {
public:
    Avtomobil(int k, string typ, int d) 
        : Kolesa(k), Dvygun(typ), Dveri(d) {}

    void showDetails() {
        showKolesa();
        showDvygun();
        showDveri();
    }
};

int main() {
    Avtomobil car(4, "Бензиновий", 4);
    car.showDetails();
    return 0;
}
