//
// Created by colac on 10/23/2022.
//

#ifndef PROIECT_POWERSUPPLIES_H
#define PROIECT_POWERSUPPLIES_H

#include <iostream>
#include <string>
using std::string;
using std::ostream;

class PowerSupplies {
public:
    explicit PowerSupplies(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();
private:
    int PRICE;
     string NAME;
};
ostream& operator<<(ostream& COUT, PowerSupplies& p1);

#endif //PROIECT_POWERSUPPLIES_H
