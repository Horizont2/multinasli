#include <iostream>
using namespace std;

// Шаблонний базовий клас
template <typename T1, typename T2>
class Base {
protected:
    T1 value1;
    T2 value2;
public:
    Base(T1 v1, T2 v2) : value1(v1), value2(v2) {}

    virtual void showValues() {
        cout << "Value 1: " << value1 << endl;
        cout << "Value 2: " << value2 << endl;
    }
};

// Клас-нащадок, що додає T3 і T4
template <typename T1, typename T2, typename T3, typename T4>
class Child : public virtual Base<T1, T2> {
protected:
    T3 value3;
    T4 value4;
public:
    Child(T1 v1, T2 v2, T3 v3, T4 v4)
        : Base<T1, T2>(v1, v2), value3(v3), value4(v4) {}

    void showValues() override {
        Base<T1, T2>::showValues();
        cout << "Value 3: " << value3 << endl;
        cout << "Value 4: " << value4 << endl;
    }
};

// Клас-нащадок, що додає T5 і T6
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class Child2 : public Child<T1, T2, T3, T4> {
protected:
    T5 value5;
    T6 value6;
public:
    Child2(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6)
        : Child<T1, T2, T3, T4>(v1, v2, v3, v4), value5(v5), value6(v6) {}

    void showValues() override {
        Child<T1, T2, T3, T4>::showValues();
        cout << "Value 5: " << value5 << endl;
        cout << "Value 6: " << value6 << endl;
    }
};

int main() {
    Child2<int, double, char, string, float, bool> obj(1, 2.5, 'A', "Hello", 3.14f, true);
    obj.showValues();
    return 0;
}
