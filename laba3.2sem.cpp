#include <iostream>
#include<string>
using namespace std;
class sotr {
protected:
    string name;
    double cash;
    double bonus;
    int god;
public:
    sotr(string name, double cash, double bonus, int god) {
        this->name = name;
        this->cash = cash;
        this->bonus = bonus;
        this->god = god;
    }
    virtual double deng() {
        return cash + cash * bonus / 100 * god;
    }
    virtual void print() {
        cout << "name-" << name << " cash=" << cash << " bonus=" << bonus << " god" << god;
    }
};
class nach :public sotr {
    double nad;
    string naz;
public:
    nach(string name, double cash, double bonus, int god, double nad, string naz) :sotr(name, cash, bonus, god) {
        this->nad = nad;
        this->naz = naz;
    }
    void print() {
        sotr::print();
        cout << "nad=" << nad << " naz=" << naz;

    }
};
int main()
{
    sotr vec1("Orkhan", 2, 3, 4);
    nach vec2("Cani", 5, 6, 7, 8, "ynik");
    vec1.print();
    vec2.print();
    sotr* sotr2 = new sotr("Maxon", 5, 6, 7);
    sotr2->print();
    nach* nach2 = new nach("lexa", 9, 10, 11, 12, "shkola");
    nach2->print();
}

